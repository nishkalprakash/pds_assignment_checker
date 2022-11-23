/*
Section 14
Roll No : 22AG10001
Name : Aarushi Mahajan
Assignment No : 3
Description : Program to read and perform operations
*/

#include <stdio.h>
#include <math.h>
int main()

{
   float num1, num2, result;
   char op;
   printf("Enter a binary arithmetic operator. \n");
   scanf("%c", &op);
   printf("Enter the two operands. \n");
   scanf("%f %f", &num1, &num2);
   if (op=='+')
   {
     result= num1+num2;
     printf("The result is %f.", result);
   }
   else if (op=='-')
   {
     result= num1-num2;
     printf("The result is %f.", result);
   }
   else if (op=='*')
   {
     result= num1*num2;
     printf("The result is %f.", result);
   }
   else if (op=='/')
   {
     result= num1/num2;
     printf("The result is %f.", result);
   }
   return 0;
}
