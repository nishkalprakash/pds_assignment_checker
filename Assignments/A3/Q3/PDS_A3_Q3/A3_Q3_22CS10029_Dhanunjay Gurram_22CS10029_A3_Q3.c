/*Section 14
  Roll no:22CS10029
  Name:Gurram Dhanunjay
  Assignment no:3
  Description:Program to check points*/
#include <stdio.h>
int main()
{
   float num1,num2;
   char op;
   printf("Enter the operator(+,-,*,/):\n");
   op=getchar();
   if (op=='+'||op=='-'||op=='*'||op=='/') {              // Checks the validity of operator
     printf("\nEnter the numbers:\n");
     scanf("%f %f",&num1,&num2);                          // Operation performed is :
     if (op=='+') printf("%f",num1+num2);                 // --> Addition
     else if (op=='-') printf("%f",num1-num2);            // --> Subtraction
     else if (op=='*') printf("%f",num1*num2);            // --> Multiplication
     else printf("%f",num1/num2);                         // --> Division
     }
   else printf("Please enter a valid operator");
   return 0;
}
   
