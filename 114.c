/**
Find out the size of a structure without using sizeof
operator.
*/
#include<stdio.h>
#define _MYSIZEOF(x) ((void*)(&x+1) - (void*)&x)

struct ABC
{
	int a;
	float b;
	char c;
};

int main()
{
	struct ABC abc;
	int a;
	char c;
	float f;
	int * iptr;
	
	printf("Sizeof struct ABC : %ld\n",_MYSIZEOF(abc));
	printf("Sizeof int a : %ld\n",_MYSIZEOF(a));
	printf("Sizeof char c : %ld\n",_MYSIZEOF(c));
	printf("Sizeof float f : %ld\n",_MYSIZEOF(f));
	printf("Sizeof int pointer : %ld\n",_MYSIZEOF(iptr));
	
}