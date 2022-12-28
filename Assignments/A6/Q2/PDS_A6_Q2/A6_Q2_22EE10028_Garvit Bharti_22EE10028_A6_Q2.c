#include<stdio.h>
int gcd(int m,int n)
{
	while(m!=n)
	{
		if(m>n)
		{
			return(gcd(m-n,n));
		}
		else
		{
			return(gcd(m,n-m));
		}
	}
	return m;
}
void pair(float *a,int k)
{
	int i,j;
	printf("Co-prime pairs:");
	for(i=0;i<k;i++)
	{
		for(j=i+1;j<k;j++)
		{
			if(gcd(a[i],a[j])==1)
			{
				printf("(%d %d) ",(int)a[i],(int)a[j]);
			} 
		}
	}
}
int main()
{
	int i,v,c;
	float a[5];
	for(i=0;i<5;i++)
	{
		scanf("%f",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		if(a[i]<0)
		{
			printf("invalid entries : All should be integer numbers");
			return 0;
		}
		
	}
	for(i=0;i<5;i++)
	{
		v = (int)a[i];
		c = a[i]/v;
		if(c>1)
				{
			printf("invalid entries : All should be integer number");
			return 0;
		}


	}
	pair(a,5);
	return 0;
}
