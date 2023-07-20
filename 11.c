/**
Q: How to convert little to big endian and vice versa?
A: in little endian lsb is at lower memory address and msb is at higher memory address Vice Versa in big endian
*/

#include<stdlib.h>
#include<stdio.h>

int main(int argc, char** argv)
{
	int a = 0x12345678;
	int res;
	
	res = ((a & 0xff) << 24)|(((a>>8) & 0xff) << 16)|(((a>>16) & 0xff)<< 8)|((a>>24) & 0xff);
	
	printf("after changing the endian of the  number res = 0x%x\n",res);
	

	


}
