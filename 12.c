/**
How to ascertain if the machine is little or big endian?

*/
#include<stdlib.h>
#include<stdio.h>

int main(int argc, char** argv)
{
	int a = 1;
	char* cptr = (char*)&a;
	
	if(*cptr == 1)
		printf("Little Endian");
	else
		printf("Big Endian");
	
	
}
