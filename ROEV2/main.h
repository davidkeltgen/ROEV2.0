/* 
 * File:   main.h
 * Author: david
 *
 * Created on June 20, 2014, 10:06 AM
 */

#ifndef MAIN_H
#define	MAIN_H

#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#include <signal.h>
#include <sys/ioctl.h>
#include <fcntl.h>
#include <string.h>
//#include "roe.h"
#include "HLPDriver.h"
#include "HKDriver.h"

#define NUM_THREADS 2
#define TRUE        1
#define FALSE       0

enum thread{
    HLP_thread,
    HK_thread
};

pthread_attr_t attrs;
pthread_t threads[NUM_THREADS];

void start_threads();
void join_threads();





#ifdef	__cplusplus
extern "C" {
#endif




#ifdef	__cplusplus
}
#endif

#endif	/* MAIN_H */

