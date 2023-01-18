/*section 14
  name:harsh
  roll no:22MT30016
  lab no:9 
  question no=5:*/

#include<stdio.h>
#include<stdlib.h>

typedef struct complex{
float real;
float imag;
}complex;
complex add(complex z1,complex  z2)
{
 complex m;
 m.real=z1.real+z2.real;
 m.imag=z1.imag+z2.imag;
 return m ;
}
int main()
{
   complex a,b,c;
   printf("enter complex number a:");
   scanf("%f %f",&a.real,&a.imag);
   printf("enter complex number b:");
   scanf("%f %f",&b.real,&b.imag);
   c=add(a,b);
   printf("z=%f+",c.real);
   printf("%fi",c.imag);
   return 0;
}



