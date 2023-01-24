#include <stdio.h>
/*
Section 14
Roll No : 22NA10003
Name : Anish Kerketta
Assignment No : 9-2
Description:Calculate wage of employee*/
typedef struct details{
char name[100];
int wage[100];
int days[100];
}details;

float netPay(int days,int wage)				// function to calculate netpay
{
	int BP,HRA,TA;
	float salary;
	BP=wage*days;
	if(BP<1000)
	HRA=0.12*BP;
	else
	HRA=0.20*BP;
	if(days>19)
	TA=0.10*BP;
	else
	TA=0;
	salary=BP+HRA+TA;
	return salary;					//returning salary
}
int main()						//main function
{
	int n,i;
	printf("Enter the number of employees=");
	scanf("%d",&n);
		details e[n];
	printf("Name Wage Days:\n");
	for(i=0;i<n;i++)				//scanning details
	{
	
	scanf("%s",e[i].name);
	scanf("%d",&e[i].wage[i]);
	scanf("%d",&e[i].days[i]);
	}
	for(i=0;i<n;i++)				//Printing details
	{
	printf("Name: %s\n",e[i].name);
	printf("Netpay: %f\n",netPay(e[i].days[i],e[i].wage[i]));
	printf("\n");
	}
}
