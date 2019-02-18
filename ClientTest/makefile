##
## LINUX barebone makefile for c++ examples : good for all platforms
##
## Simply run make or make clean
##
## Intend this makefile only as a "batch examples updater" after library modification.
##
## This application is a client for opc-ua-diig-iot server for industrial application in industry 4.0

Libs     := -lsnap7 
Wrapper  :=snap7.cpp

CXX      := g++
CC       := gcc
CXXFLAGS :=-O3
CFLAGS   :=

.PHONY: all clean

all: 
#	$(CXX) $(CXXFLAGS) -o srv_resourceless ../srv_resourceless.cpp ../$(Wrapper) $(Libs) 
#	$(CXX) $(CXXFLAGS) -o apartner ../apartner.cpp ../$(Wrapper) $(Libs) 
#	$(CXX) $(CXXFLAGS) -o ppartner ../ppartner.cpp ../$(Wrapper) $(Libs) 
#	$(CXX) $(CXXFLAGS) -o testStation testStation.cpp $(Wrapper) $(Libs)
	$(CXX) $(CXXFLAGS) -o testClient main-client-test.cpp $(Wrapper) $(Libs) -lpthread

clean:

	$(RM) testStation 

