/* 
	Section 14
	Roll no : 22EC10019
	Name : Arya Choudhuri
	Assignment No : 9 
	Description : Program to compute net salary of employee
*/

#include <stdio.h>

struct employee
{
	char name[100];
	float wage_day;
	int day_p;	
};

float netPay( struct employee A)
{
	float BP = (A.wage_day * A.day_p);
	float HRA,TA;
	if (BP<1000)
		 HRA = 0.12*BP;
	else
		 HRA = 0.20*BP;

	if ( A.day_p>19)
		 TA = 0.1*BP;
	else
		 TA = 0;
	float res = BP + HRA + TA;
	return res;
}

int main()
{
	int n;
	printf("Enter number of employees :" );
	scanf("%d",&n);

	struct employee emp[n];

	printf("Name wage days:\n");

	for ( int i = 0 ;  i < n ; i++)
	{
		scanf("%s%f%d", emp[i].name , &emp[i].wage_day , &emp[i].day_p );
	}

	for (int j = 0 ; j < n ; j++)
	{
		printf("Name: %s\n" , emp[j].name);
		float res = netPay( emp[j]);
		printf("NetPay: %f\n\n", res);
	}
	return 0;
}
