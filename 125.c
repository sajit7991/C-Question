/**
How to convert endianness using unions concept?
*/
#include<stdio.h>
#include<stdlib.h>

typedef union {
	int interger;
	char array[4];
}ENDIANCHECK;

int main(int argc, char** argv)
{
	ENDIANCHECK check;

	check.interger = 10;

	if(check.array[0]==(check.interger & 0xff))
	{
		printf("Little ENDIAN");
	}
	else
	{
		printf("Big ENDIAN");
	}

}