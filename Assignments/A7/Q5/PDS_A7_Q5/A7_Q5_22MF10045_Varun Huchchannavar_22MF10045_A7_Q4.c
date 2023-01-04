	#include<stdio.h>
	#include<stdlib.h>
	int main()
	{
	int n,i,c=0,d,j;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	d=0;
	for(j=0;j<i;j++)
	{
		if(a[i]>=a[j])
		{
			d++;
		}
	}
	for(j=i+1;j<n;j++)
	{
	if(a[i]<=a[j])
	{
	d++;
	}
	}
	if(d==n-1)
	{
	c++;
	}
	}
	printf("Out of order : %d",n-c);
	return 0;
}
