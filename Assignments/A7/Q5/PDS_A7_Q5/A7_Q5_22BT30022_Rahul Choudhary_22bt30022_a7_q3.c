/*
section 14
roll no. : 22bt30022
name : rahul choudhary
assignment:4
description:program to find out of order element.

*/
#include<stdio.h>
int main()
{
	int m,n,temp=0,count=0;
	printf("enter array size 0<n<10\n");
	scanf("%d",&n);
	int a[n];
	printf("enter array elements\n");
	for( int i=0;i<n;i++)
	scanf("%d",&a[i]);
	for( int i=0;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(a[i]<a[j])
			temp=1;
		}
		if(temp==1)
		count++;
		temp=0;
	}
	printf("out of order:%d",count);
	return 0;
}
