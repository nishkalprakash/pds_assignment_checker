/*
Section 14
Roll No.:22AG10021
Name: Mahin Hussain
Assignment No.:9
Description:Program to calculate the net pay of employee .
*/

#include<stdio.h>

struct employee
{
	char name[20];
	int wage;
	int present;        //structure to store employee name, wage and no. of days present
};

float netPay(int w,int p)      //function to calculate net pay according to the given formula
{
	float BP,HRA,TA;
	BP=w*p;
	if(BP<1000)
		HRA=0.12*BP;
	else
		HRA=0.20*BP;
	if(p>19)
		TA=0.10*BP;
	else
		TA=0;
	return (BP+HRA+TA);
}

int main()
{
	int n;
	printf("Enter total number of employee");
	scanf("%d",&n);     //asking user to input no. of days and storing it
	printf("Name Wage Days\n");
	struct employee e[n];    //structure array to store emloyee details 
	for(int i=0;i<n;i++)     //loop to input details of employees
		scanf("%s %d %d",e[i].name,&e[i].wage,&e[i].present);
	for(int i=0;i<n;i++)    //loop to print details of employees
	{
		printf("Name: %s\nNetpay:%f",e[i].name,netPay(e[i].wage,e[i].present));
	    printf("\n\n\n");
	}
	return 0;
}