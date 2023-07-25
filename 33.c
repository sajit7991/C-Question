/**
	Q: Write a program to write and retrieve employee data from a text file. Data to be encrypted and stored
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct {

	char name[32] ;
	char department[10];
	int empId, empAge, salary;

}employee;

void getEmpdata(employee* emp)
{
	printf("enter emp name: ");
	scanf("%[^\n]",emp->name);
	printf("enter emp department: ");
	scanf(" %[^\n]",emp->department);
	printf("enter emp empId: ");
	scanf("%d",&emp->empId);
	printf("enter emp empAge: ");
	scanf("%d",&emp->empAge);
	printf("enter emp salary: ");
	scanf("%d",&emp->salary);
}

int main(int argc, char** argv)
{
	FILE *fp = NULL;
	employee emp;
	
	getEmpdata(&emp);
	
	fp = fopen("emp.txt","w");
	
	fprintf(fp,"emp name: %s\n",emp.name);
	fprintf(fp,"emp department: %s\n",emp.department);
	fprintf(fp,"emp empId: %d\n",emp.empId);
	fprintf(fp,"emp empAge: %d\n",emp.empAge);
	fprintf(fp,"emp salary: %d\n",emp.salary);
	
	fclose(fp);
	
	fp = fopen("emp.txt","r");
	
	printf("\nreadding data from file\n");
	char buffer[1024] = {0};
	char *ptr = NULL;
	while(fscanf(fp,"%[^\n]\n",buffer) != EOF)
	{
		if(ptr = strstr(buffer,"name:"))
		{
			ptr = strchr(ptr,':');
			ptr +=2;
			printf("emp name = %s\n",ptr);
		}
		else if(ptr = strstr(buffer,"department:"))
		{
			ptr = strchr(ptr,':');
			ptr +=2;
			printf("emp department = %s\n",ptr);
		}
		else if(ptr = strstr(buffer,"empId:"))
		{
			ptr = strchr(ptr,':');
			ptr +=2;
			printf("emp empId = %s\n",ptr);
		}
		else if(ptr = strstr(buffer,"empAge:"))
		{
			ptr = strchr(ptr,':');
			ptr +=2;
			printf("emp empAge = %s\n",ptr);
		}
		else if(ptr = strstr(buffer,"salary:"))
		{
			ptr = strchr(ptr,':');
			ptr +=2;
			printf("emp salary = %s\n",ptr);
		}
		memset(buffer,0,sizeof(buffer));
	}
	fclose(fp);
}