/**
	check number is armstrong  or not
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int _pow(int x, int y)
{
	int res = 1;
	while(y)
	{
		res *= x;
		y--;		
	}

	return res;
}

int main(int argc, char** argv)
{
	if(argc!=2)
	{
		printf("usage: a.exe <number>");
		exit(0);
	}
	int number = atoi(argv[1]);
	int power = strlen(argv[1]);
	
	int num = 0;
	int temp = number;
	while(temp)
	{	
		printf("(temp%10) = %d power = %d  temp = %d, pow((temp%10),power) = %d\n",(temp%10),power,temp,_pow((temp%10),power));
		num += _pow((temp%10),power);
		//printf("num = %d   \n", num);
		temp = temp/10;
	}
	
	printf("number = %d, number is %s a armstrong number",num,(num==number) ? "" : "not");
	
	



}












