/* Section 14
   Muskan
   Lab- 9
   Roll No.- 22ME30042
*/
#include<stdio.h>
 
typedef struct complex{
         float real;
         float imag;
      }comp;
comp z1,z2,z3;

void add(comp z1,comp z2)
{
 z3.real=z1.real+z2.real;
 z3.imag=z1.imag+z2.imag;
printf("%.1f+%.1fi",z3.real,z3.imag);
}

int main()
{
 printf("Enter the z1 data\n");
 scanf("%f%f",&z1.real,&z1.imag);
 printf("Enter the z2 data\n");
 scanf("%f%f",&z2.real,&z2.imag);
add(z1,z2);
return 0;
}    






