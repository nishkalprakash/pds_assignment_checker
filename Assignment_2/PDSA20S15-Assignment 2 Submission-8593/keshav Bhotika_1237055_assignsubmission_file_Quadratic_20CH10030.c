#include <stdio.h>
#include<math.h>
int main()
 {
   float a,b,c;
   scanf("%f%f%f",&a,&b,&c);
   printf("The coefficients of the equation are %f,%f,%f\n",a,b,c);
   float d=(b*b)-(4*a*c);
   if(d<0)
    printf("The roots are complex\n");
   else
    {
     float x1=(-b+sqrt(d))/(2*a);
     float x2=(-b-sqrt(d))/(2*a);
     printf("The roots of the equation are %f,%f\n",x1,x2);
     if(d==0)
      printf("The roots are equal\n");
    }
 }
