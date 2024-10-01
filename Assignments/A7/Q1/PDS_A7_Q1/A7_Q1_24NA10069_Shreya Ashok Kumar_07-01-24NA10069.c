#include <stdio.h>

int power(int x,int n)
{
	int t;
	t=x;
	int i;
	for(i=1;i<n;i++)
		{
		x=x*t;
		}
	return x;
}
int fact(int n)
{
	int t,fac=1;
	for(n=n+1;n!=1;n--)
	{
		t=(n-1);
		fac=fac*t;
	}
return fac;
}
int main()
{
	int a,b,n,x,y,t;
	float r=1,div=0; 
	printf("\nenter value of x and number of terms:");
	scanf("%d %d",&x,&n);
	for(t=1;t<n;t++)
	{
		a=power(x,t);
		b=fact(t);
		div=(float)a/b;
		r=div+r;
	}
printf("%f",r);
}
