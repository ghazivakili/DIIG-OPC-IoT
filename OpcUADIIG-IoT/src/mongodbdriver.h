
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <mongo/client/dbclient.h>
#ifndef MONGODBDRIVER
#define MONGODBDRIVER

using mongo::BSONElement;
using mongo::BSONObj;
using mongo::BSONObjBuilder;
using mongo::DBClientConnection;


/*
* json builder
*/

BSONObj dataToJson(int node_id,const int32_t items[]) {
    std::stringstream columName;
    BSONObjBuilder b;
    b.append("nodeID", node_id );

    for (int i=0 ; i<8 ; i++)
      {
        columName.str("");
        columName << "data_";
        columName << i;
        b.append(columName.str(), items[i]);

      }

    BSONObj p = b.obj();
    return p;
}

#endif
