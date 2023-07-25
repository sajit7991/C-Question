/**
		Write a program using the below
		_DATE_
		_TIME_
		_FILE_
		_LINE_
		_STDC_
*/

#include<stdio.h>

int main()
{
	printf("compiled time :%s\n",__TIME__);
	printf("compiled date :%s\n",__DATE__);
	printf("file name :%s\n",__FILE__);
	printf("this line number :%d\n",__LINE__);
	printf("compiled as C :%d\n",__STDC__);

}