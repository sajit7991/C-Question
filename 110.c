/**
Write a program to arrange the alphabet in a stringfrom z to a.
*/

#include <stdio.h>
#include<stdlib.h>
#include <string.h>
int main(int argc, char** argv)
{
	int idx = 0, jdx;
	if(argc != 2)
	{
		printf("usage: a.exe <string>");
		exit(0);
	}

	char str[1024] ;
	strcpy(str,argv[1]);
	int n = strlen(str) ;
	int i ,j;
	char a;
	
	printf("before reversing %s \n",str);

	for (i = 0; i < n; ++i) 
	{
		for (j = i + 1; j < n; ++j)
		{
			if (str[i] < str[j]) 
			{
				a =  str[i];
				str[i] = str[j];
				str[j] = a;
			}
		}
	}
	printf("after reversing %s \n",str);
}