/**
Write a program to check if the string is a palindrome
*/

#include <stdio.h>
#include<stdlib.h>
#include <string.h>

void stringReverse(char* string)
{
	int i = 0,j;
	j = strlen(string) - 1 ;
	
	while(i<j)
	{
		string[i] = string[i] + string[j] - (string[j] = string[i]);
		i++, j--;
	}
	
}

int main(int argc, char** argv)
{
	int idx = 0, jdx;
	if(argc != 2)
	{
		printf("usage: a.exe <string>");
		exit(0);
	}

	char str[1024] ;
	strcpy(str,argv[1]);
	
	printf("before reverse: %s\n",str);
	stringReverse(str);
	printf("after reverse: %s\n",str);
	
	if(!strcmp(str,argv[1]))
	{
		printf("yes palindrome\n");
	}
	else
	{
		printf("Not palindrome\n");
	}
	
}