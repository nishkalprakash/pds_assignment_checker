#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the no");
	scanf("%d",&n);
	int a[n+1];
	printf("A[n]=");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);

	}
	printf("m = ");
	scanf("%d",&a[n]);
	int j,c,min;
	for(i=0;i<n+1;i++)
	{
		min = i;
		for(j=i+1;j<n+1;j++)
		{
			if(a[min]>a[j])
			{
				min = j;
			}
		}
		c = a[i];
		a[i]=a[min];
		a[min]=c;
	}
	printf("output array :");
	for(i=0;i<n+1;i++)
	{
		printf(" %d ",a[i]);
	}
	
}