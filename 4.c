/**
Write a program to get maximum repeating element inan array
*/

#include<stdlib.h>
#include<stdio.h>

int main(int argc, char** argv)
{
	int eleCnt = argc-1;
	
	
	if(eleCnt<=0)
	{
		printf("no array element given\n");
		exit(0);
	}
	
	int *array = malloc(sizeof(int)*eleCnt);
	int idx = 0, jdx = 0;
	int maxCnt = 0,cnt = 0;
	int maxele;
	
	printf("array element provided: ");
	for(idx = 0; idx <eleCnt; idx++)
	{
		array[idx] = atoi(argv[idx+1]);
		printf("%d ",array[idx]);
	}
	
	maxele = array[0];
	
	for(idx = 0; idx < eleCnt; idx++)
	{
		cnt = 1;
		for(jdx = idx+1; jdx<eleCnt; jdx++)
		{
			if(array[idx] == array[jdx])
			{
				cnt++;
			}
		}
	
		if(maxCnt < cnt)
		{
			maxCnt = cnt;
			maxele = array[idx];
		}
	}
	
	printf("\nelement (%d) repeating %d times\n",maxele,maxCnt);
	
	
	free(array);
	return 0;
	
	
	


}