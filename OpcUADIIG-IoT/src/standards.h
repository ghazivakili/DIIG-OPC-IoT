#include "open62541.h"
#ifndef STANDARDS
#define STANDARDS
extern "C" {
// Get declaration for f(int i, char c, float x)
//#include "open625413/open62541.h"
#include "open62541.h"
}

static UA_NodeId pointTypeId;
int32_t nx=10;//=8;
int32_t ny=1;//=2;
char *Nodename= (char*)"Node1";

#define DELAYREADS 0
#define DELAYREADNS 100

typedef struct arg_struct {
    UA_Int32 NodId;
    UA_NodeId NodeId;
    int thread_id;
    int db_id;
};

UA_Server *server;

pthread_mutex_t full_mutex=PTHREAD_MUTEX_INITIALIZER;;


/*
 * add 2D variables
 */

static void
addVariableType2DPoint(UA_Server *server,
                       char *nodeName) {

    UA_VariableTypeAttributes vtAttr;
    UA_VariableTypeAttributes_init(&vtAttr);
    //vtAttr.dataType = UA_TYPES[UA_TYPES_DOUBLE].typeId;
    vtAttr.dataType = UA_TYPES[UA_TYPES_INT32].typeId;
    vtAttr.valueRank = 1; /* array with one dimension */
    UA_UInt32 arrayDims[1] = {nx};//,ny};//2
    vtAttr.arrayDimensions = arrayDims;
    vtAttr.arrayDimensionsSize = ny;//2
    vtAttr.displayName = UA_LOCALIZEDTEXT("en_US", nodeName); //display name

    /* a matching default value is required */

    UA_Int32 zerox[nx] = { 1, 0, 0 , 0,0, 0, 0 , 0};

    UA_Variant_setArray(&vtAttr.value, zerox , nx, &UA_TYPES[UA_TYPES_INT32]);

    UA_Server_addVariableTypeNode(server, UA_NODEID_NULL,
                                  UA_NODEID_NUMERIC(0, UA_NS0ID_BASEVARIABLETYPE),
                                  UA_NODEID_NUMERIC(0, UA_NS0ID_HASSUBTYPE),
                                  UA_QUALIFIEDNAME(1, nodeName), UA_NODEID_NULL,
                                  vtAttr, NULL, &pointTypeId);
}

static UA_NodeId pointVariableId;

UA_NodeId
addVariable(UA_Server *server,
            char *nodeName) {
    /* Prepare the node attributes */
    UA_VariableAttributes vAttr;
    UA_VariableAttributes_init(&vAttr);
    vAttr.dataType = UA_TYPES[UA_TYPES_INT32].typeId;
    vAttr.valueRank = 1; /* array with one dimension */
    UA_UInt32 arrayDims[1] = {nx};//,ny};
    vAttr.arrayDimensions = arrayDims;
    vAttr.arrayDimensionsSize = ny;
    vAttr.displayName = UA_LOCALIZEDTEXT("en_US", nodeName);
    vAttr.accessLevel = UA_ACCESSLEVELMASK_READ | UA_ACCESSLEVELMASK_WRITE;

    /* Add the node
     *
     *
     * */
    UA_Server_addVariableNode(server, UA_NODEID_NULL,
                              UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER),
                              UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),
                              UA_QUALIFIEDNAME(1, nodeName), pointTypeId,
                              vAttr, NULL, &pointVariableId);
    return pointVariableId;
}
static void
addVariableFail(UA_Server *server,
                char *nodeName) {
    /* Prepare the node attributes */
    UA_VariableAttributes vAttr;
    UA_VariableAttributes_init(&vAttr);
    vAttr.dataType = UA_TYPES[UA_TYPES_INT32].typeId;
    vAttr.valueRank = -1; /* a scalar. this is not allowed per the variable type */
    vAttr.displayName = UA_LOCALIZEDTEXT("en_US", nodeName );//(char*)"failed");
    UA_String s = UA_STRING("2dpoint?");
    UA_Variant_setScalar(&vAttr.value, &s, &UA_TYPES[UA_TYPES_STRING]);

    /* Add the node */
    UA_Server_addVariableNode(server, UA_NODEID_NULL,
                              UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER),
                              UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT),
                              UA_QUALIFIEDNAME(1,nodeName), pointTypeId,
                              vAttr, NULL, NULL);
}
static void
writeVariable(UA_Server *server) {
    UA_StatusCode retval = UA_Server_writeValueRank(server, pointVariableId, 0);
    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND,
                "Setting the Value Rank failed with Status Code %s\n",
                UA_StatusCode_name(retval));

}
UA_Boolean running = true;






/*
 * read data from data block in opcua server (internal)
 */
void * Readdata(void *arguments) {




    usleep(1000000);
    struct arg_struct *args = (struct arg_struct *) arguments;
    int jj = 0;
    std::string message_string;
    std::stringstream Intstring;
    UA_Variant value; /* Variants can hold scalar values and arrays of any type */
    UA_Variant_init(&value);
    //value.dataType = UA_TYPES[UA_TYPES_INT32].typeId;
    //value.valueRank = 1; /* array with one dimension */

    UA_UInt32 arrayDims[1] = {nx};//,ny};//2
    value.arrayDimensions = arrayDims;
    value.arrayDimensionsSize = 2;

    struct timespec tim;
    tim.tv_sec = DELAYREADS;
    tim.tv_nsec = DELAYREADNS;

    UA_Variant v3;
    UA_Variant_init(&v3);

    UA_Int32 *valueArr;
    int *checkValue;

    //cassandra_setup();
    /*start cassandra setting*/
    CassCluster* cluster = NULL;
    CassSession* session = cass_session_new();
    CassUuidGen* uuid_gen = cass_uuid_gen_new();
    CassUuid uuid;
    char* hosts = "127.0.0.1";

    //const char* items[] = { "1", "2", "3", "4", "6","7","8",NULL};
    const int32_t items[] = { 1, 2, 3, 4, 5,6,7,8};
    cluster = create_cluster(hosts);

    if (connect_session(session, cluster) != CASS_OK) {
      cass_cluster_free(cluster);
      cass_session_free(session);
      //return -1;
    }
    create_db_cass(session);

    /*end cassandra setting*/
    /*start mongodb setting*/
    mongo::client::initialize();
    mongo::DBClientConnection c;
    BSONObj jsonData;
    if (args->db_id==3 || args->db_id==4){




    try {
          c.connect("127.0.0.1");
          std::cout << "connected ok" << std::endl;
        } catch( const mongo::DBException &e ) {
          std::cout << "caught " << e.what() << std::endl;
        }



      }
    /*end mongodb setting*/


    v3.arrayDimensions = arrayDims;
    //v3.arrayDimensionsSize = 1;
    v3.arrayDimensionsSize = 2;
    pthread_mutex_lock(&full_mutex);
    int nxl = nx;
    pthread_mutex_unlock(&full_mutex);
    UA_Int32 freeData[nxl] = { 1, 0, 0, 0, 0, 0, 0, 0  ,0,0 };
    pthread_mutex_lock(&full_mutex);

    UA_Variant_setArrayCopy(&v3, freeData, nxl, &UA_TYPES[UA_TYPES_INT32]);
    printf("NodeId = %d \n", args->NodeId.identifier.numeric);

    //UA_NodeId nodeToRead = UA_NODEID_NUMERIC(1, args->NodeId.identifier.numeric);
    pthread_mutex_unlock(&full_mutex);

    while (1) {

        pthread_mutex_lock(&full_mutex);
        UA_StatusCode check = UA_Server_readValue(server, args->NodeId, &value);
        //printf("read is GOOD\n");
        checkValue= value.data;

        pthread_mutex_unlock(&full_mutex);


        if (check == UA_STATUSCODE_GOOD && checkValue!=NULL) {
            pthread_mutex_lock(&full_mutex);

            valueArr = (UA_Int32 *) value.data;

            pthread_mutex_unlock(&full_mutex);
            // usleep(2000);


            //message_string =

            if (valueArr[0] == 2) {

                if(args->db_id == 1){


                Intstring.str("");
                Intstring << "{{\"NodeId\":{";
                Intstring << "{{\"NodeId\":{";
                Intstring << args->NodeId.identifier.numeric;
                Intstring << "},";
                Intstring << "\"dataId\",{";
                Intstring << jj;
                Intstring << "},";
                Intstring << "{\"data\":{";
                for (int i = 2; i <= 9; i++){
                    Intstring << valueArr[i];
                    if(i<9)
                    Intstring << ",";
                }
                Intstring << "}}}\n";



                pthread_mutex_lock(&full_mutex);
                send_kafka(Intstring.str(),"localhost:9092","test");
                pthread_mutex_unlock(&full_mutex);
              }else if(args->db_id == 2){

                pthread_mutex_lock(&full_mutex);
                cass_uuid_gen_time(uuid_gen, &uuid);
                insert_into_collections(session, args->NodeId.identifier.numeric , uuid, valueArr);//
                pthread_mutex_unlock(&full_mutex);
                //select_from_collections(session, uuid);
              }else if(args->db_id == 3){


                jsonData = dataToJson(args->NodeId.identifier.numeric,valueArr);

                pthread_mutex_lock(&full_mutex);
                c.insert("test.collections",jsonData);
                pthread_mutex_unlock(&full_mutex);


              }else if(args->db_id == 4) {
                //printf("%d\n", args->db_id );
                Intstring.str("");
                Intstring << "{{\"NodeId\":{";
                Intstring << "{{\"NodeId\":{";
                Intstring << args->NodeId.identifier.numeric;
                Intstring << "},";
                Intstring << "\"dataId\",{";
                Intstring << jj;
                Intstring << "},";
                Intstring << "{\"data\":{";
                for (int i = 2; i <= 9; i++){
                    Intstring << valueArr[i];
                    if(i<9)
                    Intstring << ",";
                }
                Intstring << "}}}\n";



                pthread_mutex_lock(&full_mutex);
                send_kafka(Intstring.str(),"localhost:9092","test");
                cass_uuid_gen_time(uuid_gen, &uuid);
                insert_into_collections(session, args->NodeId.identifier.numeric , uuid, valueArr);
                pthread_mutex_unlock(&full_mutex);

                pthread_mutex_lock(&full_mutex);
                jsonData = dataToJson(args->NodeId.identifier.numeric,valueArr);
                c.insert("test.collections",jsonData);
                pthread_mutex_unlock(&full_mutex);

              }else{
                printf("%d\n", args->db_id );
              }
                pthread_mutex_lock(&full_mutex);
                check =UA_Server_writeValue(server,args->NodeId,v3);
                pthread_mutex_unlock(&full_mutex);
                //usleep(2000);

                //pthread_mutex_unlock(&full_mutex);
                //pthread_mutex_unlock(&full_mutex);
                if (check == UA_STATUSCODE_GOOD) {
                    jj++;
                    //printf("write is GOOD\n");
                    // printf(" is free %d \n",jj);
                }
            }

            // }

            //usleep(500);//2000-10000

        }
        //pthread_mutex_unlock(&full_mutex);
       // usleep(1000000);
        nanosleep(&tim, (struct timespec *)NULL);


    }
}



#endif
