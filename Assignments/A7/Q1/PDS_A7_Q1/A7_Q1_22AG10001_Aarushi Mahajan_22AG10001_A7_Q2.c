/*
Section 14
Roll No : 22AG10001
Name : Aarushi Mahajan
Assignment No : 7
Description : Program to add an element to a sorted array
*/

#include <stdio.h>
int main()
{
   int n;
   printf("How many elements are in the array?\n");
   scanf("%d",&n);
   int a[n+1];
   printf("Enter elements of array.\n");
   for (int i=0;i<n;i++)
   scanf("%d",&a[i]);
   int v;
   printf("Enter value to be inserted.\n");
   scanf("%d",&v);
   a[n]= v;
   int temp;
   for (int start=0;start<(n);start++)
   {
	int minIndex= start;
	for (int j= start+1;j<n+1;j++)
	{
	   if (a[j]<a[minIndex])
	   minIndex= j;
	}
	temp= a[minIndex];
	a[minIndex]= a[start];
	a[start]= temp;
   }
   printf("Output Array: ");
   for (int k=0;k<(n+1);k++)
   printf("%d ",a[k]);
   return 0;
}
