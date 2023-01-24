/*
	Section 14
	Roll No.: 22CS10069
	Name : Sayandeep Bhowmick
	Assignment No.: 9
	Description : Calculates the netpay of the employees
*/
#include <stdio.h>

typedef struct
{
	char name[50];
	float wage;
	int days;
}employee;

void netPay(employee a)
{
	float bp=a.wage*a.days;
	float hra,ta=0;

	if(bp<1000)
		hra=.12*bp;
	else
		hra=.2*bp;

	if(a.days>19)
		ta=.1*bp;

	printf("\nName : %s\n", a.name);
	printf("Netpay : %.2f\n", bp+hra+ta);		//directly adds and prints the netpay

}

int main()
{
	int n;
	printf("\nEnter the total number of employee/s : ");
	scanf("%d",&n);

	if(n<=0)
	{
		printf("Wrong Input!!!!\n\n");
		return 0;
	}

	employee A[n];

	for (int i = 0; i < n; ++i)
	{
		//fflush(stdin);

		printf("\nEnter the name of employee %d : ", i+1);
		scanf("%s",A[i].name);

		printf("Enter wages/day : ");
		scanf("%f",&A[i].wage);


		printf("Enter number of days present : ");
		scanf("%d",&A[i].days);

		if (A[i].wage<0 || A[i].days<0)					//since these cannot be negative
		{
			printf("\nWrong Input!!!!\n\n");
			return 0;
		}
	}

	printf("\n	------Payment Details------\n");

	for (int i = 0; i < n; ++i)
		netPay(A[i]);

	printf("\n");
	return 0;
}