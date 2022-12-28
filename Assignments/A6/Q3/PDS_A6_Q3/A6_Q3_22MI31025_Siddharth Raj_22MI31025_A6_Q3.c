/*Section:14
Roll no:22MI31025
Name:Siddharth Raj
Lab:6
Question no:3
description:merge*/

#include <stdio.h>
int *Merge(int size1,int size2,int *ptr1,int *ptr2)//define merge
{
	int c[size1+size2];
	int i;
        int size=size1+size2;//size of array b
	for(i=0;i<(size1);i++)
	{
	     c[i]=*(ptr1+i);//access elements of array a
	}
	int p=0;
	for(i=size1;i<size;i++)
	{
	       c[i]=*(ptr2+p);//access elements of array a
	       p++;
	}
	
        int j;int temp;
        //sorting of array
	for(i=0;i<size;i++)
	{
           for(j=size-1;j>=i;j--)
           {
               if(c[j]<=c[j-1])
               {
                   temp=c[j];
                   c[j]=c[j-1];
                   c[j-1]=temp;
               }
           } 
	}
         //printing of array
        for(i=0;i<size;i++)
        {
             printf("%d ",c[i]);//print the sorted array 
        }
        printf("\n");
        
        return NULL;//returns null as no vlaue is required
}
int main()
{
	int size1,size2;
	printf("Enter size:");
	scanf("%d",&size1);//input array size
	int a[size1];
	int i;
	printf("Enter array:");
	for(i=0;i<size1;i++)//input a
	{
	     scanf("%d",&a[i]);
	}
	printf("Enter size:");
	scanf("%d",&size2);//input size of second array
	int b[size2];
	printf("Enter array:");
	for(i=0;i<size2;i++)
	{
	     scanf("%d",&b[i]);//input b
	}
	Merge(size1,size2,&a[0],&b[0]);//call Merge
	return 0;
}
