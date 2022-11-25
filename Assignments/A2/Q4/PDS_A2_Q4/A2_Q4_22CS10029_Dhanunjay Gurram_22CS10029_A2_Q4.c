/* A program to calculate speed of light from the given values*/
#include <stdio.h>
#include <math.h>
int main()
{
   float u,e,c;
   printf("Enter the required values\n");
   printf("e is:\n");         //enter e12 instead 10^12//
   scanf("%f",&e);
   printf("u is:\n");
   scanf("%f",&u);
   c=1/(sqrt(u*e));
   printf("The speed of light is:%f",c);
   return 0;
}
