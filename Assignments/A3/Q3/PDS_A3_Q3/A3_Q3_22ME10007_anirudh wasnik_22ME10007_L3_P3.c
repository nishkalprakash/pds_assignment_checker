
#include<stdio.h>
#include<math.h>

int main()
{


/*
Section: 14
Roll no: 22ME10007
Name: Anirudha Wasnik
Assignment No: 3
Description: arithmatic operator
*/

float a,b;
char x;
printf("enter operation and two operands:\n");    //asks for input
scanf("%c %f %f",&x,&a,&b);                       
               

if(x=='+')                                      // branch for addition
         printf("%f",a+b);
else if(x=='-')                                  // branch for subtraction
         printf("%f",a-b);
else if(x=='*')                                  // branch for multiplication
         printf("%f",a*b);
else if(x=='/')                                  // branch for division
         printf("%f",a/b);
else                                             // just in case a user puts wrong input
         printf("invalid input");                 


}
