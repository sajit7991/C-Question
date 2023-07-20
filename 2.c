/**
	Q: What will happen if you try to access a value which isout of array boundary
	A: if you try to access the a value which isout of array boundary chance of getting segv fault is incress. if  the address which you access is lies in the program space you will be getting the garbage values else segv fault will occur. 
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int array[10] = {1,2,3,4,5,6,7,8,9,10};
	int *dmaPtr = malloc(sizeof(int)*10);
	int val ;
	val = array[11]; //possibilty of getting segv is less. bcos address will be lies in program space. 
	printf("val = %d ,this print will not come if Segv fault come for local array access\n",val);
	val = dmaPtr[11]; //possibilty of getting segv is more. bcos address will be lies in heap .
	printf("val = %d ,this print will not come if Segv fault come for dma array access\n",val);
	free(dmaPtr);
}
