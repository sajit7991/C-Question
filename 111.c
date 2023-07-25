/**
Remove vowels from a string and print the output 
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <ctype.h>

int isVowel(char c)
{
	switch(c)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			return 1;
		default:
			return 0;
	}
}

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

	for(idx = 0; str[idx]; idx++)
	{
		if(isVowel(str[idx]))
		{
			for(jdx = idx; str[jdx]; jdx++)
			{
				str[jdx] = str[jdx+1];
			}
			idx--;
		}	
	}
	printf("after removing vowel: %s",str);
}


