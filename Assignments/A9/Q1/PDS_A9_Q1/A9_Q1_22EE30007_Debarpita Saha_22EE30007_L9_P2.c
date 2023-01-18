/*
* Section 14
* Roll No : 22EE30007
* Name : Debarpita Saha
* Assignment No : 9
* Description : Program to add 2 complex number by passing structures to function
*/
#include<stdio.h>
typedef struct complex{
          
         float real;
         float imag;
       }complex;
   complex a,b;
complex add(complex a, complex b)
{
  complex tmp;
  tmp.real= a.real+ b.real;
  tmp.imag= a.imag + b.imag;
  return (tmp);
}


int main() 
{ 
  
  
scanf("z1: %f %f", &a.real, &a.imag);
scanf("z2: %f %f", &b.real, &b.imag);
complex ans;
ans= add(a,b);
printf("Z= %f + %fi ", ans.real, ans.imag);
return 0;
}
 

