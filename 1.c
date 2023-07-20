//What happens when array is passed as a pointer in afunction. Print the array from the function.

#include<stdio.h>

void printArrUsingIndexing(int* arr,size_t size)
{
	int idx;
	for(idx = 0; idx < size; idx++)
		printf("%d ",arr[idx]);
	printf("\n");
}


void printArrUsingDereferance(int* arr,size_t size)
{
	int idx;
	for(idx = 0; idx < size; idx++)
		printf("%d ",*arr++);
	printf("\n");
}

int main()
{
	int array[10] = {1,2,3,4,5,6,7,8,9,10};
	size_t size = sizeof(array)/sizeof(array[0]);
	printArrUsingIndexing(array,size);
	printArrUsingDerefering(array,size);
}


