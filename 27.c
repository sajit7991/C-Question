/**
	Write a program to reverse a double linked list
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

void reverseNode(DLL** oPTr)
{
	DLL* rPTR = NULL;
	DLL* tptr = *oPTr;
	while(tptr->next)
	{
		tptr = tptr->next;
	}
	
	while(tptr->prev)
	{
		addNodeAtLast(&rPTR,tptr->data);
		tptr= tptr->prev;
	}
	addNodeAtLast(&rPTR,tptr->data);
	
	freeDLL(oPTr);
	*oPTr = rPTR;
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
	reverseNode(&hptr);
	printDLL(hptr);
	
	freeDLL(&hptr);
}