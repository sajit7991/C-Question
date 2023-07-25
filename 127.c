/**
	Count the number of bits set using recursion 
*/

#include<stdio.h>
#include<stdlib.h>

#define ISSET(num,pos) ((num)>>(pos) &1)

int countbit(int num)
{
	if(!num)
	{
		return 0;
	}
	return (countbit(num>>1))+(num&1);

}

void printBytes(int num)
{
	int idx = 31;
	
	while(idx>=0)
	{
		if(idx!=31 && ((idx+1)%8 == 0))
			printf(" ");
		printf("%d",ISSET(num,idx));
		idx--;
	}
		printf("\n");
}


int main(int argc, char** argv)
{
	if(argc!=2)
	{
		printf("usage: a.exe <number>");
		exit(0);
	}
	
	int num = atoi(argv[1]);
	
	printf("set bit count are:  %d\n",countbit(num));
	printBytes(num);
	

}
