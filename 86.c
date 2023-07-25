/**
Q Write a program to demonstrate to pointer to pointer
A following program show matrix display example

*/

#include<stdio.h>
#include<stdlib.h>

void getMatrixEle(int **ptr, int r ,int c)
{
	int idx = 0,jdx = 0;
	
	
	for(idx = 0 ; idx< r; idx++){
		for(jdx = 0 ; jdx< c; jdx++)
		{
			printf("enter element ptr[%d][%d]: ",idx,jdx);
			scanf("%d",&ptr[idx][jdx]);
		}
	
	}
}

void printMatrix(int **ptr, int r ,int c)
{
	int idx = 0,jdx = 0;
		
	for(idx = 0 ; idx< r; idx++){
		for(jdx = 0 ; jdx< c; jdx++)
		{
			printf("%d ",ptr[idx][jdx]);
			
		}
		printf("\n");
	}

}


int main(int argc, char** argv)
{
	if(argc != 3)
	{
		printf("usage: a.exe <row> <col>");
		exit(0);
	}
	

	int **ptr;
	int r = atoi(argv[1]);
	int c = atoi(argv[2]);
	int idx = 0,jdx = 0;
	
	ptr = malloc(sizeof(int*)*r);
	
	for(idx = 0 ; idx < r; idx++)
	{
		ptr[idx] = malloc(sizeof(int)*c);
	}
	
	getMatrixEle(ptr,r,c);
	printMatrix(ptr,r,c);
	
	
	for(idx = 0 ; idx < r; idx++)
	{
		free(ptr[idx]);
	}
	free(ptr);

}
