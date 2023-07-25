/**
Find the given number if it is a power of 2 or not ?
*/

#include<stdio.h>
#include<stdlib.h>
int main(int argc, char** argv)
{
	if(argc!=2)
	{
		printf("usage: a.exe <number>");
		exit(0);
	}
	
	int num = atoi(argv[1]);
	
	
	if(num&(num-1))
		printf("not the power of Two\n");
	else
		printf("the power of Two\n");
	
		
	
	

}