# OpcUADIIGIoTServer
-----------------------------
This is a server for new IIoT platform which is based on IEC62541 standards. This server can accept data from the DIIG-Middleware.

## Requirements

- gcc version  >= 5.4.0
- Apache Python 2.7 (for cqlsh 5.0.1)
- Java >= 1.8 (OpenJDK and Oracle JVMS have been tested)
- Databases
  - [zookeeper version=3.4.13](https://zookeeper.apache.org/releases.html)
  - [Apache Kafka kafka 1.4.0](https://kafka.apache.org/quickstart)
  - [Mongodb version v2.6.10](https://docs.mongodb.com/manual/release-notes/2.6/)
  - [Cassandra 3.11.3](https://github.com/apache/cassandra)   
- Libraries
  - [open62541  version >= 0.2](https://open62541.org/)
  - [Mongocxx lib](http://mongocxx.org/mongocxx-v3/installation/)
      Run this for installing ``sudo scons --disable-warnings-as-errors --prefix=/usr/ install``

  - [Librdkafka](https://github.com/edenhill/librdkafka)
  - [DataStax C/C++ Driver](https://github.com/datastax/cpp-driver)

## Compile
```bash
$ git clone https://github.com/ghazivakili/DIIG-OPC-IoT.git && cd DIIG-OPC-IoT.git
$ mkdir build & cd build
$ cmake ..
$ make
```

## RUN

```bash
./OpcUADIIGIoTServer <PortNo> <dbConnector [1=> kafka 2=>Cassandra 3=>mongodb]> <Nodenames [Node1] [Node2] ... [Node.n]>
```

|Args                        |Description                     |Example  |
|--------------------------- |------------------------------- |---------|
|```<PortNo>```                  |Lissinging post No.             |1234     |
|```<dbConnector>```               |1 or 2 or 3 or 4    |1  |
|```<Nodenames>```                 |It is possible to define the node name, and could use any thing that you want    |pollution  |

Example to run the server application :
```bash
./OpcUADIIGIoTServer 1234 1 PT PLC100 PLC200 engine302
```
output of the bash :

```bash

There are 7 Input argument
The port is Lisining :1234
The Database is :kafka
argv[3] = PT
[01/28/2019 13:22:29.212] info/server   Could not read the value of the variable type with error code Good
[01/28/2019 13:22:29.212] info/server   Array dimensions incompatible with the VariableType with error code BadTypeMismatch
[01/28/2019 13:22:29.212] info/session  Connection 0 | SecureChannel 0 | Session 00000001-0000-0000-0000-000000000000 | Could not add node with error code BadTypeMismatch
argv[4] = PLC100
[01/28/2019 13:22:29.212] info/server   Could not read the value of the variable type with error code Good
[01/28/2019 13:22:29.212] info/server   Array dimensions incompatible with the VariableType with error code BadTypeMismatch
[01/28/2019 13:22:29.212] info/session  Connection 0 | SecureChannel 0 | Session 00000001-0000-0000-0000-000000000000 | Could not add node with error code BadTypeMismatch
argv[5] = PLC200
[01/28/2019 13:22:29.212] info/server   Could not read the value of the variable type with error code Good
[01/28/2019 13:22:29.212] info/server   Array dimensions incompatible with the VariableType with error code BadTypeMismatch
[01/28/2019 13:22:29.212] info/session  Connection 0 | SecureChannel 0 | Session 00000001-0000-0000-0000-000000000000 | Could not add node with error code BadTypeMismatch
argv[6] = engine302
[01/28/2019 13:22:29.212] info/server   Could not read the value of the variable type with error code Good
[01/28/2019 13:22:29.212] info/server   Array dimensions incompatible with the VariableType with error code BadTypeMismatch
[01/28/2019 13:22:29.212] info/session  Connection 0 | SecureChannel 0 | Session 00000001-0000-0000-0000-000000000000 | Could not add node with error code BadTypeMismatch
[01/28/2019 13:22:29.212] info/network  TCP network layer listening on opc.tcp://kaa-server:1234
NodeId = 117
NodeId = 119
NodeId = 121
NodeId = 115
```

## Databases & Distributed streaming platform
Two databases has been used in this IIoT server, (Mongodb an Cassandra). Also Kafka is used for distributed streaming data. All the dbs are No-Sql, and In-Memory system is used for distributed streaming platform (kafka).

### kafka

- < TopicName > is test


```bash
$ kafka-console-consumer --bootstrap-server localhost:9092 --topic <TopicName> --from-beginning
```

- Output n kafka consumer :
```Perl
{{"NodeId":{{{"NodeId":{119},"dataId",{2472},{"data":{2,1,153,153,4,150,242,172,0}}}
{{"NodeId":{{{"NodeId":{119},"dataId",{2473},{"data":{2,1,153,153,4,150,242,172,0}}}
{{"NodeId":{{{"NodeId":{119},"dataId",{2474},{"data":{2,1,153,153,4,150,242,172,0}}}
{{"NodeId":{{{"NodeId":{115},"dataId",{2501},{"data":{2,1,96,13,123,202,229,103,0}}}
{{"NodeId":{{{"NodeId":{117},"dataId",{2525},{"data":{2,1,228,162,238,218,25,226,0}}}
{{"NodeId":{{{"NodeId":{119},"dataId",{2475},{"data":{2,1,153,153,4,150,242,172,0}}}
{{"NodeId":{{{"NodeId":{121},"dataId",{2481},{"data":{2,1,143,38,84,140,30,115,0}}}
{{"NodeId":{{{"NodeId":{119},"dataId",{2476},{"data":{2,1,153,153,4,150,242,172,0}}}
{{"NodeId":{{{"NodeId":{115},"dataId",{2502},{"data":{2,1,96,13,123,202,229,103,0}}}
{{"NodeId":{{{"NodeId":{121},"dataId",{2482},{"data":{2,1,143,38,84,140,30,115,0}}}
{{"NodeId":{{{"NodeId":{115},"dataId",{2503},{"data":{2,1,96,13,123,202,229,103,0}}}
{{"NodeId":{{{"NodeId":{117},"dataId",{2526},{"data":{2,1,228,162,238,218,25,226,0}}}
{{"NodeId":{{{"NodeId":{121},"dataId",{2483},{"data":{2,1,143,38,84,140,30,115,0}}}
{{"NodeId":{{{"NodeId":{121},"dataId",{2484},{"data":{2,1,143,38,84,140,30,115,0}}}
{{"NodeId":{{{"NodeId":{115},"dataId",{2504},{"data":{2,1,96,13,123,202,229,103,0}}}
{{"NodeId":{{{"NodeId":{119},"dataId",{2477},{"data":{2,1,153,153,4,150,242,172,0}}}
{{"NodeId":{{{"NodeId":{119},"dataId",{2478},{"data":{2,1,153,153,4,150,242,172,0}}}
{{"NodeId":{{{"NodeId":{119},"dataId",{2479},{"data":{2,1,153,153,4,150,242,172,0}}}
{{"NodeId":{{{"NodeId":{119},"dataId",{2480},{"data":{2,1,153,153,4,150,242,172,0}}}
{{"NodeId":{{{"NodeId":{119},"dataId",{2481},{"data":{2,1,153,153,4,150,242,172,0}}}
{{"NodeId":{{{"NodeId":{119},"dataId",{2482},{"data":{2,1,153,153,4,150,242,172,0}}}
```

### Cassandra db



- you need to use cql bash for see your data in cassandra db:
```bash
$ cqlsh
```

- Then you need to see query on < Keyspace > . < Tablename > like above :

```cql
SELECT * | select_expression | DISTINCT partition
FROM [keyspace_name.] table_name
[WHERE partition_value
   [AND clustering_filters
   [AND static_filters]]]
[ORDER BY PK_column_name ASC|DESC]
[LIMIT N]
[ALLOW FILTERING]
```

```cql
cqlsh> SELECT * FROM opcua.collections  limit 10;

 id                                   | node_id | items                               | ts
--------------------------------------+---------+-------------------------------------+------
 f292e150-230d-11e9-a185-29d9beb1c55d |     117 | {1, 2, 90, 112, 121, 129, 222, 253} | null
 f2a000b0-230d-11e9-9b09-29d9beb1c55d |     119 |    {1, 2, 25 ,43, 77, 85, 144, 149} | null
 f29949f0-230d-11e9-a185-29d9beb1c55d |     117 | {1, 2, 90, 112, 121, 129, 222, 253} | null
 f2a38320-230d-11e9-a073-29d9beb1c55d |     121 |  {1, 2, 33, 95, 153, 218, 241, 244} | null
 f2a13930-230d-11e9-bab0-29d9beb1c55d |     115 |     {1, 2, 6, 32, 55, 67, 116, 154} | null
 f2a41f60-230d-11e9-a185-29d9beb1c55d |     117 | {1, 2, 90, 112, 121, 129, 222, 253} | null
 f2a0eb10-230d-11e9-bab0-29d9beb1c55d |     115 |     {1, 2, 6, 32, 55, 67, 116, 154} | null
 f29d8fb0-230d-11e9-a073-29d9beb1c55d |     121 |  {1, 2, 33, 95, 153, 218, 241, 244} | null
 f29a5b60-230d-11e9-a073-29d9beb1c55d |     121 |  {1, 2, 33, 95, 153, 218, 241, 244} | null
 f29fb290-230d-11e9-a073-29d9beb1c55d |     121 |  {1, 2, 33, 95, 153, 218, 241, 244} | null

(10 rows)

```


### Mongodb
 - For check data we need to query on mongo db

 ```bash
$ mongo test

 ```

- Query :
```bash
 MongoDB shell version: 2.6.10
 connecting to: test
 > db.getCollection('collections').find({})
 { "_id" : ObjectId("5c4ed9fab506503c1b52af86"), "nodeID" : 117, "data_0" : 2, "data_1" : 1, "data_2" : 17, "data_3" : 125, "data_4" : 87, "data_5" : 223, "data_6" : 121, "data_7" : 197 }
 { "_id" : ObjectId("5c4ed9fab506503c1b52af87"), "nodeID" : 121, "data_0" : 2, "data_1" : 1, "data_2" : 123, "data_3" : 215, "data_4" : 154, "data_5" : 205, "data_6" : 182, "data_7" : 39 }
 { "_id" : ObjectId("5c4ed9fab506503c1b52af88"), "nodeID" : 115, "data_0" : 2, "data_1" : 1, "data_2" : 34, "data_3" : 246, "data_4" : 1, "data_5" : 190, "data_6" : 77, "data_7" : 117 }
 { "_id" : ObjectId("5c4ed9fab506503c1b52af89"), "nodeID" : 115, "data_0" : 2, "data_1" : 1, "data_2" : 34, "data_3" : 246, "data_4" : 1, "data_5" : 190, "data_6" : 77, "data_7" : 117 }
 { "_id" : ObjectId("5c4ed9fab506503c1b52af8a"), "nodeID" : 115, "data_0" : 2, "data_1" : 1, "data_2" : 34, "data_3" : 246, "data_4" : 1, "data_5" : 190, "data_6" : 77, "data_7" : 117 }
 { "_id" : ObjectId("5c4ed9fab506503c1b52af8b"), "nodeID" : 119, "data_0" : 2, "data_1" : 1, "data_2" : 206, "data_3" : 163, "data_4" : 83, "data_5" : 89, "data_6" : 213, "data_7" : 54 }
{ "_id" : ObjectId("5c4ed9fab506503c1b52af8c"), "nodeID" : 121, "data_0" : 2, "data_1" : 1, "data_2" : 123, "data_3" : 215, "data_4" : 154, "data_5" : 205, "data_6" : 182, "data_7" : 39 }
{ "_id" : ObjectId("5c4ed9fab506503c1b52af8d"), "nodeID" : 117, "data_0" : 2, "data_1" : 1, "data_2" : 17, "data_3" : 125, "data_4" : 87, "data_5" : 223, "data_6" : 121, "data_7" : 197 }
{ "_id" : ObjectId("5c4ed9fab506503c1b52af8e"), "nodeID" : 115, "data_0" : 2, "data_1" : 1, "data_2" : 34, "data_3" : 246, "data_4" : 1, "data_5" : 190, "data_6" : 77, "data_7" : 117 }
{ "_id" : ObjectId("5c4ed9fab506503c1b52af8f"), "nodeID" : 121, "data_0" : 2, "data_1" : 1, "data_2" : 123, "data_3" : 215, "data_4" : 154, "data_5" : 205, "data_6" : 182, "data_7" : 39 }
{ "_id" : ObjectId("5c4ed9fab506503c1b52af90"), "nodeID" : 119, "data_0" : 2, "data_1" : 1, "data_2" : 206, "data_3" : 163, "data_4" : 83, "data_5" : 89, "data_6" : 213, "data_7" : 54 }
{ "_id" : ObjectId("5c4ed9fab506503c1b52af91"), "nodeID" : 119, "data_0" : 2, "data_1" : 1, "data_2" : 206, "data_3" : 163, "data_4" : 83, "data_5" : 89, "data_6" : 213, "data_7" : 54 }

```

## License
