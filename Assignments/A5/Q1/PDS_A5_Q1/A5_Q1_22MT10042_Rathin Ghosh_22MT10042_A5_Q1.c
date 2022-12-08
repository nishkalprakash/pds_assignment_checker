/*
Section 14
Roll no. - 22MT10042
Name- Rathin Ghosh
Assignment no. - 5
Description- Program calculates the sum of a given series upto n terms
*/ 
#include<stdio.h>
int power(int x,int n)
{
   int i,p=1;
   for(i=1;i<=n;i++)
       {
           p=p*x;
       }
   return p;
}
int fact(int n)
{ 
   int i,f=1;
   for(i=1;i<=n;i++)
       {
          f=f*i;
       }
   return f;
}
int main()
{ 
   int i,x,n;
   float s=0.0;
   printf("Enter the value of the variable : ");
   scanf("%d",&x);
   printf("Enter the number of terms to be considered :");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
      {
          s=s+power(x,i)/(float)fact(i);
      }
   printf("%f", s);
   return 0;
}
