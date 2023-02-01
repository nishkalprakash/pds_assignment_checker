/*
section 14
roll no. : 22bt30022
name : rahul choudhary
assignment:11
description:to get sum of harmonic series
*/
#include<stdio.h> //including
float sum(int n)
{
	float a=0;
	for (int i=1;i<=n;i++)
	{
		if(n==1)a=1;
		else
		a=sum(n-1)+(1/((float)n));
	}
return a;
}
int main() //main function
{
int n;
printf("enter n");
scanf("%d",&n);
float a=sum(n);				//to get sum
printf("sum of series upto n:%0.3f\n",a);
return 0;
}
