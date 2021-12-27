/**
 * project 1 task 2 - how much memory can we access?
 *
 * Tamsin Rogers
 * 9/23/21
 */

#include <stdio.h>
#include <stdlib.h>

int main (int arg, char *argv[]) 
{	

	// declare some variables
	char c = 'a';
	int i = 0;
	long int l = 7000000000000000000;
	float f = 0.5;
	double d = 3.3333;

  
	unsigned char *ptrc;
	ptrc = (unsigned char *)&c;	//give the unsigned char * the address of itself
	
	printf("address of char c: %p \n", ptrc); 
  
  	printf("how much memory can we access?\n");
	
	// first 100 bytes
	printf("first 100 bytes:\n");
	for(int i=0; i<100; i++) 
	{
		printf("%d: %02X\n", i, ptrc[i]);
	}
	
	// ???
	printf("first ??? bytes:\n");
	for(;;) 
	{
		i+=1;
		printf("%d: %02X\n", i, ptrc[i]);
	}
	
	

	return 0;
}