/**
Reverse the bits position in a number
*/

#include<stdlib.h>
#include<stdio.h>

#define ISSET(num,pos)			((num)>>(pos) & 1)
#define TOGGLEBIT(num,pos) 		((num) ^= 1<<(pos))

void printBit(int num)
{
	int idx = 31;
	for(idx = 31; idx>=0; idx--)
	{
		if(idx != 31 && ((idx+1)%8 ==0) )
		{
			printf(" ");
		}
		printf("%d",(num>>idx & 1));
	}
	printf("\n");
}

int reverceBit(int a)
{
	int i,j;
	
	for(i=0, j=31; i<j; i++,j--)
	{
		if(ISSET(a,i) != ISSET(a,j))
		{
			TOGGLEBIT(a,i);
			TOGGLEBIT(a,j);
		}	
	}
	
	return a;
}

int main(int argc, char** argv)
{
	int a = 0x12345678;
	int res;
	
	printf("enter the number: ");
	scanf("%d",&a);
	
	printBit(a);
	a= reverceBit(a);
	printBit(a);
	

}