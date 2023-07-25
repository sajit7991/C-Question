/**
 Implement all the string functions like strcat, strcmp, strcpy, strlen
*/

#include<stdio.h>

size_t my_strlen(const char * const s)
{
	size_t len = 0;
	
	if(!s) {return len;}
	
	while(s[len])
	{
		len++;
	}

	return len;
}

char* my_strcpy(char* restrict dest,const char* src)
{
	size_t len = 0;
	
	if(!dest) {return NULL;}
	if(!src) {return NULL;}

	while(src[len])
	{
		dest[len] = src[len];
		len++;
	}
	
	dest[len] = 0;
	
	return (char*)dest;
	
}

char* my_strcat(char* restrict dest, const char* src)
{
	size_t len = 0;
	
	if(!dest) {return NULL;}
	if(!src) {return NULL;}

	len = my_strlen(dest);
	my_strcpy(&dest[len],src);
	
	return (char*)dest;
}

int my_strcmp(char* restrict string1,char* restrict string2)
{
	size_t len = 0;
	
	if(!string1) {return -1;}
	if(!string2) {return -1;}

	while(string2[len] && string1[len])
	{
		if(string2[len] != string1[len])
		{
			if(string2[len] > string1[len])
			{
				return 1;
			}
			else
			{
				return -1;
			}
		}
		len++;
	}
	
	if(string1[len] == 0 && string2[len] == 0 )
	{
		return 0;
	}
	else if(string1[len] == 0 )
	{
		return 1;
	}
	else if(string2[len] == 0 )
	{
		return -1;
	}


}

int main()
{
	char string1[1024] = {0};
	char string2[1024] = {0};

	printf("enter the string: ");
	scanf("%[^\n]",string1);
	
	printf("my_strlen string1: %d\n",my_strlen(string1));
	
	printf("string2: %s \n",my_strcpy(string2,string1));
	
	printf("enter the string2: ");
	scanf(" %[^\n]",string2);
	
	printf("string2: %s \n",my_strcat(string2,string1));
	
	printf("enter the string1: ");
	scanf(" %[^\n]",string1);
	
	printf("enter the string2: ");
	scanf(" %[^\n]",string2);
	
	printf("my_strcmp return %d ", my_strcmp(string1,string2));
}
