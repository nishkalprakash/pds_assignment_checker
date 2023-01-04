/*Section:14
Roll no:22MI31025
Name:Siddharth Raj
Lab:7
Question no:1
description:sort*/

#include <stdio.h>
int main()
{
	int i;
	int n;
	printf("Enter no of elements:");
	scanf("%d",&n);//accept no elements
        int a[n];
	for(i=0;i<n;i++)
	{
	     scanf("%d",&a[i]);
	}
	int j;//loop control variable
	int temp;//temporary variable
        //sorted in descending order
	for(i=0;i<n;i++)
	{
	      for(j=n-1;j>i;j--)
	      {
	           if(a[j-1]<a[j])
	           {
	                temp=a[j-1];
	                a[j-1]=a[j];
	                a[j]=temp;
	           }
	      }
	}
        //print the number
	for(i=0;i<n;i++)
	{
	     printf("%d",a[i]);
	}
	printf("\n");
	return 0;
}

