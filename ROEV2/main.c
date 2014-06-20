/* 
 * File:   main.c
 * Author: david
 *
 * Created on June 20, 2014, 8:40 AM
 */



#include "main.h"

#define PORT   "/dev/ttyS3"
#define DOWNBAUD B9600

/*
 * 
 */
int main(int argc, char** argv) {

    SendHLPCmds();
    return (EXIT_SUCCESS);
}




