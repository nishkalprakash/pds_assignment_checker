/*
Section 14
Roll No : 22NA10003
Name : Anish Kerketta
Assignment No : 6-3
Description : To merge 2 sorted arrays
*/
#include<stdio.h>
int merge(int size1,int size2,int *ptr1,int *ptr2)			//Passing values to the function
{
	int i,j=0,t;							//Declaration
	int size3=size1+size2;	
	int C[size3];
	for(i=0;i<size3;i++)						//Merging the arrays
	{
		if(i<size1)
		C[i]=*ptr1+i;
		else
		{
		C[i]=*ptr2+j;
		j++;
		}
	}
	printf("C = ");							
	for(i=0;i<size3;i++)						//Sorting
	{
		for(j=0;j<size3-1;j++)
		{	if(C[j]>C[j+1])
			{ t=C[j+1];
			C[j+1]=C[j];
			C[j]=t;
			}
	}
	}
	for(i=0;i<size3;i++)						//Printing
	{
	printf("%d ",C[i]);
	}
}

int main()
{	int size1,size2,i,j;						//Initialising
	printf("Enter size of 1st array:\n");				//Write
	scanf("%d",&size1);						//Read
	printf("Enter 1st sorted array:\n");				//Write
	int A[size1];							//Read
	for(i=0;i<size1;i++)
	{
	scanf("%d",&A[i]);
	}
	printf("Enter size of 2nd array:\n");	
	scanf("%d",&size2);
	int B[size2];
	printf("Enter 2nd sorted array:\n");
	for(i=0;i<size2;i++)
	{
	scanf("%d",&B[i]);
	}
	printf("A = ");	
	for(i=0;i<size1;i++)
	{
	printf("%d ",A[i]);
	}
	printf("\n");
	printf("B = ");
	for(i=0;i<size2;i++)
	{
	printf("%d ",B[i]);
	}
	printf("\n");
	merge(size1,size2,A,B);						//Calling function merge
}

