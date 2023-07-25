/**
Write a recursion program to implement Factorial. 
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef unsigned long long int ull;

ull fact(ull num)
{
	if(!num)
		return 1;
	return num*fact(num-1);
}

int main()
{
	ull  num;
	printf("enter the number: ");
	scanf("%llu",&num);
	
	printf("%llu! = %llu",num,fact(num));
}
