/**
	Q Implement sorting algorithms ( Bubble sort/Selection sort/Insertion sort/Quick sort/Merge sort)
*/


#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#include <string.h>
#define MULTILINE4SORT(func,shortArray,time1,time2,sortType) 	do																					\
																{																					\
																	time(&time1);																	\
																	func(shortArray,cnt);															\
																	time(&time2);																	\
																	printArray(shortArray,cnt);														\
																	printf("time required to sort by %s = %f\n",sortType,difftime(time2,time1));	\
																}while(0)

void swap(int* e1 , int* e2)
{
	int temp;
	
	temp = *e1;
	*e1 = *e2;
	*e2 = temp;
	
}

void BubbleSort(int* array, int cnt)
{
	int idx, jdx;
	for(idx = 0 ; idx < cnt-1; idx++)
	{
		for(jdx  = 0; jdx < cnt - idx - 1; jdx++ )
		{
			if(array[jdx] > array[jdx+1])
			{
				swap(&array[jdx],&array[jdx+1]);
			}
		}
	}

}

void SelectionSort(int* array, int cnt)
{
	int idx, jdx;
	for(idx = 0 ; idx < cnt-1; idx++)
	{
		for(jdx  = idx+1; jdx < cnt ; jdx++ )
		{
			if(array[idx] > array[jdx])
			{
				swap(&array[idx],&array[jdx]);
			}
		}
	}
}


void InsertionSort(int* arr, int cnt)
{
	int i, key, j;
    for (i = 1; i < cnt; i++)
    {
        key = arr[i];
        j = i - 1;
 
        /* Move elements of arr[0..i-1],
           that are greater than key,
           to one position ahead of
           their current position */
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// Partition the array using the last element as the pivot
int partition(int arr[], int low, int high)
{
    // Choosing the pivot
    int pivot = arr[high];
 
    // Index of smaller element and indicates
    // the right position of pivot found so far
    int i = (low - 1);
 
    for (int j = low; j <= high - 1; j++) {
 
        // If current element is smaller than the pivot
        if (arr[j] < pivot) {
 
            // Increment index of smaller element
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
    if (low < high) {
 
        // pi is partitioning index, arr[p]
        // is now at right place
        int pi = partition(arr, low, high);
 
        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void QuickSort(int* array, int cnt)
{
	quickSort(array,0 , cnt-1);
}

void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
 
    // Create temp arrays
    int L[n1], R[n2];
 
    // Copy data to temp arrays L[] and R[]
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
 
    // Merge the temp arrays back into arr[l..r
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    // Copy the remaining elements of L[],
    // if there are any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    // Copy the remaining elements of R[],
    // if there are any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
 

void mergeSort(int* arr, int l, int r)
{
	if (l < r) {
        int m = l + (r - l) / 2;
 
        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
 
        merge(arr, l, m, r);
    }
}

void MergeSort(int* arr, int cnt)
{
    mergeSort(arr,0, cnt - 1);
}

void printArray (int *array ,int cnt)
{
	int idx ; 
	printf("\n-----------------------------\n");
	for(idx  = 0 ; idx < cnt ; idx++)
	{
		printf("%d ",array[idx]);
	}
	printf("\n-----------------------------\n");
}

int main(int argc, char ** argv)
{
	if(argc <= 1 )
	{
		printf("usage: a.exe <num1> <num2> <num3> ...");
		exit(0);
	}
	
	int cnt = argc - 1;
	int array[cnt];
	int Bubble[cnt];
	int Selection[cnt];
	int Insertion[cnt];
	int Quick[cnt];
	int Merge[cnt];
	int idx = 0 , ele;
	time_t t1, t2;
	
	printf("\nTotal element added are %d \n",cnt);
	printf("array ele are as : ");
	for(idx  = 0 ; idx < cnt ; idx++)
	{
		array[idx] = atoi(argv[idx + 1]);
		printf("%d ",array[idx]);
	}
	printf("\n");
	
	memcpy(Bubble,array,sizeof(array));
	memcpy(Selection,array,sizeof(array));
	memcpy(Insertion,array,sizeof(array));
	memcpy(Quick,array,sizeof(array));
	memcpy(Merge,array,sizeof(array));

	MULTILINE4SORT(BubbleSort,Bubble,t1,t2,"BubbleSort");
	MULTILINE4SORT(SelectionSort,Selection,t1,t2,"SelectionSort");
	MULTILINE4SORT(InsertionSort,Insertion,t1,t2,"InsertionSort");
	MULTILINE4SORT(QuickSort,Quick,t1,t2,"QuickSort");
	MULTILINE4SORT(MergeSort,Merge,t1,t2,"MergeSort");



}