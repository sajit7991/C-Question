/**
	Q: When do we use command line arguments in a program?
	A: command line arguments in a program are the data which feed to program during the load time of a program.A string array will be filled genally called as argv(char** argv/char* argv[]), list count will be stored in argc(int).
*/
#include<stdio.h>

int main(int argc,char** argv)
{

	int idx;
	printf("command line arguments are  (argc) = %d",argc);
	
	for(idx = 0; idx<argc; idx++)
	{
		printf("%d -> %s \n",idx ,argv[idx]);
	}

}

