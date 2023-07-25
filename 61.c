/**
Q: How do you use float variable in MCU?
A: The size of the float is 32-bit, out of which:
    * The most significant bit (MSB) is used to store the sign of the number.
    * The next 8 bits are used to store the exponent.
    * The remaining 23 bits are used to store the mantissa.
	
	Let’s take 65.125 as a decimal number that we want to store in the memory.

		Converting to Binary form, we get:
		65     = 1000001
		0.125  = 001
		So, 
		65.125 = 1000001.001
			   = 1.000001001 x 10^6
		Normalized Mantissa = 000001001

		Now, according to the standard,
		we will get the baised exponent by adding the exponent to 127,
			   = 127 + 6 = 133
		Baised exponent = 10000101

		And the signed bit is 0 (positive)

		So, the IEEE 754 representation of 65.125 is,
		0 10000101 00000100100000000000000

*/




#include<stdio.h>
#include<stdlib.h>

#define ISSET(num,pos) (((num)>>(pos)) & 1)

int main()
{
	float f =  65.125;
	int* iptr = (int*)&f;
	int idx = 0;
		
	for(idx =31; idx>=0; idx--)
	{
		printf("%d",ISSET(*iptr,idx));
	}

	

}