/*
name:Krithanya
sec:14
rollno.:22HS10030
assgnment no.:5
desc: sum of series using functions
*/

#include <stdio.h>
int a,p;
int power(int x,int n)
{
	if(n==0)
	{
	p=1;
	return p;
	}
	if (n==1)
	{
	p=x;
	return p;
	}
	if (n>1)
	{
	p=x;
	for (a=2;a<=n;a++)
	p=p*x;
	return p;
	}
}
int b,f;
int factorial(int n)
{
	if (n==0)
	{
	f=1;
	return f;
	}
	if (n>=1)
	{
	f=1;
	for (b=1;b<=n;b++)
	f=f*b;
	return f;
	}
}
int main()
{
	int x,n,c;
	float k,sum=0;
	printf("Enter the values of x and n \n");
	scanf("%d %d",&x,&n);
	for (c=0;c<n;c++)
	{
	k=(float)(power(x,c))/(factorial(c));
	sum=sum+k;
	}
	printf("ans is %f",sum);
	return 0;
}



