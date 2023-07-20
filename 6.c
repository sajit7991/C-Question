/**
Write a program using arrays, DMA, functions, pointersto take subjects and marks from an user and print thesubjects and marks as below
I/P
Enter number of subjects - 3
Subject Name - Science
Subject Marks - 61
Subject Name - Maths
Subject Marks - 91
Subject Name - Social Studies
Subject Marks - 60
O/P
Science 61(Prime)
Maths 91(Prime)
Social Studies 60(Non Prime)
*/

#include<stdlib.h>
#include<stdio.h>
#include<string.h>


typedef struct SubjectMarks
{
	char* subject;
	int marks;
}SubjectMarks_t;

typedef struct studentReportCard
{
	int subjetCnt;
	SubjectMarks_t * subPtr;
}studentReportCard_t;


int main(int argc ,char** argv)
{
	int subCnt;
	
	if(argc != 2)
	{
		printf("usage .\a.exe <subjetCnt>");
		exit(0);
	}
	
	if((subCnt = atoi(argv[1])) == 0)
	{
		printf("usage .\a.exe <subjetCnt>\nsubjetCnt should be vaild number\n");
		exit(0);
	}
	studentReportCard_t Report;
	size_t memAlloc = sizeof(SubjectMarks_t)*subCnt;
	int idx = 0;
	
	Report.subjetCnt = subCnt;
	Report.subPtr = malloc(memAlloc);
	memset(Report.subPtr, 0 , memAlloc);
	
	for(idx = 0 ; idx <subCnt; idx++)
	{
		Report.subPtr[idx].subject = malloc(sizeof(char) * 16);
		printf(" enter subject name: ");
		scanf("%s", Report.subPtr[idx].subject);
		printf(" enter subject marks: ");
		scanf("%d", &Report.subPtr[idx].marks);
	}
	
	printf("report card :\n");
	printf("------------------------\n");
	
	
	for(idx = 0 ; idx <subCnt; idx++)
	{
		printf("subject : %s\n",Report.subPtr[idx].subject);
		printf("marks: %d\n",Report.subPtr[idx].marks);
	}
	
	printf("------------------------\n");
	
	for(idx = 0 ; idx <subCnt; idx++)
	{
		free(Report.subPtr[idx].subject);
	}
	
	free(Report.subPtr);
	
	return 0;
}
