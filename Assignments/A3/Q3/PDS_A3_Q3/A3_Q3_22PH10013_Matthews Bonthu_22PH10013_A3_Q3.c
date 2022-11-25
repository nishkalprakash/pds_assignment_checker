/* 
  section 14
  Roll No : 22PH10013
  Name : Bonthu Matthews 
  Assignment No : 3
  Description: Read the two operands and operator and perform operation
*/

#include <stdio.h>
  
 int main ( )
{
  float val,op1,op2;
  char oper;
 // op1,op2 are operators and oper is the arthemetic operator//
 
printf("please enter the operator ");
scanf("%c",&oper);
  
printf("enter operand 1");
scanf("%f",&op1);


printf("enter operand 2");
scanf("%f",&op2);

 
if(oper== '+')
{ 
  val= op1+op2;
  printf("%f",val);
}
else if (oper=='-')
{
 val=op1-op2;
 printf("%f",val);
}
else if (oper=='*')
{
 val=op1*op2;
printf("%f",val);
}
else if (oper=='/');
{
val=op1/op2;
printf("%f",val);
}
return 0;
}
