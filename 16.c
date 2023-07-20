/**
Validate if a IP address is valid
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>

int main(int argc, char** argv)
{
	if(argc != 2)
	{
		printf("usage a.exe <ip>\n");
		exit(0);
	}

	char* ip = argv[1];
	uint16_t ipbytes[4];

	sscanf(ip,"%d.%d.%d.%d",&ipbytes[0],&ipbytes[1],&ipbytes[2],&ipbytes[3]);

	if(ipbytes[0]<=255 && ipbytes[1]<=255 && ipbytes[2]<=255 && ipbytes[3]<=255)
	{
		printf("ip is valid\n");
	}
	else
	{
		printf("ip is invalid\n");
	}
	
}

