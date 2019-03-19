#include <signal.h>
#include <stdio.h>
#include <unistd.h>
#include <random>
#include <ctime>
#include "open62541.h"
#include <iostream>
#include "snap7.h"

//#include "open62541.h"
using namespace std;

extern "C" {
// Get declaration for f(int i, char c, float x)
#include "open62541.h"
}
#define NTHREAD 2000
#define NTHREADG 10

pthread_t ftid[NTHREAD];
pthread_t rtid[NTHREAD];
int thread_id[NTHREAD];
pthread_mutex_t full_mutex=PTHREAD_MUTEX_INITIALIZER;;
char *arrayInput;
int32_t nx=10;//=8;
int32_t ny=1;//=2;
typedef struct arg_struct {
    UA_Int32 NodId;
    int thread_id;
    char *linkConnection;
    int32_t totalOpration;
};


int ntThread=1;
int iteration=100,
        end_node_no=2,
        node_id=1;

char *serverLink="opc.tcp://localhost:4888";

int32_t total[NTHREAD];
double totalTime[NTHREAD];
double startTime[NTHREAD];
double startTimeEachone[NTHREAD];
double endTimeEachone[NTHREAD];
double lastmin[NTHREAD];
double lastmax[NTHREAD];
double optotal=500;

int     Error,
        counter=0,
        fair1=0,
        fair2=0,
        fair3=0,
        fair4=0;


TS7Server *Server;
byte DB1[256];  // Our DB1 plc1 32* 8 channel
byte DB2[256];  // Our DB2 plc2 32* 8 channel
byte DB3[256];  // Our DB3 plc3 32* 8 channel
byte DB4[256];  // Our DB4 plc4 32* 8 channel
byte DB5[128];  // flag 4 ( Number of End Node)* 32 ( 32 Memory Space)
byte DB6[5];    //free memory (Save the Index from 1 to 32)
byte DB7[5];    //full memory (Save the Index from 1 to 32)
byte DB8[5];    //full memory (Save the Index from 1 to 32)
uint32_t MB[2048];  // 2048 = Gateway Memory


void step7Server(){

    Server = new TS7Server;

    Server->RegisterArea(srvAreaDB,     // We are registering a DB
                         1,             // Its number is 1 (DB1)
                         &DB1,          // Its address
                         sizeof(DB1));  // Its size
    Server->RegisterArea(srvAreaDB,     // We are registering a DB
                         2,             // Its number is 2 (DB2)
                         &DB2,          // Its address
                         sizeof(DB2));  // Its size
    Server->RegisterArea(srvAreaDB,     // We are registering a DB
                         3,             // Its number is 3 (DB3)
                         &DB3,          // Its address
                         sizeof(DB3));  // Its size
    Server->RegisterArea(srvAreaDB,     // We are registering a DB
                         4,             // Its number is 4 (DB4)
                         &DB4,          // Its address
                         sizeof(DB4));  // Its size
    Server->RegisterArea(srvAreaDB,     // We are registering a DB
                         5,             // Its number is 5 (DB5)
                         &DB5,          // Its address
                         sizeof(DB5));  // Its size
    Server->RegisterArea(srvAreaDB,     // We are registering a DB
                         6,             // Its number is 6 (DB6)
                         &DB6,          // Its address
                         sizeof(DB6));  // Its size
    Server->RegisterArea(srvAreaDB,     // We are registering a DB
                         7,             // Its number is 7 (DB7)
                         &DB7,          // Its address
                         sizeof(DB7));  // Its size
    Server->RegisterArea(srvAreaDB,     // We are registering a DB
                         8,             // Its number is 8 (DB8)
                         &DB8,          // Its address
                         sizeof(DB8));  // Its size
    // Let’s share all Merkers from M0.0 to M2047.7
    Server->RegisterArea(srvAreaMK, 0, &MB, sizeof(MB));
    Error=Server->Start();

}


void * task1( void * thread_id) {

    int * id;
    id= (int  *) thread_id;
    int Start_index = (*id  - 1 ) * 32  ;
    int End_index = Start_index + 31 ;
    int freeStatus=0;
    std::cout <<"id:"<< *id << "-" << Start_index << "->" << End_index<<std::endl ;

    std::cout <<"DB6[thread_id]"<< *id << ":" << DB6[*id] <<std::endl ;
    //   printf("DB6[%d]:%x",*id,DB6[*id]);
    //   std::cout << "***************************************" ;


    while(1){
        for (int i = Start_index ; i <= End_index ; i++ ){ //round roobin alg.
            Server->LockArea(5,5);
            freeStatus=DB5[i];
          //  std::cout << "DB5 = " << freeStatus << std::endl;
            Server->UnlockArea(5,5);
            if(freeStatus==1 )
            {

                pthread_mutex_lock(&full_mutex);
                DB7[*id] = i-(*id-1)*32;   //full
                //std::cout << "DB7 = " <<(0xFF&DB7[*id]) << std::endl;
                //printf("start %d : %d =" , *id, Start_index);
                //for (int i = Start_index; i <= End_index; i++)
                    //printf("DB5[%d]:%d:%d-",i, DB5[i],DB7[*id]);
              //  printf("end,%d\n" ,End_index);
                pthread_mutex_unlock(&full_mutex);


            }else{
                Server->LockArea(5,6);
                DB6[*id] =  i-(*id-1)*32; // ofset of free block
                //dataFree=(0xFF&((char*)dataBlock)[0]);
                //std::cout << (0xFF&DB6[*id]) << std::endl;
                Server->UnlockArea(5,6);
                //           if (*id == 2 )
                //   printf("DB6[%d]:%x \n",*id,DB6[*id]);
            }
        }

        // usleep(1000000);

    }

    pthread_exit(NULL);
}










void * connectToClient(void * arguments) {

/*    pthread_mutex_lock(&full_mutex);
    Index = DB7[*id];
    pthread_mutex_unlock(&full_mutex);*/
    uint32_t jj=0,j;
    int ii=0 ,status_1=0,status_2=0,status_3=0,status_4=0;
    pthread_mutex_lock(&full_mutex);
    uint32_t nxl=nx;

    pthread_mutex_unlock(&full_mutex);
    uint32_t  checkpoint;

    std::random_device rd;  //Will be used to obtain a seed for the random number engine
    std::mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()
    std::uniform_int_distribution<> dis(1, 255);




    ///for min and max prosidures
    double startTimeforEach;
    double stopTimeforEach;
    double latencyforeach;
    double lastminforeach;
    double lastmaxforeach;
    double startTimeForloop;
    /// end
    struct arg_struct *args = (struct arg_struct *)arguments;


    struct timespec tim;
    tim.tv_sec = 0;
    tim.tv_nsec = 1;// the old submit tim.tv_nsec = 1

    /*
     * Shop floor bus
     *
     *
     * */
    int fullIndex=0 , readIndex=0;
    int * id;
    id= (int  *) &args->thread_id;
    int Index;
    int db51,db52,db53,db54;
    int totalloop;


connection:
    //pthread_mutex_lock(&full_mutex);
    UA_ClientConfig config= UA_ClientConfig_standard;

    UA_UsernamePasswordLogin useriot;
    useriot.username=UA_String_fromChars("mohamad");
    useriot.password=UA_String_fromChars("123456");

    UA_Client *client = UA_Client_new(config);

    //UA_StatusCode retval = UA_Client_connect(client, "opc.tcp://localhost:4888");
   // UA_StatusCode retval = UA_Client_connect(client, (char *) args->linkConnection);
    UA_StatusCode retval = UA_Client_connect_username(client, (char *) args->linkConnection,"mohamad","123456");
    if(retval != UA_STATUSCODE_GOOD) {
        UA_Client_delete(client);
        std::cout<<"error code"<< (int)retval<<std::endl;
        sleep(5);// retry connection
        ii++;
        if(ii<3)
            goto connection;
        else
            exit(0);

    } else{
        printf("connected goood~! %d \n", args->NodId);
        sleep(2);// delay for stablish the connectio

    }


    UA_Variant value; /* Variants can hold scalar values and arrays of any type */
    UA_Variant_init(&value);




    UA_Variant value2;
    UA_Variant_init(&value2);

    UA_Int32 *nodeNo= &args->NodId;
    UA_NodeId nodeId =UA_NODEID_NUMERIC(1, *nodeNo );//args->NodId);
    //UA_NodeId nodeId2 =UA_NODEID_STRING(1,);
    //UA_NodeId nodeId3 =UA_NODEID_NUMERIC(1,117);

    UA_Variant v3;
    v3.arrayDimensionsSize = 2;
    //UA_Int32 dataG[nx] = {2, jj, dis(gen), dis(gen), dis(gen), dis(gen), dis(gen), dis(gen), dis(gen), dis(gen)};
    UA_Int32 dataG[nxl] = {2, jj, 1, 1, 1, 1, 1,1, 1,1};
    totalloop=args->totalOpration;

 //   while (jj<= optotal || ((std::clock()-startTimeForloop)/CLOCKS_PER_SEC) <= 10 ) {
    //while (jj<= optotal ) {
    printf("step1~! %d \n", args->NodId);
    startTime[args->thread_id] = std::clock();
    startTimeForloop = std::clock();
    //while (1) {
    while (jj < totalloop ) {


       // dataG[1] = 2;//{2,1,23,5,5,54,4,5,8,4};
        retry:
        //startTimeforEach = std::clock();

      //  if(status_1==1 || status_2==1 || status_3==1 || status_4==1) {

        //if(status_1==1) {
            pthread_mutex_lock(&full_mutex);
            UA_StatusCode check = UA_Client_readValueAttribute(client, nodeId, &value2);
            //usleep(2000);
            pthread_mutex_unlock(&full_mutex);


            if (check == UA_STATUSCODE_GOOD && value2.data != NULL) {
                //    Point *p = (Point *)value.data;
                // if(jj== checkp) {
                UA_Int32 *valueArr = (UA_Int32 *) value2.data;

                //int checkp=(valueArr[1]+1);
                //pthread_mutex_lock(&full_mutex);

                checkpoint = valueArr[0];

                //pthread_mutex_unlock(&full_mutex);
                if (checkpoint == 1) {

                    dataG[0]=2;
                    dataG[1]=jj;
                    //writePosition:
                    UA_Variant_setArrayCopy(&v3, dataG, nx, &UA_TYPES[UA_TYPES_INT32]);

                    pthread_mutex_lock(&full_mutex);
                    UA_StatusCode status = UA_Client_writeValueAttribute(client, nodeId, &v3);
                    //usleep(2000);

                    pthread_mutex_unlock(&full_mutex);
                    if (status == UA_STATUSCODE_GOOD) {

                        jj++;
                        //printf("step4~ %d ! %d \n",jj, args->NodId);
                        //printf("witen goood~! %d -int = %d - %d \n", args->NodId,jj,total[args->thread_id]);

/*
                     stopTimeforEach = std::clock();
                        latencyforeach = stopTimeforEach - startTimeforEach;
                        if (jj == 2) {
                            lastminforeach = latencyforeach;
                        }
                        if (latencyforeach <= lastminforeach) {
                            lastminforeach = latencyforeach;
                        }
                        if (latencyforeach >= lastmaxforeach) {
                            lastmaxforeach = latencyforeach;
                        }*/

//                        status_1=0;
//                        status_2=0;
//                        status_3=0;
//                        status_4=0;

                    } else {

                        //pthread_mutex_lock(&full_mutex);
                        std::cout << "error code" << (int) status << "nodeID" << args->NodId << std::endl;
                        //std::cout<<"read data="<< checkp << "; loop number=" << jj << "nodeID=" << args->NodId<<std::endl;
                       // pthread_mutex_unlock(&full_mutex);
                        exit(0);
                    }
                }else
                goto retry;


            }

            usleep(100);//10000
        //}
       // nanosleep(&tim, (struct timespec *)NULL);

//       }else{
//           std::cout << "exit over flow time error code nodeID" << args->NodId << std::endl;
//            std::cout << "exit over flow time error code nodeID" << (std::clock()-startTimeForloop)/CLOCKS_PER_SEC << std::endl;
//          exit(0);
//      }

    }
    pthread_mutex_lock(&full_mutex);
    totalTime[args->thread_id]=(std::clock()-startTime[args->thread_id]);
    pthread_mutex_unlock(&full_mutex);
    ///    DB8[*id]=0x01;

//    pthread_mutex_lock(&full_mutex);
//    total[args->thread_id] = ++jj;
//    pthread_mutex_unlock(&full_mutex);
    /* Clean up */
    //pthread_mutex_lock(&full_mutex);
    //std::cout << "starttime" << startTimeForloop << "stop time" << std::clock() << std::endl;
    //totalTime[args->thread_id]=(std::clock()-startTime[args->thread_id]);
    std::cout << "through put :, " << jj /(totalTime[args->thread_id]/CLOCKS_PER_SEC)
             //<< ",per sec  time  :," << (totalTime[args->thread_id]/CLOCKS_PER_SEC)
             //<< ",min latency  :," << (lastminforeach/CLOCKS_PER_SEC)
            // << ",max latency  :," << (lastmaxforeach/CLOCKS_PER_SEC)
             << ",total opration," << jj<<std::endl;
    UA_Variant_deleteMembers(&value);
    UA_Client_delete(client); /* Disconnects the client internally */
    //pthread_mutex_unlock(&full_mutex);
    return UA_STATUSCODE_GOOD;


}






int main(int argc, char *argv[]) {

    pthread_mutex_init(&full_mutex,NULL);
    arrayInput=argv[3];
    void *status;
    struct arg_struct args1[NTHREAD];
    int No;
    double totalOpration=0;
    double sumTime=0;
    double timeTh=0;
    double startClock;//;
    double startClockLatancy;//
    double stopTime;//
    double totalTime;//
    int32_t nodeGenerator = 0;

    step7Server();


    if (Error==0) {

    if(argc>1){
        int8_t  Number = argc;
        end_node_no =atoi(argv[4]);
        optotal=atoi(argv[2]);
        std::cout << "-------------------- DIIG-OPC service started ----------------- " << std::endl;
        std::cout << " There are end_nodes : "<< end_node_no << std::endl;
        std::cout << "--------------------------------------------------------------- " << std::endl;
        std::cout << " Total operations are : " << optotal << std::endl;



        //if ( atoi(argv[1]) > 10 )


    }else{
        std::cout << "there is no value input"  << std::endl;;
        exit(0);
    }




//    int  counter=1;
//    thread_id[counter]=counter;
//    pthread_create(&(ftid[counter]), NULL, &connectToClient, (void *) &thread_id[counter] );




        //	double timeTh=0;
/*        for (counter = 1; counter <= end_node_no; counter++)// Creating free flag and Relay thread workers
        {
            thread_id[counter] = counter;
            pthread_create(&(ftid[counter]), NULL, &task1, (void *) &thread_id[counter]);
            pthread_create(&(rtid[counter]), NULL, &task2, (void *) &thread_id[counter]);  //
        }
*/

       // while (1);;

        nodeGenerator = atoi(argv[4]);

        startClock = std::clock();
        startClockLatancy = std::clock();

        for (int counter = 1; counter <= atoi(argv[3]); counter++)// Creating free flag and Relay thread workers
        {
            thread_id[counter] = counter;

            args1[counter].NodId = (UA_Int32) nodeGenerator;
            args1[counter].thread_id = counter;
            args1[counter].linkConnection = argv[1];
            args1[counter].totalOpration = optotal;
            std::cout << "--------------------------------------------------------------- " << std::endl;
            std::cout << " Node ID connected : " << args1[counter].NodId << ","<<nodeGenerator << std::endl;

            //pthread_create(&(ftid[counter]), NULL, &task1, (void *) &thread_id[counter]);
            //pthread_create(&(rtid[counter]), NULL, &task2, (void *) &thread_id[counter]);  //

            pthread_create(&(ftid[counter]), NULL, &connectToClient, (void *) &args1[counter]);
            nodeGenerator = nodeGenerator + 2;
            usleep(10000);
            //pthread_create(&(rtid[counter]), NULL, &taskWrite, (void *) &thread_id[counter]);  //
        }


/*    for( int counter=1; counter<=threadNumber; counter++)// Creating free flag and Relay thread workers
    {
        thread_id[counter]=counter;
        int ret=pthread_create(&(ftid[counter]), NULL, &clients, (void *) &thread_id[counter] );
        std::cout << ret << std::endl;
    }*/
        for (int counterJ = 1; counterJ <= atoi(argv[3]); counterJ++)// Creating free flag and Relay thread workers
        {
          
            pthread_join(ftid[counterJ], &status);

            // pthread_create(&(ftid[counter]), NULL, &clients, (void *) &thread_id[counter] );
        }


        /*timeTh = ( std::clock() - startClock ) / (double) CLOCKS_PER_SEC;
        stopTime= std::clock();
        totalTime=stopTime-startClock;
        for (int counterk=1;counterk <= atoi(argv[2]); counterk++){
            totalOpration=total[counterk]+totalOpration;

        }*/


        // std::cout << "throught put :" <<( totalTime/totalOpration )<< std::endl;
        //  Summary();
        //std::cout << "T is :"<< (threadNumber*1000)/sumTime << std::endl;
//    std::cout << "T 2 is :"<< (threadNumber*1000)/timeTh << std::endl;
//    std::cout << "T latancy task 1 is :"<< latancy[1] << std::endl;
//    std::cout << "T latancy task 2 is :"<< latancy[2] << std::endl;
//    std::cout << "T latancy task 3 is :"<< latancy[3]  << std::endl;
//    std::cout << "T latancy task 4 is :"<< latancy[4] << std::endl;

        pthread_exit(NULL);

        // while(1);
    }else{
        std::cout << "---------------------------------- Error !!  ----------------------------" << std::endl;
        printf("%s\n",SrvErrorText(Error).c_str());
    }


}

/**
 * TODO
 * Create server by DIIG applicatioon
 *
 *
 *
 */
