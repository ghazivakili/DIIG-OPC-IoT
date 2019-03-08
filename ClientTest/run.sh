#!/bin/bash


#SERVERFL="OpcUADIIG/cmake-build-debug"
#CLIENTFL="OpcUAClient/cmake-build-debug"
SERVERFL="results-01"
CLIENTFL="final-app"
RESULTFL="results-01"
NUMBER=1 #"Test"
ITERATION=10000
SERVERDATABASE="KAFKA"
CLIENTDELAY=1000
LINK=127.0.0.1

pkill -9 DIIGatway



echo "Number of client is = "$NUMBER >> $RESULTFL/logfile$NUMBER.txt
echo "each iteration is  = "$ITERATION >> $RESULTFL/logfile$NUMBER.txt
echo "Server database    = "$SERVERDATABASE >> $RESULTFL/logfile$NUMBER.txt
#echo "Client loop delay   = "$CLIENTDELAY >> $RESULTFL/logfile$NUMBER.txt
echo "-------------------------------------------------------------" >> $RESULTFL/logfile$NUMBER.txt

date >> $RESULTFL/logfile$NUMBER.txt

for i in 1 2 3 4
	do

    for s in `seq 1 10`;
    	do
        date
        ../OpcUADIIG-gateway/build/./DIIGatway  opc.tcp://130.192.163.185:4888 100000 4 1 115 117 119 121&
        echo $s"=>killed Gateway"
        sleep 10
        echo -n `date` "" >> $RESULTFL/logfile$i.txt & ./testClientThrouput 127.0.0.1 $i $ITERATION >> $RESULTFL/logfile$i.txt
        echo "test finished"
        sleep 10
        pkill -9 DIIGatway
        echo $s"=>killed Gateway"
        sleep 10
      done
    NUMBER=$((NUMBER+1))
  done
	echo "-------------------------------------------------------------" >> $RESULTFL/logfile$i.txt
