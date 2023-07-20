/**
Toggle bits in a number within a Range 
*/


#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>

#define TOGGLEBIT(num,pos) ((num) ^= (1<<(pos)))
#define ISSET(num,pos) (((num)>> (pos)) & 1)

void printBit(int num)
{
	int idx = 0;

	for(idx = 31; idx >= 0; idx--)
	{
		if(idx!=31 && ((idx+1)%8 == 0))
		printf(" ");
		printf("%d",ISSET(num,idx));
	}
	printf("\n");
}

int main(int argc, char** argv)
{
	int num;
	int range1,range2;
	
	printf("enter the number: ");
	scanf("%d",&num);
	
	printf("enter the lower range(0-31): ");
	scanf("%d",&range1);
	
	printf("enter the higher range(0-31): ");
	scanf("%d",&range2);
	
	if(!((range1 >= 0 && range1 <= 31) && (range2 >= 0 && range2 <= 31) && (range1 <= range2)))
	{
		printf("input range are not valid\n");
		exit(0);
	}
	int idx;
	
	printBit(num);
	
	for(idx =range1; idx <=range2; idx++)
	{
		TOGGLEBIT(num,idx);
	}
	
	printBit(num);
}