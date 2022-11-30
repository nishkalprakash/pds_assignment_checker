/*
Section 14
Roll no - 22IE10007
Name - Anisha Banerjee
Assignment 3
Program to print a pattern
*/
#include <stdio.h>
int main()
   {
     double p1,p2,q=0,s=0,r=0,a=0,b=0,c1,pa,pb;
     int x0,x1,x2,x3,c;
     printf("All the coefficients must be in the range [-5,5] and leading coefficient (of x^3) must not be equal to zero\n");
     printf("Enter the coefficient of x^0\n");
     scanf("%d", &x0);
     printf("Enter the coefficient of x^1\n");
     scanf("%d", &x1);
     printf("Enter the coefficient of x^2\n");
     scanf("%d", &x2);
     printf("Enter the coefficient of x^3\n");
     scanf("%d", &x3);
     if (x0==0)
       printf("Root of the polynomial is 0\n"); 
     if (x0>0)
       {
     while(1) /*To find the intervals*/
       {
         p1=x3*q*q*q+x2*q*q+x1*q+x0;
         p2=x3*s*s*s+x2*s*s+x1*s+s;
         if (p1<0)
           b=q;
         else if (p2<0)
           b=s;
         if(b!=0)
           break;
         q=q-1;
         s=s+1;
       }
     }
   else if (x0<0)
     {
       while(1) /*To find the intervals*/
       {
         p1=x3*q*q*q+x2*q*q+x1*q+x0;
        p2=x3*s*s*s+x2*s*s+x1*s+s;
         if (p1>0)
           b=q;
         else if (p2<0)
           b=s;
         
         if(b!=0)
           break;
         q=q-1;
         s=s+1;
     
       }
     }
    if(a>b)
      {
        c=a;
        a=b;
        b=c;
        
      }
   pa=x3*a*a*a+x2*a*a+x1*a+x0;
   pb=x3*b*b*b+x2*b*b+x1*b+x0;
   while (1)
       {
        pa=x3*a*a*a+x2*a*a+x1*a+x0;
        pb=x3*b*b*b+x2*b*b+x1*b+x0;
        c1=(((a-b)*pa)/(pb-pa))+a;
        r=x3*c1*c1*c1+x2*c1*c1+x1*c1+x0;
        if ((r<=0.001)||(r>=0.001))
          {
            printf("Root of the polynomial: %f",c1);
            break;
          }
        else if(pa*r>0)
           a=c1;
        else 
          b=c1;
        }     
          
   return 0;
}
         
     
     
     
