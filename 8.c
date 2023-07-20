/**
	Bitwiseoperator
	Q: What are different bitwise operators.
	A: There are 6 type of bitwise operators as follows
		1. bitwise and (&)
		2. bitwise or (|)
		3. bitwise xor (^)
		4. bitwise inversion (~)
		5. Right shift (>>)
		6. left shift (<<)
	
*/


#include<stdlib.h>
#include<stdio.h>

int main(int argc, char** argv)
{
	int a = 10;
	int b = 5;
	int res;
	
	printf("a = %d, b = %d\n",a,b);
	
	printf("1. bitwise and (a&b) = %d\n",a&b);
	printf("2. bitwise and (a|b) = %d\n",a|b);
	printf("3. bitwise and (a^b) = %d\n",a^b);
	printf("4. bitwise and (~a) = %d (~b) = %d\n",~a,~b);
	printf("5. bitwise and (a<<1) = %d (b<<1) = %d\n", a<<1, b<<1);
	printf("6. bitwise and (a>>1) = %d (b>>1) = %d\n", a>>1, b>>1);

}