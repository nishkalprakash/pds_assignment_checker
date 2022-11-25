/*
   Section 14 
   Roll No : 22CE10085
   Name : Tiyas Roy Choudhury
   Assignment No : 3
   Description : Program  to perform operations on operands
*/

#include<stdio.h>

int main()

{

char c1;
float f1;
float f2;
float o;
printf("Enter an arithmatic binary operator from +,-,/,*");
scanf("%c",&c1);

printf("Enter two nos");
scanf("%f %f",&f1,&f1);

if(c1=='+')
{
  o = f1+f2 ;
printf("%f",o);
}
else if(c1=='-')
{
  o = f1-f2 ;
printf("%f",o);
}
else if(c1=='*')
{
  o = f1*f2 ;
printf("%f",o);
}
else if(c1=='/')
{
  o = f1/f2 ;
printf("%f",o);
}
else
{
  printf("Invalid Input");
}
return 0;
}

