/*Section:14
Roll no:22MI31025
Name:Siddharth Raj
Lab:9
Question no:2
description:NetPay*/

#include <stdio.h>
#include <stdlib.h>
#include<math.h>
typedef struct{
	char name[100];
	float wpd;//wage per day
	int days;//number of days present
	float BP;//basic pay
	float HRA;//stores HRA
	float TA;//stores TA
	float salary;//net salary of employees
} data;
int main()
{
	int n;
	int i;
	printf("Enter number of employees:");
	scanf("%d",&n);//accept number of employees
	data a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter name:");
		scanf("%s",a[i].name);//accept name.wage,days present of employees
		printf("Enter Wage per day:");
		scanf("%f",&a[i].wpd);
		printf("Enter number of days present:");
		scanf("%d",&a[i].days);
		a[i].BP=a[i].wpd*a[i].days;//calculates BP of employees
		if(a[i].BP<1000)//conditon to check BP less than or greater than 1000
			a[i].HRA=0.12*a[i].BP;
		else
			a[i].HRA=0.20*a[i].BP;
		if(a[i].days>19)
			a[i].TA=0.10*a[i].BP;
		else
			a[i].TA=0;
		a[i].salary=a[i].BP+a[i].TA+a[i].HRA;//calculate net salry of the employee
		printf("\n");//change line 
	}
	for(i=0;i<n;i++)
	{
		printf("Name:%s\n",a[i].name);//prints name of the employee
		printf("Net Salary:%f\n\n",a[i].salary);//prints salary of employee
	}
	return 0;
}
