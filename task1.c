/**
 * project 1 task 1 - how data is stored in memory
 *
 * Tamsin Rogers
 * 9/23/21
 */

#include <stdio.h>
#include <stdlib.h>

int main (int arg, char *argv[]) 
{	
  // declare a variable of each of the basic types
  char c = 'a';
  short int s = 60000;
  int i = 5;
  long int l = 7000000000000000000;
  float f = 0.5;
  double d = 3.3333;
  
  unsigned char *ptrc;		
  unsigned char *ptrs;		
  unsigned char *ptri;		
  unsigned char *ptrl;		
  unsigned char *ptrf;		
  unsigned char *ptrd;		
  
  // address of each variable
  ptrc = (unsigned char *)&c; // & = "address of"
  printf("address of char c: %p \n", ptrc); 
  
  printf("each byte of char c:\n");
  for(i=0; i<sizeof(char); i++) 
  {
  	printf("%d: %02X\n", i, ptrc[i]);
  }
  
  ptrs = (unsigned char *)&s; // & = "address of"
  printf("address of short int s: %p \n", ptrs); 
  
  printf("each byte of short int s:\n");
  for(i=0; i<sizeof(short int); i++) 
  {
  	printf("%d: %02X\n", i, ptrs[i]);
  }
  
  ptri = (unsigned char *)&i; // & = "address of"
  printf("address of int i: %p \n", ptri); 
  
  printf("each byte of int i:\n");
  for(i=0; i<sizeof(int); i++) 
  {
  	printf("%d: %02X\n", i, ptri[i]);
  }
  
  ptrl = (unsigned char *)&l; // & = "address of"
  printf("address of long int l: %p \n", ptrl); 
  
  printf("each byte of long int l:\n");
  for(i=0; i<sizeof(long int); i++) 
  {
  	printf("%d: %02X\n", i, ptrl[i]);
  }
  
  ptrf = (unsigned char *)&f; // & = "address of"
  printf("address of float f: %p \n", ptrf); 
  
  printf("each byte of float f:\n");
  for(i=0; i<sizeof(float); i++) 
  {
  	printf("%d: %02X\n", i, ptrf[i]);
  }
  
  ptrd = (unsigned char *)&d; // & = "address of"
  printf("address of double d: %p \n", ptrd); 
  
  printf("each byte of double d:\n");
  for(i=0; i<sizeof(double); i++) 
  {
  	printf("%d: %02X\n", i, ptrd[i]);
  }
  

  
			
  return 0;
}  

