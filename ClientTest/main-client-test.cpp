/*=============================================================================|
|  PROJECT Simense Driver                                                0.01  |
|==============================================================================|
|  Copyright (C) 2016 Mohammad Ghazivakili                                     |
|  All rights reserved.                                                        |
|==============================================================================|*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "snap7.h"
#include <iostream>
#include <iomanip>
#include <unistd.h>
#include <ctime>
#ifdef OS_WINDOWS
# define WIN32_LEAN_AND_MEAN
# include <windows.h>

#endif

TS7Client *Client;
int  buffer[10];
char *buff;

byte Buffer[65536]; // 64 K buffer
int SampleDBNum = 1000;

char *Address;     // PLC IP Address
int Rack=0,Slot=2,plc=1; // Default Rack and Slot

int ok = 0; // Number of test pass
int ko = 0; // Number of test failure

bool JobDone=false;
int JobResult=0;

#define NTHREAD 10
pthread_mutex_t full_mutex;
double thr_put[NTHREAD];
double latancy[NTHREAD];
std::clock_t startClockLatancy;

struct arg_struct {
    int thread_total_opration;
    int thread_id;
    //char *linkConnection;
};


//------------------------------------------------------------------------------
//  Async completion callback
//------------------------------------------------------------------------------
// This is a simply text demo, we use callback only to set an internal flag...
void S7API CliCompletion(void *usrPtr, int opCode, int opResult)
{
    JobResult=opResult;
    JobDone = true;
}
//------------------------------------------------------------------------------
// SysSleep (copied from snap_sysutils.cpp) multiplatform millisec sleep
//------------------------------------------------------------------------------
void SysSleep(longword Delay_ms)
{
#ifdef OS_WINDOWS
    Sleep(Delay_ms);
#else
    struct timespec ts;
    ts.tv_sec = (time_t)(Delay_ms / 1000);
    ts.tv_nsec =(long)((Delay_ms - ts.tv_sec) * 1000000);
    nanosleep(&ts, (struct timespec *)0);
#endif
}
//------------------------------------------------------------------------------
//  Usage Syntax
//------------------------------------------------------------------------------
void Usage()
{
    printf("Usage\n");
    printf("  client <IP> [Rack=0 Slot=2]\n");
    printf("Example\n");
    printf("  client 192.168.1.101 0 2\n");
    printf("or\n");
    printf("  client 192.168.1.101\n");
    getchar();
}
//------------------------------------------------------------------------------
// hexdump, a very nice function, it's not mine.
// I found it on the net somewhere some time ago... thanks to the author ;-)
//------------------------------------------------------------------------------
#ifndef HEXDUMP_COLS
#define HEXDUMP_COLS 16
#endif

void hexdump(void *mem, unsigned int len)
{
    unsigned int i, j;

    for(i = 0; i < len + ((len % HEXDUMP_COLS) ? (HEXDUMP_COLS - len % HEXDUMP_COLS) : 0); i++)
    {
        /* print offset */
        if(i % HEXDUMP_COLS == 0)
        {
            printf("0x%04x: ", i);
        }

        /* print hex data */
        if(i < len)
        {
            printf("%02x ", 0xFF & ((char*)mem)[i]);

        }
        else /* end of block, just aligning for ASCII dump */
        {
            printf("   ");
        }

        /* print ASCII dump */
        if(i % HEXDUMP_COLS == (HEXDUMP_COLS - 1))
        {
            for(j = i - (HEXDUMP_COLS - 1); j <= i; j++)
            {
                if(j >= len) /* end of block, not really printing */
                {
                    putchar(' ');
                }
                else if(isprint((((char*)mem)[j] & 0x7F))) /* printable char */
                {
                    putchar(0xFF & ((char*)mem)[j]);
                }
                else /* other char */
                {
                    putchar('.');
                }
            }
            putchar('\n');

        }
    }
}
//------------------------------------------------------------------------------
// Check error
//------------------------------------------------------------------------------
bool Check(int Result, const char * function)
{
    printf("\n");
    printf("+-----------------------------------------------------\n");
    printf("| %s\n",function);
    printf("+-----------------------------------------------------\n");
    if (Result==0) {
        printf("| Result         : OK\n");
        printf("| Execution time : %d ms\n",Client->ExecTime());
        printf("+-----------------------------------------------------\n");
        ok++;
    }
    else {
        printf("| ERROR !!! \n");
        if (Result<0)
            printf("| Library Error (-1)\n");
        else
            printf("| %s\n",CliErrorText(Result).c_str());
        printf("+-----------------------------------------------------\n");
        ko++;
    }
    return Result==0;
}
//------------------------------------------------------------------------------
// Multi Read
//------------------------------------------------------------------------------
void MultiRead()
{
    // Multiread buffers
    byte MB[16]; // 16 Merker bytes
    byte EB[16]; // 16 Digital Input bytes
    byte AB[16]; // 16 Digital Output bytes
    word TM[8];  // 8 timers
    word CT[8];  // 8 counters

    // Prepare struct
    TS7DataItem Items[5];

    // NOTE : *AMOUNT IS NOT SIZE* , it's the number of items

    // Merkers
    Items[0].Area     =S7AreaMK;
    Items[0].WordLen  =S7WLByte;
    Items[0].DBNumber =0;        // Don't need DB
    Items[0].Start    =0;        // Starting from 0
    Items[0].Amount   =16;       // 16 Items (bytes)
    Items[0].pdata    =&MB;
    // Digital Input bytes
    Items[1].Area     =S7AreaPE;
    Items[1].WordLen  =S7WLByte;
    Items[1].DBNumber =0;        // Don't need DB
    Items[1].Start    =0;        // Starting from 0
    Items[1].Amount   =16;       // 16 Items (bytes)
    Items[1].pdata    =&EB;
    // Digital Output bytes
    Items[2].Area     =S7AreaPA;
    Items[2].WordLen  =S7WLByte;
    Items[2].DBNumber =0;        // Don't need DB
    Items[2].Start    =0;        // Starting from 0
    Items[2].Amount   =16;       // 16 Items (bytes)
    Items[2].pdata    =&AB;
    // Timers
    Items[3].Area     =S7AreaTM;
    Items[3].WordLen  =S7WLTimer;
    Items[3].DBNumber =0;        // Don't need DB
    Items[3].Start    =0;        // Starting from 0
    Items[3].Amount   =8;        // 8 Timers
    Items[3].pdata    =&TM;
    // Counters
    Items[4].Area     =S7AreaCT;
    Items[4].WordLen  =S7WLCounter;
    Items[4].DBNumber =0;        // Don't need DB
    Items[4].Start    =0;        // Starting from 0
    Items[4].Amount   =8;        // 8 Counters
    Items[4].pdata    =&CT;


    //int res=Client->ReadArea(*Client, (int) S7AreaDB,1,0,32,Buffer);
   int res=Client->ReadMultiVars(&Items[0],5);

    if (Check(res,"Multiread Vars"))
    {


        //if (Buffer.0)
            hexdump(Buffer,32);         // 8 Counters -> 16 bytes  */



        // Result of Client->ReadMultivars is the "global result" of
        // the function, it's OK if something was exchanged.

        // But we need to check single Var results.
        // Let shall suppose that we ask for 5 vars, 4 of them are ok but
        // the 5th is inexistent, we will have 4 results ok and 1 not ok.

     /*   printf("Dump MB0..MB15 - Var Result : %d\n",Items[0].Result);
        if (Items[0].Result==0)
            hexdump(&MB,16);
        printf("Dump EB0..EB15 - Var Result : %d\n",Items[1].Result);
        if (Items[1].Result==0)
            hexdump(&EB,16);
        printf("Dump AB0..AB15 - Var Result : %d\n",Items[2].Result);
        if (Items[2].Result==0)
            hexdump(&AB,16);
        printf("Dump T0..T7 - Var Result : %d\n",Items[3].Result);
        if (Items[3].Result==0)
            hexdump(&TM,16);         // 8 Timers -> 16 bytes
        printf("Dump Z0..Z7 - Var Result : %d\n",Items[4].Result);
        if (Items[4].Result==0)
            hexdump(&CT,16);         // 8 Counters -> 16 bytes  */



    };
}






//------------------------------------------------------------------------------
// List blocks in AG
//------------------------------------------------------------------------------
void ListBlocks()
{
    TS7BlocksList List;
    int res=Client->ListBlocks(&List);
    if (Check(res,"List Blocks in AG"))
    {
        printf("  OBCount  : %d\n",List.OBCount);
        printf("  FBCount  : %d\n",List.FBCount);
        printf("  FCCount  : %d\n",List.FCCount);
        printf("  SFBCount : %d\n",List.SFBCount);
        printf("  SFCCount : %d\n",List.SFCCount);
        printf("  DBCount  : %d\n",List.DBCount);
        printf("  SDBCount : %d\n",List.SDBCount);
    };
}
//------------------------------------------------------------------------------
// CPU Info : catalog
//------------------------------------------------------------------------------
void OrderCode()
{
    TS7OrderCode Info;
    int res=Client->GetOrderCode(&Info);
    if (Check(res,"Catalog"))
    {
        printf("  Order Code : %s\n",Info.Code);
        printf("  Version    : %d.%d.%d\n",Info.V1,Info.V2,Info.V3);
    };
}
//------------------------------------------------------------------------------
// CPU Info : unit info
//------------------------------------------------------------------------------
void CpuInfo()
{
    TS7CpuInfo Info;
    int res=Client->GetCpuInfo(&Info);
    if (Check(res,"Unit Info"))
    {
        printf("  Module Type Name : %s\n",Info.ModuleTypeName);
        printf("  Serial Number    : %s\n",Info.SerialNumber);
        printf("  AS Name          : %s\n",Info.ASName);
        printf("  Module Name      : %s\n",Info.ModuleName);
    };
}
//------------------------------------------------------------------------------
// CP Info
//------------------------------------------------------------------------------
void CpInfo()
{
    TS7CpInfo Info;
    int res=Client->GetCpInfo(&Info);
    if (Check(res,"Communication processor Info"))
    {
        printf("  Max PDU Length   : %d bytes\n",Info.MaxPduLengt);
        printf("  Max Connections  : %d \n",Info.MaxConnections);
        printf("  Max MPI Rate     : %d bps\n",Info.MaxMpiRate);
        printf("  Max Bus Rate     : %d bps\n",Info.MaxBusRate);
    };
}
//------------------------------------------------------------------------------
// PLC Status
//------------------------------------------------------------------------------
void UnitStatus()
{
    int res=0;
    int Status=Client->PlcStatus();
    if (Check(res,"CPU Status"))
    {
        switch (Status)
        {
            case S7CpuStatusRun : printf("  RUN\n"); break;
            case S7CpuStatusStop: printf("  STOP\n"); break;
            default             : printf("  UNKNOWN\n"); break;
        }
    };
}
//------------------------------------------------------------------------------
// Upload DB0 (surely exists in AG)
//------------------------------------------------------------------------------
void UploadDB0()
{
    int Size = sizeof(Buffer); // Size is IN/OUT par
    // In input it tells the client the size available
    // In output it tells us how many bytes were uploaded.
    int res=Client->Upload(Block_SDB, 0, &Buffer, &Size);
    if (Check(res,"Block Upload (SDB 0)"))
    {
        printf("Dump (%d bytes) :\n",Size);
        hexdump(&Buffer,Size);
    }
}
//------------------------------------------------------------------------------
// Async Upload DB0 (using callback as completion trigger)
//------------------------------------------------------------------------------
void AsCBUploadDB0()
{
    int Size = sizeof(Buffer); // Size is IN/OUT par
    // In input it tells the client the size available
    // In output it tells us how many bytes were uploaded.
    JobDone=false;
    int res=Client->AsUpload(Block_SDB, 0, &Buffer, &Size);

    if (res==0)
    {
        while (!JobDone)
        {
            SysSleep(100);
        }
        res=JobResult;
    }

    if (Check(res,"Async (callback) Block Upload (SDB 0)"))
    {
        printf("Dump (%d bytes) :\n",Size);
        hexdump(&Buffer,Size);
    }
}
//------------------------------------------------------------------------------
// Async Upload DB0 (using event wait as completion trigger)
//------------------------------------------------------------------------------
void AsEWUploadDB0()
{
    int Size = sizeof(Buffer); // Size is IN/OUT par
    // In input it tells the client the size available
    // In output it tells us how many bytes were uploaded.
    JobDone=false;
    int res=Client->AsUpload(Block_SDB, 0, &Buffer, &Size);

    if (res==0)
    {
        res=Client->WaitAsCompletion(3000);
    }

    if (Check(res,"Async (Wait event) Block Upload (SDB 0)"))
    {
        printf("Dump (%d bytes) :\n",Size);
        hexdump(&Buffer,Size);
    }
}
//------------------------------------------------------------------------------
// Async Upload DB0 (using polling as completion trigger)
//------------------------------------------------------------------------------
void AsPOUploadDB0()
{
    int Size = sizeof(Buffer); // Size is IN/OUT par
    // In input it tells the client the size available
    // In output it tells us how many bytes were uploaded.
    JobDone=false;
    int res=Client->AsUpload(Block_SDB, 0, &Buffer, &Size);

    if (res==0)
    {
        while (!Client->CheckAsCompletion(&res))
        {
            SysSleep(100);
        };
    }

    if (Check(res,"Async (polling) Block Upload (SDB 0)"))
    {
        printf("Dump (%d bytes) :\n",Size);
        hexdump(&Buffer,Size);
    }
}
//------------------------------------------------------------------------------
// Read a sample SZL Block
//------------------------------------------------------------------------------
void ReadSzl_0011_0000()
{
    PS7SZL SZL = PS7SZL(&Buffer);  // use our buffer casted as TS7SZL
    int Size = sizeof(Buffer);
    // Block ID 0x0011 IDX 0x0000 normally exists in every CPU
    int res=Client->ReadSZL(0x0011, 0x0000, SZL, &Size);
    if (Check(res,"Read SZL - ID : 0x0011, IDX 0x0000"))
    {
        printf("  LENTHDR : %d\n",SZL->Header.LENTHDR);
        printf("  N_DR    : %d\n",SZL->Header.N_DR);
        printf("Dump (%d bytes) :\n",Size);
        hexdump(&Buffer,Size);
    }
}
//------------------------------------------------------------------------------
// Unit Connection
//------------------------------------------------------------------------------
bool CliConnect()
{
    int res = Client->ConnectTo(Address,Rack,Slot);
    if (Check(res,"UNIT Connection")) {
        printf("  Connected to   : %s (Rack=%d, Slot=%d)\n",Address,Rack,Slot);
        printf("  PDU Requested  : %d bytes\n",Client->PDURequested());
        printf("  PDU Negotiated : %d bytes\n",Client->PDULength());
    };
    return res==0;
}
//------------------------------------------------------------------------------
// Unit Disconnection
//------------------------------------------------------------------------------
void CliDisconnect()
{
    Client->Disconnect();
}
//------------------------------------------------------------------------------
// Perform readonly tests, no cpu status modification
//------------------------------------------------------------------------------
void PerformTests()
{
    OrderCode();
    CpuInfo();
    CpInfo();
    UnitStatus();
    ReadSzl_0011_0000();
    UploadDB0();
    AsCBUploadDB0();
    AsEWUploadDB0();
    AsPOUploadDB0();
    MultiRead();
}
//------------------------------------------------------------------------------
// Tests Summary
//------------------------------------------------------------------------------
void Summary()
{
    printf("\n");
    printf("+-----------------------------------------------------\n");
    printf("| Test Summary \n");
    printf("+-----------------------------------------------------\n");
    printf("| Performed : %d\n",(ok+ko));
    printf("| Passed    : %d\n",ok);
    printf("| Failed    : %d\n",ko);
    printf("+----------------------------------------[press a key]\n");
    getchar();
}

//------------------------------------------------------------------------------
// Main
//------------------------------------------------------------------------------
void * clients( void * arguments) {

	TS7Client *ClientInt;
  struct arg_struct *args = (struct arg_struct *)arguments;

	char dataBlock[2];
	char flagDb8[2];
  char datatmp[256];
	    int * id;
	    int plcCode;
	    id= (int  *) &args->thread_id;
	    plcCode=* id;
		  int start=0,
		      end,
		      lastStart=0,
		      dataFullFlagAddress=0;
		  std::clock_t startClock;

      int throughput_Counter_internal=0,threshold_internal=args->thread_total_opration;

		  int dataFree;
		  int dataFreeDb8;

		  ClientInt= new TS7Client();

	  double duration;
      std::cout << "PLC " << plcCode << "started" << std::endl;
      std::cout << "total op : " << threshold_internal  << std::endl;

      int res = ClientInt->ConnectTo(Address,Rack,Slot);
      std::cout <<  res << std::endl;
      /*   if (Check(res,"UNIT Connection")) {
             printf("  Connected to   : %s (Rack=%d, Slot=%d)\n",Address,Rack,Slot);
             printf("  PDU Requested  : %d bytes\n",ClientInt->PDURequested());
             printf("  PDU Negotiated : %d bytes\n",ClientInt->PDULength());
         }*/
	      if (res==0)
	      {
	          byte data[8] ={1, 2 , 3 , 4, 5 , 6, 7,8};
	          byte fullFlag[1] ={1};
	          ClientInt->SetAsCallback(CliCompletion,NULL);
	          startClock = std::clock();
	       //   std::cout <<  "before while" << std::endl;

	          while(1){
		     //     std::cout <<  "datablock1:" << dataBlock[0] << std::endl;
            if(throughput_Counter_internal<=threshold_internal){
		          ClientInt->DBRead(6,plcCode,1,&dataBlock);
		       //   std::cout <<  "datablock2:" << dataBlock[0] << std::endl;
               //   hexdump(dataBlock,2);
	              dataFree=(0xFF&((char*)dataBlock)[0]);
                //std::cout << "dataFree : "<< dataFree << std::endl;
	              int len = strlen(dataBlock);
	              dataBlock[len] = '\0' ;
                //if(dataFree>1)
                //start= (dataFree-1)*8; //old
	               start = (dataFree)*8;//new
                //else
                 //start = 0;
                //std::cout << "start to write : "<< start << std::endl;
                ClientInt->DBRead(plcCode,0,256,&datatmp);
                          /*for (int i = 0; i < 256; i++){
                              printf("%d-",datatmp[i]);
                          //    if(i%8==0)
                          //    printf("%d\n",i);
                        }
                printf("\n");*/
                if(start!=lastStart){

	                  dataFullFlagAddress=(plcCode-1)*32+(dataFree);
	                  ClientInt->DBWrite(plcCode,start,8,data);
	                  ClientInt->DBWrite(5,dataFullFlagAddress,1,fullFlag);

	                  lastStart=start;
	                  throughput_Counter_internal++;
	              }
				  }else{
					      ClientInt->DBRead(8,plcCode,1,&flagDb8);
	              dataFreeDb8=(0xFF&((char*)flagDb8)[0]);


					//std::cout << dataFreeDb8 << std::endl;
          //test


				if(dataFreeDb8==1){
					          std::cout << dataFreeDb8 << std::endl;
	                  duration = ( std::clock() - startClockLatancy ) / (double) CLOCKS_PER_SEC;
	                  latancy[plcCode]=duration;
	                  std::cout << "time duration is :" << duration << std::endl;
	                  break;
	              }
				  }

				  /*if(throughput_Counter_internal>=threshold_internal){
	                  duration = ( std::clock() - startClock ) / (double) CLOCKS_PER_SEC;
	                  thr_put[plcCode]=duration;
	                  std::cout << "time duration is :" << duration << std::endl;
	                  break;
	              }*/

	          }


	          ClientInt->Disconnect();
	      }else{
	    	  std::cout << "Client not connected...." << std::endl;
	      }

	      delete ClientInt;



   pthread_exit(NULL);
}

pthread_t ftid[NTHREAD];
pthread_t rtid[NTHREAD];
int thread_id[NTHREAD];




int main(int argc, char* argv[])
{
// Get Progran args (we need the client address and optionally Rack and Slot)
	unsigned int throughput_Counter=0,threshold_counter=1000;
	void *status;
    Address=argv[1];
    int threadNumber=1;
    double sumTime=0;
    double timeTh=0;
    struct arg_struct th_args[NTHREAD];
    if (argc>=2)
    {
        Rack=0;
        Slot=2;
        threshold_counter=atoi(argv[3]);//1000;//atoi(argv[5]);
        threadNumber=atoi(argv[2]);
        std::cout << "duration is :" << threshold_counter << std::endl;
    }else{
    	Usage();
    	 return 1;
    }


    double startClock = std::clock();
    double startClockLatancy = std::clock();


    for( int counter=1; counter<=threadNumber; counter++)// Creating free flag and Relay thread workers
           {
               th_args[counter].thread_total_opration = threshold_counter;
               th_args[counter].thread_id = counter;
               thread_id[counter]=counter;
               int ret=pthread_create(&(ftid[counter]), NULL, &clients, (void *) &th_args[counter] );
               std::cout << ret << std::endl;
           }
    for( int counterJ=1; counterJ<=threadNumber; counterJ++)// Creating free flag and Relay thread workers
               {
                 //  thread_id[counterJ]=counterJ;
                   //pthread_join(threads[i], &status);
                   pthread_join(ftid[counterJ], &status);

                  // pthread_create(&(ftid[counter]), NULL, &clients, (void *) &thread_id[counter] );
               }
    timeTh = ( std::clock() - startClock ) / (double) CLOCKS_PER_SEC;
    for (int counterk=1;counterk <= threadNumber; counterk++){
    	sumTime=thr_put[counterk]+sumTime;

    }
  //  Summary();
    std::cout << "T is :"<< (threadNumber*1000)/sumTime << std::endl;
    std::cout << "T 2 is :"<< (threadNumber*1000)/timeTh << std::endl;
    std::cout << "T latancy task 1 is :"<< latancy[1] << std::endl;
    std::cout << "T latancy task 2 is :"<< latancy[2] << std::endl;
    std::cout << "T latancy task 3 is :"<< latancy[3]  << std::endl;
    std::cout << "T latancy task 4 is :"<< latancy[4] << std::endl;

    pthread_exit(NULL);
}
