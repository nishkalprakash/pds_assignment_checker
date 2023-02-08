/*
Section 14
Roll No : 22AG10001
Name : Aarushi Mahajan
Lab Test 2
Set A
Description : Program to add linked lists.
*/

#include <stdio.h>

int main()
{
   int n1, n2;
   int i, j, k;

   printf("Enter N: ");
   scanf("%d",&n1);
   int l1[n1];
   printf("\nEnter %d Numbers: ",n1);
   for (i=0;i<n1;i++)
   scanf("%d",&l1[i]);

   printf("\nEnter N: ");
   scanf("%d",&n2);
   int l2[n2];
   printf("\nEnter %d Numbers: ",n2);
   for (i=0;i<n2;i++)
   scanf("%d",&l2[i]);

   int x= n1*n2;
   int sum[x];
   k=0;

   for (i=0;i<n1;i++)
   {
	for (j=0;j<n2;j++)
	{
	   sum[k]= l1[i] + l2[j];
	   k++;
	}
   }

   
   int size=k;
   int temp;
   for (int trial = 0; trial < size-1 ; trial++)
   {
	for ( j = 0; j < size-1-trial; j++)
	if ( sum[j] > sum[j+1] )

	{
	   temp = sum[j +1];
	   sum[j+1] = sum[j];
	   sum[j] = temp;
	}
   }


   printf("\n");
   printf("L = { ");
   printf("%d ",sum[0]);
   for (i=1;i<size;i++)
   {
	if (sum[i]!=sum[i-1])
	printf("%d ",sum[i]);
   }
   printf("}");
   

   return 0;
}






   
