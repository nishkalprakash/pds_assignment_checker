/*
Section 14
Roll no: 22EX10014
Name: Bibhor Patra
Assignment 9
Description: Program to find netpay
*/
#include<stdio.h>
#include<string.h>
struct data
	{
		char name[20];
		int wagesperday;
		int noofdays;
	};// structure declared

int netPay(struct data a)
{
	int BP, HRA, TA=0,salary;
	BP = (a.wagesperday)*(a.noofdays);
	if(BP<1000){HRA = (0.12*BP);}
	else{HRA= 0.2*BP;}
	if(a.noofdays>19){TA = 0.1*BP;}
	salary = BP + TA + HRA;
	return salary;

}// function to find net pay


int main ()
{
	int noofemployees;
	scanf("%d",&noofemployees);
	struct data a[noofemployees];
	for(int i=0;i<noofemployees;i++)
	{
		scanf("%s",a[i].name);
		scanf("%d",&a[i].wagesperday);
		scanf("%d",&a[i].noofdays);
	}// loop to scan in the data for each employee
	for(int i=0;i<noofemployees;i++)
	{
		printf("Name: %s \t",a[i].name);
		printf("Netpay: %d",netPay(a[i]));
	}// loop to print name and netpay of each employee

	return 0;
}