/*
section 14
roll no. : 22bt30022
name : rahul choudhary
assignment:4
description:program to insert a new value yo an already existed array.

*/
#include<stdio.h>
int main()
{
	int m,n,k=0;
	printf("enter array size\n");
	scanf("%d",&n);
	int a[n];
	printf("enter array in ascending order\n");
	for( int i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter element you want to be inserted\n");
	scanf("%d",&m);
	int b[n+1];
	for (int i=0;i<n;i++)
	{
		
		b[k]=a[i];
		
		if((i==(n-1))&&(a[i]<m))
		{
		b[n]=m;
		break;
		}
		if((i==0)&&(a[i]>m))
		b[0]=m;
		if((a[i]<m)&&(a[i+1]>=m))
		{
			k++;
			b[k]=m;
		}
		k++;
	}
	printf("input array\n");
	for( int i=0;i<n;i++)
	printf("%d ",a[i]);
	printf("   output\n");
	for( int i=0;i<=n;i++)
	printf("%d  ",b[i]);
	return 0;
}
