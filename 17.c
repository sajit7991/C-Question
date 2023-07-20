/**
Count the number of 1's in a 32 bit number by two
ways viz Using For Loop and without using For Loop

*/

#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>

#define ISSET(num,pos) (((num)>> (pos)) & 1)

int main(int argc, char** argv)
{
	int num;
	
	printf("enter the number: ");
	scanf("%d",&num);
	
	int idx,cnt = 0;
	
	for(idx =0 ; idx < 32;idx++)
	{
		if(ISSET(num,idx))
			cnt++;
	}
	printf("using for loop 1's in number  %d are %d \n",num,cnt);
	
	idx  = cnt = 0;
	
	while(idx < 32)
	{
		if(ISSET(num,idx))
			cnt++;
		idx++;
	}
	printf("without using for loop 1's in number  %d are %d \n",num,cnt);
	
}


