/*
Section 14
Roll No : 22AG10001
Name : Aarushi Mahajan
Assignment No : 11
Description : Program to check if a number belongs to fibonacchi sequence.
*/

#include <stdio.h>

int fib (int n)
{
   if (n==0)
   return 0;
   if (n==1)
   return 1;
   else
   return (fib(n-1) + fib(n-2));
}

int main()
{
   int n, i, flag=0;
   printf("Enter n.\n");
   scanf("%d",&n);
   int a[15];
   for (i=0;i<15;i++)
   {
	a[i]= fib(i);
	if (a[i]==n)
	flag=1;
   }
   if (flag==1)
   printf("Yes");
   if (flag==0)
   printf("No");
   return 0;
}
