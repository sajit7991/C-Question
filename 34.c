/**
Given a function which takes 4 arguments i.e source,
destination, start index, and end index. This function
copies string in source tto destination from provided
start index to end index. what are the unit test cases,
you will write to test the functionality of the function?
*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void copyFun(char* string1, char* string2, int startpos, int endpos)
{
	memcpy(string2,&string1[startpos],endpos-startpos+1);
}

int main()
{
	char string1[1024]= {0}, string2[1024]= {0};

	int startpos,endpos;
	size_t len;
	
	printf("enter string1: ");
	scanf("%[^\n]",string1);
	printf("enter start pos: ");
	scanf("%d",&startpos);
	printf("enter end pos: ");
	scanf("%d",&endpos);

	len = strlen(string1);
	if(!(startpos>=0 && startpos<len))
	{
		printf("invalid start pos");
		exit(0);
	}
	if(!(endpos>=0 && endpos<len))
	{
		printf("invalid end pos");
		exit(0);
	}
	if(startpos>endpos)
	{
		printf("invalid start and end pos");
		exit(0);
	}
	
	copyFun(string1,string2,startpos,endpos);
	
	printf("string1: %s\nstring2: %s\n",string1,string2);
}