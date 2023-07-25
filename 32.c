/**
Demonstrate how data and file can be encrypted. 
*/

#include<stdio.h>
#include<stdlib.h>



int main(int argc,char** argv)
{
	if(argc != 2)
	{
		printf("usage: a.exe <filename>");
		exit(0);
	}
	FILE * fp = NULL;
	
	fp = fopen(argv[1],"w");
	
	char buffer[1024] = {0};
	
	printf("enter the bio data(max 1024): ");
	scanf("%[^\n]",buffer);
	
	fwrite(buffer,sizeof(buffer),1,fp);
	
	fclose(fp);

}