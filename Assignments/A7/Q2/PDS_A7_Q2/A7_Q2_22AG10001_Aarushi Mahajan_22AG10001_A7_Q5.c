/*
Section 14
Roll No : 22AG10001
Name : Aarushi Mahajan
Assignment No : 7
Description : Program to check how many numbers appear m times.
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
   printf("How many times should a number appear?\n");
   scanf("%d",&m);
   int count=0;
   for (int i=0;i<n;i++)
   {
	for (int j=i+1;j<n;j++)
	{
	   if (a[i]==a[j])
	   count++;
	}
	if (count+1==m)
 	   printf("%d ",a[i]);
   }
   if (count+1!=m)
   printf("NO number ");
   printf("appears %d times",m);
   return 0;
}
	   
