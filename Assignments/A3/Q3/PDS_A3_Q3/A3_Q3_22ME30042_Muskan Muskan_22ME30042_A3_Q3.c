/* Section 14



    Roll No. : 22ME30042



   Name:  # Muskan#



  Assignment No: 3



  Description: Program to binary arithmetic opreands*/

#include<stdio.h>

int main()
{
float operand1,operand2;
char operator;
printf("give me operator: +,-,*,/");
scanf("%c",&operator);
scanf("%f %f",&operand1,&operand2);
//printf("%c", operator);

switch(operator){ 
      case '+':
 printf("%f+%f=%f",operand1,operand2,operand1+operand2);
case '-':
 printf("%f-%f=%f",operand1,operand2,operand1-operand2);
case '*':
 printf("%f*%f=%f",operand1,operand2,operand1*operand2);
case '/':
 printf("%f/%f=%f",operand1,operand2,operand1/operand2);

default:("invalid case");
}
return 0;
}


 
           
