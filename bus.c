/**
 * project 1 extension - bus error
 *
 * Tamsin Rogers
 * 9/23/21
 */

#include <stdio.h>
#include <signal.h>

#include <unistd.h>

#include <sys/mman.h>

int main(void)
{
    
    // I thought this would work but I get a segmentation fault
    // I want to write to an unaccessible location in memory
    /*
    char *ptr = (char *)0x11111111;	//address
    printf("%c\n", *ptr); 			//point to the first byte
    */
    
    // here's the quickest way to get the error :)
    
    raise(SIGBUS);
    return 0;
}