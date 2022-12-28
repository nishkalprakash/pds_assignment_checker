// Name Bonthu Matthews 
// section 14 
// Roll No 22PH10013
// Assignment 6

#include <stdio.h>
int gcd(int m, int n)
{
	while(m!=n)
	{
		if (m>n)
		{
               return gcd(m-n,n);
		}
		else 
		{
			return gcd(m,n-m);
		}
	}
	return m;
}
void pair(int *a,int k)
{
   int i,j;
   for(i=0;i<k;i++)
   {
   	for(j=i;j>=0;j--)
   	{
   		if(gcd(a[i],a[j])==1)
   		{
   			printf("(%d,%d)",a[j],a[i]);
   		}
   	}
   }
}

int main ( )
{
	// take the elements into the array//
	int k,l,v,q;
	printf("enter the number of array elements");
	scanf("%d",&k);
	int a[k];
	printf("enter the array elements");
	for(l=0;l<k;l++)
	{
        scanf("%d",&a[l]);
	}
	for(l=0;l<k;l++)
	{
		if(a[l]<0)
		{
			printf("Invalid entries: All should be positive numbers");
			return 0;
		}
	}
	for(l=0;l<k;l++)
	{
		v=(int)a[l];
		q=a[l]/v;
		if(a[l]>1)
		{
			printf("Invalid Entries: All should be integer numbers");
			return 0;
		}
	}
	pair(a,k);
}