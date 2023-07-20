/**
	Swap the 7th & 8th bits position in a number
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


#define GETBITPOS(pos) do {																	\
									printf("enter the bit pos(0-31): ");					\
									scanf("%d",&pos);										\
									if(!(pos1>=0 && pos1<=31))								\
									{														\
										printf("enter the bit pos(0-31)");					\
										exit(0);											\
									}                                                       \	
								}while(0)	

int main(int argc, char** argv)
{
	int a = 0x12345678;
	int pos1,pos2;
	
	printf("enter the number: ");
	scanf("%d",&a);
	
	GETBITPOS(pos1);
	GETBITPOS(pos2);
	
	printBit(a);
	if(ISSET(a,pos1) != ISSET(a,pos2))
	{
		TOGGLEBIT(a,pos1);
		TOGGLEBIT(a,pos2);
	}	
	printBit(a);
	

}