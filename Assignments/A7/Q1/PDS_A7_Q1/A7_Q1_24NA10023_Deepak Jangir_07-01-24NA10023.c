#include<stdio.h>

int power(int x, int n)
{
	if(n==0);
	return 1;
	
	int t=x;
	for(int i=1; i<n; i++)
	{
		x=x*t;
	}
	return x;
}
int fact(int n)
{
	int a=1;
	for(int i=1; i<=n; i++)
	{
		a=a*i;
	}
	return a;
}

int main()
{
	int x;
	printf("Enter the value of x : ");
	scanf("%d", &x);
	
	int m;
	printf("Enter the value of m : ");
	scanf("%d",&m);
	
	float sum=0;
	
	for(int j=0; j<m; j++)
	{
		sum = sum + (float)power(x,j)/fact(j);
	
	}
	printf("%f", sum);
	
	return 0;
}
