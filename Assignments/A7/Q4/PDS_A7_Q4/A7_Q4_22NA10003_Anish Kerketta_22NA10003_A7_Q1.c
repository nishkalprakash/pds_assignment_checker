/*
Section 14
Roll No : 22NA10003
Name : Anish Kerketta
Assignment No : 7-1
Description:Find the largest appended number from the given set of numbers
*/
#include <stdio.h>
void main()
{
	int i,j,n,t,jc1=0,jc2=0;						//Declaring+Initialising
	printf("Enter the number of elements:");				//Write
	scanf("%d",&n);								//Read
	int A[n];								//Creating array of size n
	printf("\nEnter the elements:");					//Write
	for(i=0;i<n;i++)				
	scanf("%d",&A[i]);
	for(i=0;i<n;i++)                                           		//Sorting
        for(j=0;j<n;j++)					
        {
            if(A[i]>A[j])
            {
                t=A[i];
                A[i]=A[j];
                A[j]=t;
            }
        }
	int B[n],C[n];								//Creating array for single and double digit
	j=0;
	for(i=0;i<n;i++)							//Storing single digit elements
	{
	if(A[i]<10)
	{
	B[j]=A[i];
	jc1++;
	j++;
	}
	}
	j=0;
	for(i=0;i<n;i++)							//Storing double digit elements
	if(A[i]>=10)
	{
	C[j]=A[i];
	jc2++,
	j++;
	}
	printf("\nLargest appended number is:");				//Printing the output
	for(i=0;i<jc1;i++)
	printf("%d",B[i]);
	for(i=0;i<jc2;i++)
	printf("%d",C[i]);
	printf("\n");
}
	
	
