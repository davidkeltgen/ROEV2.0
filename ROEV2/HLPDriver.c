/**************************************************
* Author: David Keltgen                           *
* Company: Montana State University: MOSES LAB    *
* File Name: HLPDriver.c                          *
* Date: 5 June 2014                               *
* Description: Function calls to test the         *
 *             interface between the flight       *
 *             computer and the ROE.              *
**************************************************/

#include "HLPDriver.h"

int SendHLPCmds()
{
    //char* foo = "foo";
    printf("HLP thread started.\n");
   
    int fd = init_port(); usleep(100000);
    
    printf("Sending command to exit default mode.\n");
    while(1)
    {
    sendData(fd); usleep(100000);
    }
}
