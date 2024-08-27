#include<stdio.h>

int main()
{int n,i,a=0,b=1,sum;
	printf("ENTER THE VALUE OF N:");
	scanf("%d",&n);
	if (n==0) 
	{
	printf("N IS INVALID");
	
	}
	
	for (i=0 ;i<=n ; i++)
	{ 
	 
	sum=a+b;
	if (i%2==0)
	printf("-%d",sum);
	else 
	printf("%d",sum);
	a=b;
	b=sum;
	
	}
return 0;}


