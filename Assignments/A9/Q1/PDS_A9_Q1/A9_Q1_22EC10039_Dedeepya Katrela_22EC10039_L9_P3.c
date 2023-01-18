//SEC:14
//ROLL NUMBER:22EC10039
//NAME:DEDEEPYA
//ASSIGNMENT:9
//DESCRIPTION:PROGRAM TO CHECK POINTS
#include <stdio.h>
typedef struct complex{
       float real;
       float imag;
   }complex;
complex add(complex z1,complex z2)
{
 complex z;
 z.real=z1.real+z2.real;
 z.imag=z1.imag+z2.imag;
 return z;
}
int main()
{ complex z1,z2,z;
  printf("enter the real and imag values of z1:");
  scanf("%f %f",&z1.real,&z1.imag);
  printf("enter the real and imag values of z2:");
  scanf("%f %f",&z2.real,&z2.imag);
  z=add(z1,z2);
  printf("z= %f + %fi\n",z.real,z.imag);
return 0;
}
  
  
