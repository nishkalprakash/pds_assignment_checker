/*
	Section 14
	Roll No.: 22CS10069
	Name : Sayandeep Bhowmick
	Assignment No.: 11
	Description : Checks whether a number belongs to the fibonacci series
*/
#include <stdio.h>

int fibo(int n)
{
	if(n==1)
		return 0;
	if (n==2)
		return 1;

	return(fibo(n-1)+fibo(n-2));
}

void main()
{
	int n,p;
	printf("Enter a number(-1<n<101)  : " );
	scanf("%d",&n);

	if (n<0 || n>100)
	{
		printf("Wrong Input!!!!\n");
		return;
	}

	for (int i = 1; (p=fibo(i))<=n; ++i)
	{
		if (p==n)
		{
			printf("%d is term %d of the fibonnaci series\n",n,i);
			return;
		}
	}

	printf("%d is not a term of the fibonnaci series\n",n);
	return;
}