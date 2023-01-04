/*
Section 14
Roll No: 22CY10048
Name: Vaibhav Tulshidas Chakole
Assignment number: 7
Description : to find how many numbers are out of orders
*/
#include<stdio.h>
int main()
{
int m,n,t=0,count=0;
printf("Enter array size between 0 to 10 \n");
scanf("%d",&n);
int a[10];
printf("Enter array elements\n");
	for(int i=0;i<n;i++)
	{
	 scanf("%d",&a[i]);
 	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
		if(a[i]<a[j]) //checking condition
		{
			t=1;
		}
		}
		for(int j=i+1;j<n;j++)
		{
		if(a[i]>a[j]) //checking condition
		{
			t=1;
		}
		}
		if(t==1)
		{
		count++;
		}
		t=0; //reset t
	}
printf("Out of order %d \n",count);
return 0;
}
