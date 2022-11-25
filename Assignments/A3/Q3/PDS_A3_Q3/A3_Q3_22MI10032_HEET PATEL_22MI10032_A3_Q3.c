/*
Section 14
Roll No : 22MI10032
Name : HEET PATEL
Assignment No : 3
Description : To perform the operation on two operands depending upon the operator entered by the user
*/

#include<stdio.h>
#include<math.h>
int main()
{
 char a ;
 printf("Please enter the arithmetic operator\n");
 scanf("%c", &a );
 float b , c ;
 printf("Please enter two operands\n");
 scanf("%f%f",&b,&c);
float d = b+c;
float e = b-c;
float f = b*c;
float g = b/c;
if( a=='+'){
printf("OUTPUT: %f\n", d);
}
if( a=='-'){
printf("OUTPUT: %f\n", e);
}
if( a=='*'){
printf("OUTPUT: %f\n", f);
}
if( a=='/'){
printf("OUTPUT: %f\n", g);
}

return 0 ;
}

