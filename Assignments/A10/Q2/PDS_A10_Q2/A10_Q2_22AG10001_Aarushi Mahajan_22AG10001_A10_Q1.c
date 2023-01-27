/*
Section 14
Roll No : 22AG10001
Name : Aarushi Mahajan
Assignment No : 10
Description : Program to check if list is in ascending or descending order.
*/

#include <stdio.h>
int main()
{
   int i;
   int a[5];
   printf("Enter elements of list ");
   for (i=0;i<5;i++)
   scanf("%d",&a[i]);

   if (a[0]<a[1] && a[1]<a[2] && a[2]<a[3] && a[3]<a[4])
   printf("The input list L is in ascending order.");

   else if (a[0]>a[1] && a[1]>a[2] && a[2]>a[3] && a[3]>a[4])
   printf("The input list L is in descending order.");

   else
   printf("The input list L is not in sorted order.");

   return 0;
}
