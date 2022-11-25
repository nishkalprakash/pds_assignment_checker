/*
SECTION:14
ROLL NO.:22MI31006
NAME:ASMIT SRIVASTAVA
ASSIGNMENT NO.:3
DESCRIPTION:PROGRAM TO CHECK operators AND THEIR RESULTS WITH INTEGERS*/
#include<stdio.h>
int main()
{
float x,y;
char operator;
printf("enter the operator");
scanf("%c", &operator);
printf("enter the x,y");
scanf("%f%f", &x,&y);
if(operator=='+'){ // USING if OPERATOR
printf("%f",x+y);
}
else if(operator=='-'){
printf("%f",x-y);
}
else if(operator=='*'){
printf("%f",x*y);
}
else if(operator=='/'){
printf("%f",x/y);
}
return 0;
}


