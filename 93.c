/**
	Implement searching algorithms ( Linear/Binary search)
*/

#include<stdio.h>
#include<stdlib.h>
#include <time.h>

void sortArray(int * number,int n)
{
	int i,j;
	int a;
	    for (i = 0; i < n; ++i) 
        {
            for (j = i + 1; j < n; ++j)
            {
                if (number[i] > number[j]) 
                {
                    a =  number[i];
                    number[i] = number[j];
                    number[j] = a;
                }
            }
        }
}

void linerSearch(int * array,int cnt,int ele)
{
	int idx = 0 ;
	
	for(idx = 0 ; idx < cnt ; idx++)
	{
		if(array[idx] == ele)
		{
			break;
		}
	}
	
	if(idx == cnt)
	{
		printf("element not found\n");
	}
	else{
		printf("element found at index %d\n",idx);
	}
}
void printArray (int *array ,int cnt)
{
	int idx ; 
	printf("\n");
	for(idx  = 0 ; idx < cnt ; idx++)
	{
		printf("%d ",array[idx]);
	}
	printf("\n");
}

void BinarySearch(int * array,int cnt,int ele)
{
	int start = 0, end = cnt-1, middle ;
	
	middle = (start + end) / 2;
	while(start <= end)
	{
		if(array[middle] == ele)
		{
			printf("element found at index %d\n",middle);
			break;
		}
		else if(array[middle] < ele)
		{
			start = middle +1;
		}
		else{
			end = middle -1;
		}
		middle = (start + end) / 2;
	}
	if(start > end)
		printf("element not found\n");
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
	
	printf("eneter element to search: ");
	scanf("%d",&ele);
	
	time(&t1);
	linerSearch(array,cnt,ele);
	time(&t2);
	
	printf("time required to search by liner serach = %f\n",difftime(t2,t1));

	sortArray(array,cnt);
	printArray(array,cnt);	
	
	time(&t1);
	BinarySearch(array,cnt,ele);
	time(&t2);
	
	printf("time required to search by Binary Search  = %f\n",difftime(t2,t1));
}