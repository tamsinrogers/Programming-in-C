/**
 * project 1 task 3 - memory allocation
 *
 * Tamsin Rogers
 * 9/23/21
 */

#include <stdio.h>
#include <stdlib.h>

int main (int arg, char *argv[]) 
{	

	int *ptr;
	
	// repeatedly allocate a small amount of memory in a loop
	for(;;) 
	{
		ptr = (int *)malloc(sizeof(int));
		free(ptr);
	}
	
	

	return 0;
}