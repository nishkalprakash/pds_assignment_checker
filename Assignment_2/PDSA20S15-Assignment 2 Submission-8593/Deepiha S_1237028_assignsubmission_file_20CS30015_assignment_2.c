#include<stdio.h>
#include<math.h>
int main()
{float a,b,c,d,r1,r2;
 printf("Enter the coefficiants of the eqn ax^2+bx+c=0");
 printf("\na=");
 scanf("%f",&a);
 printf("b=");
 scanf("%f",&b);
 printf("c=");
 scanf("%f",&c);
 d=(pow(b,2))-4*a*c;
 if(d<0)
 printf("The roots are complex");
 else
 {r1= ((-b)+sqrt(d))/(2*a);
  r2= ((-b)-sqrt(d))/(2*a);
  printf("the roots of the equation are %f, %f",r1,r2);
  if(d==0)
  printf("\nThe roots are equal");
  }
 }
