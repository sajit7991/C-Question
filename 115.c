/**
	Q What is the difference between Structure or Union? When do we opt for Structure or Union? Demonstrate through a program
	A Structure and union both are the user defined data type. key d in structre and union is, in structre all data member will get the separate memory
	  location,while in union a comman memory location is shared.
	 
*/

#include<stdio.h>
#include<stdlib.h>

typedef union {
	int interger;
	char array[4];
}U;


typedef struct {
	int interger;
	char array[4];
}S;

int main(int argc, char** argv)
{
	U unionVar;
	
	S structVar;


	printf("sizeof Union: %lu\n",sizeof(unionVar));
	printf("sizeof struct: %lu\n",sizeof(structVar));
	

}