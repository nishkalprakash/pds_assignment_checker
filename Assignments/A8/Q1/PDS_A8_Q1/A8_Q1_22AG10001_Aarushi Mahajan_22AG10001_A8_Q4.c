/*
Section 14
Roll No : 22AG10001
Name : Aarushi Mahajan
Assignment No : 8
Description : Program to change order of array.
*/

#include <stdio.h>
int main()
{
   int n;
   printf("Enter number of elements in a row.\n");
   scanf("%d",&n);
   int a[n][n];
   
   int i, j;
   printf("Enter elements of the array.\n");
   for (i=0;i<n;i++)
   {
	for (j=0;j<n;j++)
	{
	   scanf("%d",&a[i][j]);
        }
   }

   printf("Column Major Order: ");
   for (j=0;j<n;j++)
   {
	for (i=0;i<n;i++)
	{
	   printf("%d ",a[i][j]);
        }
   }
   
   return 0;
}
