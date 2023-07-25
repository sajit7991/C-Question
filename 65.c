/**
Given a range location address 1500 to 2500. Shift a
data on 2000 to 3000 location
*/

#include<stdio.h>

int main()
{
	/**
		src address : 1500 to 2500
		dest address: 2000 to 3000
	*/

	memcpy((void*)2000,(void*)1500,(size_t)(2500-1500+1));

}
