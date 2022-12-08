/*
Section 14
Roll No : 22AG10001
Name : Aarushi Mahajan
Assignment No : 5
Description : Program to check if numbers are co-prime.
*/

#include <stdio.h>

int a,b,c,d;
int temp,gcd;
void CoPrime(int a, int b)
{
   c=a;
   d=b;
   if (c>d)
   {
	temp=d;
	c=d;
	d=temp;
   }
   while ((d%c)!=0)
   {
	temp= d%c;
	d=c;
	c=temp;
   }
   gcd = c;
   if (gcd=1)
   printf("%d and %d are co-prime.  ",a,b);
   else 
   printf("No co-prime found.");
}

int main()
{
   int i,m,n,p,q;
   int X[5];
   printf("Enter five numbers.\n");
   for (i=0;i<5;i++)
   scanf("%d",&X[i]);
   for (m=0;m<4;m++)
   {
       p= X[m];
      for (n=1;n<5;n++)
       {
         q= X[n];
	 CoPrime(p,q);
       }
   }
   return 0;
}
