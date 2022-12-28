/*
Section 14
Roll No : 22AG10001
Name : Aarushi Mahajan
Assignment No : 6
Description : Program to print terms of a series.
*/

#include <stdio.h>

int print_term(int n)
{
   if (n==0 || n==1 || n==2)
   return n;
   else
   {
      int x= 3*print_term(n-1)*print_term(n-2) - 2*print_term(n-2)*print_term(n-3) + 1;
      return x;
   }
}


int main ()
{
   int k;
   printf("Enter the number of terms to be displayed.\n");
   scanf("%d",&k);
   if (k<=0)
   printf("Invalid input\n");
   else
   {
   for ( int i=0; i<k; i++)
   {
	printf("%d,",print_term(i));
   }
   }
   return 0;
}
