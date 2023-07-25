/**
Write a program to check if the number is a palindrome
*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <ctype.h>


int reverse(int num)
{
	int res = 0;
	
	while(num)
	{
		res = (res*10) + (num%10);
		num = num/10;
	}
	return res;
	
}

int main(int argc, char** argv)
{
	int idx = 0, jdx;
	if(argc != 2)
	{
		printf("usage: a.exe <number>");
		exit(0);
	}
	int num = atoi(argv[1]);
	
	if(num == reverse(num))
		printf("yes palindrome");
	else
		printf("not palindrome");
	
}