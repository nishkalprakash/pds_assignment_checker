/*section 14
roll no. - 22GG10024
name - KRISHNA GUPTA
assignment - 4
description - Finding real roots of cubic polynomial*/
#include <stdio.h>
#include <math.h>
int main()
{
int A,B,C,D;
double a,t,b,x,p,pa,pb,pc,c;   
printf("Enter the coefficient of x^0:");   // inputing coefficients
scanf("%d",&D);
printf("Enter the coefficient of x^1:");   // inputing coefficients 
scanf("%d",&C);
printf("Enter the coefficient of x^2:");   // inputing coefficients
scanf("%d",&B);
printf("Enter the coefficient of x^3:");   // inputing coefficients
scanf("%d",&A);
printf("enter a");   // inputing a 
scanf("%le",&a);
printf("Enter b");   // inputing b
scanf("%le",&b);

if ((A>=-5&&A<=5)&&(B>=-5&&B<=5)&&(C>=-5&&C<=5)&&(D>=-5&&D<=5)&&(A!=0))     // checking range  
{
p= A*pow(x,3)+B*pow(x,2)+C*x+D;

if (a>b)                                // making a smaller than b if a>b
{
   t = a;
   b= t;
   a= b;
}


pa = A*pow(a,3)+B*pow(a,2)+C*a+D;      // evaluating p(a)
pb = A*pow(b,3)+B*pow(b,2)+C*b+D;      // evaluating p(b)
if((pa>0 && pb <0)||(pa<0 && pb>0))    //  checking for opposite signs of p(a) and p(b)
{
     for(c=a;c<=b;c++)
{
       pc = A*pow(c,3)+B*pow(c,2)+C*c+D;   // evaluating p(c)
       if (pc<0 ) 
 {
          pc = pc*-1;                   // evaluating absolute value of p(c)
    }
      if (pc <0.001)
    {
        printf("Root of the polynomial :%le",c);   // printing the root 
  }
    if ((pa >0 && pc >0)||(pa<0 && pc> 0) )
{
     a = c;
}
else 
{
    b= c;
}
}
}
}
}

