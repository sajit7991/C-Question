/**
	Q: What happens if you try to add an element to arraywhich falls outside the boundary.Example - int A[10], int A[21]=11;
	A:  if you try to access the a value which isout of array boundary chance of getting segv fault is incress. if  the address which you access is lies in the program space you will be getting the garbage values else segv fault will occur. 
	
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int array[10] = {1,2,3,4,5,6,7,8,9,10};
	int *dmaPtr = malloc(sizeof(int)*10);
	int val ;
	array[11] = 10; //possibilty of getting segv is less. bcos address will be lies in program space but other variable will be crroupted(pointer like dmaPtr). when we access other varibale segv may come. high possible   
	printf("val = %d ,this print will not come if Segv fault come for local array access\n",val);
	dmaPtr[21] = 10; //possibilty of getting segv is more. bcos address will be lies in heap .
	printf("val = %d ,this print will not come if Segv fault come for dma array access\n",val);
	free(dmaPtr);	
}
