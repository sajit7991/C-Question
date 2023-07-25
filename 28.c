/**
	Q: Write a program to find the middle node of the single linked list.
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct DLL
{
	int data;
	struct DLL* next;
	struct DLL* prev;
}DLL;

#define NEXTLINE  printf("\n")

DLL* hptr = NULL;

void printDLL(DLL* hptr)
{
	DLL* tptr = hptr;
	while(tptr)
	{
		printf("%d ",tptr->data);
		tptr = tptr->next;
	}
	NEXTLINE;
}

void freeDLL(DLL** hptr)
{
	DLL* tptr = *hptr;
	DLL* temp;
	while(tptr)
	{
		temp = tptr->next;
		free(tptr);
		tptr = temp;
	}
	*hptr = NULL;
}

void addNodeAtLast(DLL** hptr, int data)
{
	DLL* tempNode = malloc(sizeof(DLL));
	tempNode->data = data;
	tempNode->next = tempNode->prev = NULL;
	
	if(*hptr == NULL)
	{
		*hptr = tempNode;
	}
	else
	{
		DLL* tptr = *hptr;
		while(tptr->next)
		{
			tptr = tptr->next;
		}
		
		tptr->next = tempNode;
		tempNode->prev = tptr;
	}
	
}

int countDLL(DLL* hptr)
{
	int count = 0;
	if(!hptr)
		return count;
		
	while(hptr)
	{
		count++;
		hptr = hptr->next;
	}
	
	return count;
}

DLL* returnNodeByIndex(DLL* hptr, int idx)
{
	
	if(!hptr)
		return NULL;
	
	if(hptr && !idx)
		return hptr;
	
	int cnt =1;
	while(hptr)
	{
		cnt++;
		if(cnt > idx)
			break;
		hptr = hptr->next;
	}
	return hptr;
	
}


int main(int argc, char** argv)
{
	if(argc<=1)
	{
		printf("usage a.exe <data1> <data2> <data3> ...");
		exit(0);
	}
	int idx,eleCnt = argc-1;
	int data;
	
	for(idx = 0; idx < eleCnt; idx++)
	{
		data = atoi(argv[idx+1]);
		printf("adding %d to DLL...\n",data);
		addNodeAtLast(&hptr,data);
	}
	
	printDLL(hptr);
	
	int cnt = countDLL(hptr);
	printf("node count = %d\n",cnt);
	
	DLL* middleNode = returnNodeByIndex(hptr,(cnt%2)? ((cnt/2)+1):(cnt/2));
	
	if(!middleNode)
		printf("node not fond\n");
	else
		printf("node found data = %d", middleNode->data);
	
	freeDLL(&hptr);
}