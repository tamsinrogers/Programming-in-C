/**
 * project 1 task 1 - how data is stored in memory
 *
 * Tamsin Rogers
 * 9/23/21
 */

#include <stdio.h>
#include <stdlib.h>
#include <float.h>

int main (int arg, char *argv[]) 
{	

	float f = FLT_MAX;
	float num = f + 0;
	
	printf("number: ",num);
	printf("\n");
	
	float result = f + 1;
	printf("result = %f",result);
	printf("\n");
	
	return 0;

}