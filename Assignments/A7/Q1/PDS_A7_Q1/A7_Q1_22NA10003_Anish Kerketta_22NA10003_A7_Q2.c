/*
Section 14
Roll No : 22NA10003
Name : Anish Kerketta
Assignment No : 7-2
Description: To add the new element to the sorted matrix maintaining the order*/
#include <stdio.h>
void main()
{
	int i,j,c=0,n,t;							//initialising and declaring
	printf("Enter the number of elements:");				//write
	scanf("%d",&n);								//read
	int A[n],B[n+1];							//declaring array
	printf("Enter the elements:");
	for(i=0;i<n;i++)							//storing elements in array
	{
	scanf("%d",&A[i]);			
	B[i]=A[i];
	c++;
	}
	printf("Enter the new element:");					//reading new element
	scanf("%d",&B[c]);
	for(i=0;i<=n;i++)                                           		//Sorting
        for(j=0;j<=n;j++)					
        {
            if(B[i]<B[j])
            {
                t=B[i];
                B[i]=B[j];
                B[j]=t;
            }
        }
	printf("\nThe sorted array with new element:\n");			//printing final array
	for(i=0;i<=n;i++)
	printf("%d ",B[i]);
	printf("\n");
}
