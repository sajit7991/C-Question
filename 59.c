/**
	What would be printed?
*/

#include <stdio.h>
#define MIN(a,b) ((a)>(b)?(a):(b))
void main()
{
	printf("The number is: %d\n", MIN(10,20));
}

/**
 output: 20
*/