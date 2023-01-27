/*
Section 14
Roll No : 22AG10001
Name : Aarushi Mahajan
Assignment No : 10
Description : Program to check duplicate, find maximum and minimum.
*/

#include <stdio.h>
int main()
{
   int n,i,j,k;
   printf("Enter number of elements in list.");
   scanf("%d",&n);
   int a[n],c[n];
   printf("Enter elements of list.");
   for (i=0;i<n;i++)
   scanf("%d",&a[i]);


   //printf("The input list contains duplicate numbers of: ");
   for (i=0;i<n;i++)
   {
	for (j=i+1;j<n;j++)
	{
	   k=0;
	   if (a[i]==a[j])
	   {
	      c[k]=a[i];
	      //printf("%d, ",c[k]);
	      k++;
	   }
	}
   }

   int min= a[0];
   for (i=0;i<n;i++)
   {
	if (min>a[i])
	min= a[i];
   }

   int max= a[0];
   for (i=0;i<n;i++)
   {
	if (max<a[i])
	max= a[i];
   }
	
   printf("The input list contains duplicate numbers of: ");
   for (i=0;i<k;i++)
   printf("%d, ",c[k]);
   printf("\n Minimum number is: %d",min);
   printf("\n Maximum number is: %d",max);
   
   return 0;
}
   


