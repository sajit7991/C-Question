/**
	Q:What is the difference? int const *p = &i; int * const p = &i; When do we use?
	A: 1. int const *p = &i;
			here p is the pointer to the const. we can chnage the p and point to some other variable. but with using p can't change the values of variable
	   2. int * const p = &i;
			here p is const pointer. we can change values of variable pointer by p. but can't change p.
	
*/
#include<stdio.h>

int main(int argc, char** argv)
{
	int i = 10;
	int k = 20;
	
	int const *p = &i;
	int * const p1 = &i;


	printf("before *p = %d\n",*p);
	p = &k;
	printf("after *p = %d\n",*p);
	
	
	printf("before *p1 = %d\n",*p1);
	*p1 = 15;
	printf("after *p1 = %d\n",*p1);
	
}


