/*
Section 14
Roll No : 22AG10001
Name : Aarushi Mahajan
Assignment No : 5
Description : Program to create power and factorial functions.
*/

#include <stdio.h>

int a,pw;
int power(int x, int n)
{
  if (n==0)
  {
    pw=1;
    return pw;
  }
  if (n==1)
  {
    pw=x;
    return pw;
  }
  if (n>1)
  {
    pw=x;
    for (a=2;a<=n;a++)
    pw=pw*x;
    return pw;
  }
}

int b,fc;
int fact(int n)
{
  if (n==0)
  {
    fc=1;
    return fc;
  }
  if(n>=1)
  {
  fc=1;
  for (b=1;b<=n;b++)
  fc= fc*b;
  return fc;
  }
}



int main ()
{
   int x,n,c;
   float k,sum=0;
   printf("Enter x and n.\n");
   scanf("%d %d", &x, &n);
   for (c=0;c<n;c++)
   {
   k = (float)(power(x,c))/(fact(c));
   sum= sum + k;
   }
   printf("Output is %f",sum);
   return 0;
}
  
