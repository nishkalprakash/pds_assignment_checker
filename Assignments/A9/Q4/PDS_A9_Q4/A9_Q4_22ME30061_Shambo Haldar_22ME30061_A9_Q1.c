/*
Section 14
Roll No: 22ME30061
Name : Shambo Haldar
Assignment No: 9
Description : Program to compute the net salary of employees
*/

#include<stdio.h>

float Netpay(wage,days)
{
	int BP,HRA,TA,net_sal;
	
	BP = wage*days;
	
	if(BP < 1000)
		HRA = 0.12*BP;
	else
		HRA = 0.20*BP;

	if(days > 19)
		TA = 0.10*BP;
	else
		TA = 0;

	net_sal = BP + HRA + TA;
	return net_sal;
}

int main()
{
	int n,i;

	printf("Enter the number of employes: ");
	scanf("%d",&n);

	struct employees{
		char name[3];
		int wage;
		int days;
	}arr[50];

	for(i = 0;i < n;i++){
		//struct employees arr;
		printf("Enter name: ");
		scanf("%s",arr[i].name);
		printf("Enter wage per day: ");
		scanf("%d",&arr[i].wage);
		printf("Enter number of days: ");
		scanf("%d",&arr[i].days);
	}

	for(i = 0;i < n;i++){
		printf("\nName: %s\n",arr[i].name);
		printf("Netpay: %f\n",Netpay(arr[i].wage,arr[i].days));
	}
	return 0;
}
