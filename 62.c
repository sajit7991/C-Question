/**
How to access the fixed memory location in embedded
C? Demonstrate a program
*/


#include<stdio.h>
#include<stdlib.h>

int main()
{
	int readValue = 145;
	
	int *ptr = (int*) &readValue;

	printf("readValue using ptr = %d \n",*ptr);
}

