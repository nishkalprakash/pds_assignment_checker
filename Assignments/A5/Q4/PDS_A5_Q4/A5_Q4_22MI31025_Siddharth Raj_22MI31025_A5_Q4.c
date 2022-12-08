/*Section:14
Roll no:22MI31025
Name:Siddharth Raj
Assignment no:5
description:bins*/

#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	printf("Enter number of elements:");
	scanf("%d",&n);//number of elements
	int a[n];//array to store elements
	int i;
	printf("Enter elements in array:");
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);//accept user from user
	}
	int max=a[0];int min=a[0];//initialize max and min
	for(i=0;i<n;i++)
	{
	    if(a[i]>max)
	    max=a[i];
	    if(a[i]<min)
	    min=a[i];
	}
	int bins;
	printf("Enter number of bins:");
	scanf("%d",&bins);//accept no of bins
	int dif=max-min+1;//no of elements
	int ranges=ceil(dif/bins);//required ranges
	int r[bins*2];r[0]=min;//even places store lower range
	for(i=1;i<bins*2;i++)
	{
	   if(i%2!=0)
	   r[i]=r[i-1]+ranges-1;//upper limit
	   else
	   r[i]=r[i-1]+1;//lower limit
	}
	int count=1;//bin number
        int counter=0;//stores no elements
	for(i=0;i<bins*2;i=i+2)
	{
	    printf("bin %d:",count);
	    for(int j=0;j<n;j++)
        {
            
            if(a[j]>=r[i]&&a[j]<=r[i+1])
            {printf("%d ",a[j]);counter++;}
         }
         printf("elements=%d",counter);//prints no of elements in the bin
         counter=0;//re initialize
         printf("\n");
         count++;
	}
}
