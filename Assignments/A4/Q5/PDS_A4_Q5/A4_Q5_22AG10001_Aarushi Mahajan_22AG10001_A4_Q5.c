/*
Section 14
Roll No : 22AG10001
Name : Aarushi Mahajan
Assignment No : 4
Description : Program to find approximate root of a cubic polynomial.
*/

#include <stdio.h>
int main()

{
   int e,f,g,h;
   printf("Enter coefficient of x^0.\n");
   scanf("%d",&e);
   printf("Enter coefficient of x^1.\n");
   scanf("%d",&f);
   printf("Enter coefficient of x^2.\n");
   scanf("%d",&g);
   printf("Enter coefficient of x^3.\n");
   scanf("%d",&h);
   double a,b;
   float pa, pb, c, pc;
   b=3;
   a=-5;
   pa= e + f*a + g*a*a + h*a*a*a;
   pb= e + f*b + g*b*b + h*b*b*b;
   c= a - (b)*(b-a)/(pb-pa);
   pc= e + f*c + g*c*c + h*c*c*c;
   if (pc<0.001)
   printf("Root of the polynomial: %f.",c);
   if (pc>0&&pa>0 || pc<0&&pa<0)
   {
	a=c;
   }
   if (pc>0&&pb>0 || pc<0&&pa<0)
   {
	b=c;
   }
  
}

