/**
How to set/unset 17 and 18 bit of a given number?
*/

#include<stdlib.h>
#include<stdio.h>

#define SETBIT(num,pos)		((num) |= 1<<(pos)) 
#define CLEARBIT(num,pos)	((num) &= ~(1<<(pos)))

#define GETBITPOS(setClear,pos) do {														\
									printf("enter the bit pos(0-31) for %s: ",setClear);	\
									scanf("%d",&pos);										\
									if(!(pos1>=0 && pos1<=31))								\
									{														\
										printf("enter the bit pos(0-31)");					\
										exit(0);											\
									}                                                       \	
								}while(0)													

int main(int argc, char** argv)
{
	int num =10,beforeOperation;
	int pos1,pos2;
	int res;
	
	printf("enter the number: ");
	scanf("%d",&num);
	beforeOperation = num;

	GETBITPOS("set",pos1);
	GETBITPOS("clear",pos2);

	
	SETBIT(num,pos1);
	printf("bit is set at pos %d res = %d\n",pos1,num);
	
	num = beforeOperation;
	
	CLEARBIT(num,pos2);
	printf("bit is clear at pos %d res = %d\n",pos2,num);

}