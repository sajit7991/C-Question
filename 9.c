/**
Which bitwise operator is suitable for checking whethera particular bit is on or off
*/


#include<stdlib.h>
#include<stdio.h>

int main(int argc, char** argv)
{
	int num =10;
	int pos;
	int res;
	
	printf("enter the number: ");
	scanf("%d",&num);
	printf("enter the bit pos(0-31): ");
	scanf("%d",&pos);
	if(!(pos>=0 && pos<=31))
	{
		printf("enter the bit pos(0-31)\n");
		exit(0);
	}
	
	res = (num >> pos) & 1;
	if(res)
		printf("bit is set at pos %d\n",pos);
	else
		printf("bit is clear at pos %d\n",pos);

}