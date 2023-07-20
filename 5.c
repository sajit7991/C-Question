/**
	Demonstrate the addition and multiplication of matrix
*/


#include<stdlib.h>
#include<stdio.h>
#include<string.h>

void getMatEle(int row, int col, int mat[row][col])
{
	int idx,jdx;
	
	printf(" enter matrix(%d x %d): \n",row,col);
	for(idx = 0 ;idx < row; idx++)
	{
		for(jdx = 0 ;jdx < col; jdx++)
		{
			scanf("%d",&mat[idx][jdx]);
		}	
	}
}


void printMat(int row, int col,int  mat[row][col])
{
	int idx,jdx;
	
	for(idx = 0 ;idx < row; idx++)
	{
		for(jdx = 0 ;jdx < col; jdx++)
		{
			printf("%d ",mat[idx][jdx]);
		}	
		printf("\n");
	}
}


void mulMatFun(int row1, int col1, int row2, int col2,int mat1[row1][col1], int mat2[row2][col2])
{
	/**
		(2X3)  (3X2)   (2X2)
		1 2 3	1 2     22 28
		4 5 6   3 4  =  49 64
				5 6
	
	*/
	int mulMat[row1][col2];
	int idx,jdx,kdx;
	
	memset(mulMat,0,sizeof(mulMat));
	
	for(idx = 0 ;idx < row1; idx++)
	{
		for(jdx = 0 ;jdx < col2; jdx++)
		{
			for(kdx = 0 ;kdx < col1; kdx++)
			{
				mulMat[idx][jdx] += mat1[idx][kdx] * mat2[kdx][jdx];
			}
		}	
	}
	printf("output matrix: \n");
	printMat(row1,col2,mulMat);
}


void addMatFun(int row, int col,int mat1[row][col], int mat2[row][col])
{
	int AddMat[row][col];

	int idx,jdx;
	
	
	memset(AddMat,0,sizeof(AddMat));
	for(idx = 0 ;idx < row; idx++)
	{
		for(jdx = 0 ;jdx < col; jdx++)
		{
			AddMat[idx][jdx] = mat1[idx][jdx] + mat2[idx][jdx] ;
		}	
	}
	printf("output matrix: \n");
	printMat(row,col,AddMat);
}

int main(int argc, char** argv)
{
	int row1,col1,row2,col2;
	
	printf("enter row1 count: ");
	scanf("%d" ,&row1);
	printf("enter col1 count: ");
	scanf("%d" ,&col1);
	printf("enter row2 count: ");
	scanf("%d" ,&row2);
	printf("enter col2 count: ");
	scanf("%d" ,&col2);
	
	int mat1[row1][col1] , mat2[row2][col2];
	
	
	getMatEle(row1,col1,mat1);
	getMatEle(row2,col2,mat2);

	int opt;
	printf("which operation to perform (add(1)/mul(0)): " );
	scanf("%d", &opt);

	if(opt == 0) //mul
	{
		if((col1 == row2))
		{
			mulMatFun(row1,col1,row2,col2,mat1,mat2);
		}
		else
		{
			printf("matrix mismatch\n");
		}
		
	}
	else	//add
	{
		if((row1 == row2) && (col1 == col2))
		{
			addMatFun(row1,col1,mat1,mat2);
		}
		else
		{
			printf("matrix mismatch\n");
		}
	}
}