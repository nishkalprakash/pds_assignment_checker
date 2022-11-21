#include<stdio.h>
#include<math.h>//including math library 
int main()
{
 double mewnot,epsilinot, c;// declaring 
 printf("enter mewnot");
 scanf("%lf", &mewnot);
 printf("enter epsilinot");
 scanf("%lf", &epsilinot);
 c=(1/sqrt(mewnot*epsilinot));// formula of c 
 printf("The value of c is %lf", c);
}
