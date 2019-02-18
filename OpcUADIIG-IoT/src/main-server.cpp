#include <signal.h>
#include <stdio.h>
#include <stdlib.h>     /* atoi */
#include <iostream>

#include <sstream>
#include <unistd.h>
#include <string>
#include "mongodbdriver.h"
#include "cassandradriver.h"
#include "kafkadriver.h"
#include "standards.h"

using namespace std;
int32_t lisiningPort=4888;
char* dbname[]={"","kafka","Cassandra","mongodb","mixed:kafka-Cassandra-mongodb"};

static void stopHandler(int sign) {
    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "received ctrl-c");
    running = false;
}




/*
 * define global variables
 *
 */

#define NTHREAD 10
pthread_t ftid[NTHREAD];
pthread_t rtid[NTHREAD];
int thread_id[NTHREAD];

int main(int argc, char *argv[]) {

        pthread_mutex_init(&full_mutex,NULL);
        int8_t db_id;
        if(argc>3){

            std::cout << "There are " << argc << "Input argument"<<std::endl;
            int8_t  Number = argc;
            lisiningPort=atoi(argv[1]);
            db_id=atoi(argv[2]);


        }else{
            std::cout << "There is no input argument."  << std::endl;
            std::cout << "<PortNo> <dbConnector [1=> kafka 2=>Cassandra 3=>mongodb]> <Nodenames [Node1] [Node2] ... [Node.n]>"  << std::endl;
            exit(0);
        }
        std::cout << "The port is Lisining :" << lisiningPort << std::endl;
        std::cout << "The Database is :" << dbname[db_id] << std::endl;






        signal(SIGINT, stopHandler);
        signal(SIGTERM, stopHandler);


        UA_ServerConfig config = UA_ServerConfig_standard;
        UA_ServerNetworkLayer nl =  UA_ServerNetworkLayerTCP(UA_ConnectionConfig_standard, lisiningPort);
        config.networkLayers = &nl;
        config.networkLayersSize = 1;
        config.nThreads=20;
        server = UA_Server_new(config);

        struct arg_struct args1[NTHREAD];

        int upperLevel=(argc-1);
        for (int i = 3; i <= upperLevel; ++i) {

            Nodename = argv[i];

            printf("argv[%d] = %s \n", i, argv[i]);
            addVariableType2DPoint(server, Nodename);
            args1[i].NodeId=addVariable(server,Nodename);
            args1[i].db_id= db_id;
            addVariableFail(server, Nodename);
            pthread_create(&(ftid[i]), NULL, &Readdata, (void *) &args1[i]);


        }




        UA_Server_run(server, &running);
        UA_Server_delete(server);
        nl.deleteMembers(&nl);
        return 0;
    }