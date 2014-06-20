/* 
 * File:   roe.h
 * Author: david
 *
 * Created on June 20, 2014, 10:11 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#include <signal.h>
#include <sys/ioctl.h>
#include <fcntl.h>
#include <string.h>

#define ROE_PORT "/dev/ttyS2"
#define DOWNBAUD B9600

#ifndef ROE_H
#define	ROE_H


int init_port();
void sendData(int fd);

#ifdef	__cplusplus
extern "C" {
#endif




#ifdef	__cplusplus
}
#endif

#endif	/* ROE_H */

