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

    printf("Program Started\n");
    start_threads();
    sleep(60);
    join_threads();
    return (EXIT_SUCCESS);
}

void start_threads() {

    pthread_attr_init(&attrs);
    pthread_attr_setdetachstate(&attrs, PTHREAD_CREATE_JOINABLE);
    pthread_create(&threads[HLP_thread], &attrs, (void * (*)(void*))SendHLPCmds, NULL);\
    pthread_create(&threads[HK_thread], &attrs, (void * (*)(void*))SendHKCmds, NULL);

}

void join_threads() {
    void * returns;
    //record("threads returned, program done\n");
    int i;
    for (i = 0; i < NUM_THREADS; i++) {
        pthread_join(threads[i], &returns);
    }
    printf("Threads returned, program done.\n");
}




