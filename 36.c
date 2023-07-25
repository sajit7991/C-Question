/**
Q: What happens if static variable is passed as reference or value in a function?
A: A static variable is pass as normal vaiable in function value. static vaiable are store in data section, if ininzeed it will be in bss section, else it will be uninited data section. 
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

static int varOutside = 10;

void foo(int* var)
{
	printf("var = %d ",*var);
}


int main()
{
	static int varInside = 20;
	
	foo(&varOutside);
	foo(&varInside);

}
