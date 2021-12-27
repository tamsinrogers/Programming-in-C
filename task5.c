/**
 * project 1 task 5 - strcpy
 *
 * Tamsin Rogers
 * 9/23/21
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main (void) 
{	
	
	char str1[] = "this is too long";
	char str2[5];
	
	int dec = 1;			//decision
	
	strcpy (str2, str1);	//copy string over
	
	dec = 0;				//will only set to 0 if strcpy runs
  	
  	if (dec == 0)
  	{
  		printf("safe\n");
  	}
  	

	return 0;
}