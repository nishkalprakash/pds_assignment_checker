/*
SECTION 14
ROLL NO:22MI10051
NAME RUCHITA UMATE
ASSIGNMENT NO 3
DISCRIPTION PROGRAM TO CHECK POINTS
*/

#include<stdio.h>
 
int main()
{
char op;
float a,b,result;
printf("Enter the operator and two operands to perform desired calculation:" );
scanf("%c %f %f",&op, &a, &b);
if(op=='+'){
result=a+b;
printf("result: %f",result);
}
else if (op=='-'){
result=a-b;
printf("result: %f",result);
}
else if (op=='*'){
result=a*b;
printf("result: %f",result);
}
else if (op=='/'){
result=a/b;
printf("result: %f",result);
}
else{
printf("Invalid operator");
}
return 0;
}



