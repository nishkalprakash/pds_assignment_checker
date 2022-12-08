/* Varun Huchchannavar 
	Section 14
	22MF10045
	QUESTION NO 1 */
#include<stdio.h>
#include<stdlib.h>

double fact (int a)
{
	int i=1;
	int product=1;
	for(i=1;i<=a;i++)
	{
	product=product*i;
	}
	return product;
}


double power (int b, int p)
{
	int count;
	int g;
	g=1;
	for(count=1;count<=p;count++)
	{
	   g=g*b;
	}
	return g;
	}


int main()
{
	int n;
	printf("Enter the value of n");
	scanf("%d",&n);
	int var;
	printf("Enter the value of the variable");
	scanf("%d",&var);
	int i=1;
	double answer=1.0;
	if(n<=10)
{
	for(i=1;i<=n;i++)
	{
	answer=answer+(power(var,i))/(fact(i));
	printf("%lf",answer);
	}
}

	printf("The value of the answer is %lf",answer);
	return 0;
}
	




	
