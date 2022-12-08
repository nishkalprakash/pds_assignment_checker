/*
	Section 14
	Roll No.: 22CS10069
	Name : Sayandeep Bhowmick
	Assignment No.: 5
	Description : Calculates sum of the taylor series of e^x upto n th term
*/
#include <stdio.h>

int power(int x,int n)
{
	int pow=1;
	while(n>0)
	{
		pow*=x;
		n--;
	}
	return pow;
}
int fact(int n)
{
	int fac=1;
	while (n>0)
	{
		fac*=n;
		n--;
	}
	return fac;
}
int main()
{
	int n, x;
	printf("Enter the value of x in the series and the number of terms respectively : ");
	scanf("%d%d",&x,&n);
	if(n<0 || n>10)
	{
		printf("WRONG INPUT!!!!\n");
		return 0;
	}
	double sum=0;
	for (int i=0; i<n; i++)
		sum+=((double)power(x,i)/fact(i));
	printf("The sum of the first %d terms of the series is %lf \n",n,sum);
	return 0;
}
