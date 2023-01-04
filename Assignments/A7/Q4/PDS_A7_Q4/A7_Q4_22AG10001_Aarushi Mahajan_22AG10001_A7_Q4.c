/*
Section 14
Roll No : 22AG10001
Name : Aarushi Mahajan
Assignment No : 7
Description : Program to print largest number from input.
*/

#include <stdio.h>
int main()
{
   int n, m;
   printf("How many elements are in the array?\n");
   scanf("%d",&n);
   int a[n];
   printf("Enter elements of array.\n");
   for (int i=0;i<n;i++)
   scanf("%d",&a[i]);
   int i, j;
   for (i=0; i<n; i++)
   {
	for (j=i+1;j<n; j++)
	{
	   if (a[i]<a[j])
	   {
		int temp= a[i];
		a[i]= a[j];
		a[j]= temp;
	   }
	}
   }
   for (i=0; i<n; i++)
   printf("%d",a[i]);
   return 0;
}
