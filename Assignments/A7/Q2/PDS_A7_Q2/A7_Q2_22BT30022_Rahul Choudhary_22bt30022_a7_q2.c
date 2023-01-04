/*
section 14
roll no. : 22bt30022
name : rahul choudhary
assignment:4
description:to check how many times no repeat.

*/
#include<stdio.h>
int main()
{
	int m,n,count=0,temp=0;
	printf("enter array size\n");
	scanf("%d",&n);
	int a[n];
	printf("enter array");
	for( int i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter value of m\n");
	scanf("%d",&m);
	for (int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			if((a[j]==a[i]))
			{
			count++;
			}
		}
		if(count==m)
		{
			printf("%d",a[i]);
			temp=1;
		}
		count=0;
	}
if(temp==0)
printf("no\n");
printf(" appear %d times ",m);
return 0;
}
