#include <stdio.h>
int main()
{
	int x[4]={1,3,5,7};
	int i;
	int *ptr;
	for(i = 0; i < 4; ++i)
	{
		ptr=&x[i];
		printf("x[%d] is %d\n",i,*(ptr+i));
	}
	return 0;
}


/**

	Q: What would be the printed?
	A: Following program is the demo progrma to print  the array element using derefeance method. but at line number 9
		ptr refenace is changing. so ptr will go outof bounce after 2nd itration.so possibilty of Segv fault incress or grabge value may aslo print.
	
		x[0] is 1
		x[1] is 5
		x[2] is garbage/ segv Fault
		x[3] is garbage/ segv Fault
		
		
*/