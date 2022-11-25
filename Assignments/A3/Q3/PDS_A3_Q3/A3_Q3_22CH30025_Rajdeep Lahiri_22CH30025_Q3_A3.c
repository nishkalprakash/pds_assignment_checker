/*
Section 14
Roll No : 22CH30025
Name: Rajdeep Lahiri
Assignment No : 3
Description: Program to build a calculator.*/
 
#include <stdio.h>
int main()
{ 
  char operation; 
  float op1,op2 ;
  float result;
  printf("enter the operation\n");
  printf("enter the operands\n");
  scanf("%c %f %f",&operation,&op1,&op2);
  switch(operation)
   {
     case '+':
       result = op1+op2;
       
       break;
     case '-':
       result = op1-op2;
       
       break;
     case '*':
       result = op1*op2;
       break;
     case '/':
       result = op1/op2;
       
       break;
     default:
       printf("invalid operator");

   }
   printf("%f",result);  
   return 0;
} 
