/**
Change decimal number into binary and print the
same.
*/


#include<stdio.h>
#include<stdlib.h>

#define ISSET(num,pos) ((num)>>(pos) &1)

int main(int argc, char** argv)
{
	if(argc!=2)
	{
		printf("usage: a.exe <number>");
		exit(0);
	}
	
	int num = atoi(argv[1]);
	int idx = 31;
	
	while(idx>=0)
	{
		if(idx!=31 && ((idx+1)%8 == 0))
			printf(" ");
		printf("%d",ISSET(num,idx));
		idx--;
	}
	
	

}
