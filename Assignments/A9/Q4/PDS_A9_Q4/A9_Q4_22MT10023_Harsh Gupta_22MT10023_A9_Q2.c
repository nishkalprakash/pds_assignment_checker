/*
 Section 14
 Roll No : 22MT10023
 Name : HARSH GUPTA
 Assignment : 9
 Description : Program that calulates and prints the net salary of the employees along with their name
*/


#include <stdio.h>
#include <stdlib.h>

typedef struct employee{		//defining a structure named employee
	char name[100];
	float wage;
	int days;
}emp;							//typedef employee to emp

void netPay(char name[],float wage,int days)		//function netPay to calculate and print the net salary of an employye along with his/her name
{
	float bp,hra,ta;								//declaring the required variables
	bp=wage*days;									//calculating the hra
	if(bp<1000)
	{
		hra = 0.12*bp;
	}
	else
	{
		hra = 0.2*bp;
	}

	if(days > 19)									//calculating the ta
	{
		ta = 0.1*bp;
	}
	else
	{
		ta = 0;
	}

	float net = bp+hra+ta;							//calculating net salary				

	printf("Name: %s\nNetpay: %0.2f\n",name,net);   //printing the net salary
}
int main()
{
	int n;											//declaring the variable to store the number of employees
	printf("Enter the number of employees: ");		//prompting the user for input
	scanf("%d",&n);									//taking the input

	emp arr[n];										//declaring an array emp of n elements

	printf("Enter details of each employee:\n");    //prompting the user for input
	printf("Name wage days:\n");
	for(int i=0;i<n;i++)							//taking the input
	{
		scanf("%s %f %d",arr[i].name,&(arr[i].wage),&(arr[i].days));
	}
	netPay(arr[0].name,arr[0].wage,arr[0].days);
	for(int i=1;i<n;i++)
	{
		printf("\n\n");
		netPay(arr[i].name,arr[i].wage,arr[i].days);		//calling the netPay function for each employee
	}
	return 0;						//int main function returns 0
}
