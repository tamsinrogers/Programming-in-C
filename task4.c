/**
 * project 1 task 4 - struct
 *
 * Tamsin Rogers
 * 9/23/21
 */

#include <stdio.h>
#include <stdlib.h>

struct test
{
	int a;
	short int b;
	char c;
	
};


int main (void) 
{	
	
	unsigned char *ptr;
	struct test t = {5, 1000, 'c'};

	ptr = (unsigned char *)&t;	//give the unsigned char * the address of itself

	
	printf("address of struct: %p \n", ptr); 
  
	printf("each byte of struct:\n");
	
	for(int i=0; i<sizeof(t); i++) 
	{
		printf("%d: %02X\n", i, ptr[i]);
	}
  

	return 0;
}