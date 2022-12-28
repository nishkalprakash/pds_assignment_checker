/*
Section 14
Roll No : 22AG10001
Name : Aarushi Mahajan
Assignment No : 6
Description : Program to merge two sorted arrays.
*/

#include <stdio.h>

int main()
{
   int size1, size2;
   int A[size1], B[size2];

   printf("Enter size of array 1.\n");
   scanf("%d",&size1);
   printf("Enter values of array 1.\n");
   for (int i=0; i<size1; i++)
   scanf("%d",&A[i]);
   printf("Enter size of array 2.\n");
   scanf("%d",&size2);
   printf("Enter values of array 2.\n");
   for (int i=0; i<size2; i++)
   scanf("%d",&B[i]);
   
   int sizem= size1 + size2;
   int temp;
   int C[sizem];
   if (size1<size2) 
   {
   for (int i=0;i<size1;i++)
   C[i]=A[i];
   for (int i=size1;i<size2;i++)
   C[i]=B[i];
   for (int i=0;i<sizem;i++)
   {
	if (C[i]>C[i+1])
	{
	temp= C[i];
	C[i]= C[i+1];
	C[i+1]= temp;
	}
   }
   }
   
   printf("A = ");
   for (int i=0;i<size1;i++)
   printf("%d ",A[i]);
   printf("\n");
   printf("B = ");
   for (int i=0;i<size2;i++)
   printf("%d ",B[i]);
   printf("\n");
   printf("C = ");
   for (int i=0;i<sizem;i++)
   printf("%d ",C[i]);

   return 0;
}




















