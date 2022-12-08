/*Section:14
Roll no:22MI31025
Name:Siddharth Raj
Assignment no:5
description:sum power*/

#include <stdio.h>
#include <math.h>
int power(int x,int n)//define power
{
	int p=1;
        int i;//loop control variable
        for(i=1;i<=n;i++)
        {
            p=p*x;
        } 
        return p;//returns the power
}
int fact(int n)//define fact
{
    int prod=1;
    int i;
	for(i=1;i<=n;i++)
	{
	    prod=prod*i;
	}
	return prod;//returns factorial
}
int main()
{
    float sum=0.0;
	int i;//declare variables
	int x,n;
	printf("Enter x and n:");
	scanf("%d %d",&x,&n);//accept x and n from user
	for(i=0;i<n;i++)
	{
	     sum=sum+(power(x,i)*1.0)/(fact(i)*1.0);//calculating sum
	}
	printf("%f\n",sum);//prints sum of the expression
	return 0;
}
