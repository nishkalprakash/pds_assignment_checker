/*
Name : Govind Jaiswal
Roll no. : 22CH10024
Section : 14
Assignment no. : 9
Description : Program to compute the net salary of an employee
*/

#include <stdio.h>

typedef struct employee    //creating a structure and and an alias for it
{
	char name[50];
	float wages;
	int days;
}emp;

void netpay(emp data[],int no)    //function to calculate net salary
{
	float basic_pay,hra,ta,net_salary;
	for(int i=1;i<=no;i++)
	{
		basic_pay = data[i].wages * data[i].days;
		if(basic_pay < 1000.0)
			hra = (0.12)*basic_pay;
		else
			hra = (0.20)*basic_pay;
		if(data[i].days >19)
			ta = (0.1)*basic_pay;
		else
			ta = 0.0;
		net_salary = basic_pay + hra +ta;
		printf("Name : %s\n",data[i].name);
		printf("Netpay : %f\n",net_salary);
	}
}

int main()
{
	int n;
	emp data[100];    //declaring an array for storing employee credentials
	printf("Enter the total number of employee(s):");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		printf("\nEnter name of employee [%d] :",i);
		scanf("%s",data[i].name);
		printf("Enter wages/day :");
		scanf("%f",&data[i].wages);
		printf("No. of days present  for employee[%d] :",i);
		scanf("%d",&data[i].days);    //reading values of different members of employees
	}

	netpay(data,n);   //calling the netpay function
}
				
		
		
	
