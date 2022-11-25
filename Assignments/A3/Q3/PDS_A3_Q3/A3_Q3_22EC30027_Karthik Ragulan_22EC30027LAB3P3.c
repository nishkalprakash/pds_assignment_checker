//section 14
//Roll no : 22EC30027
//Name:Karthik
//Assignment no:3
//Description:Program that reads a symbol of a binary operator and reads two operands and evaluates 

#include<stdio.h>
int main()
{
float a,b;//declaring the operands 
char operator;
printf("enter the operator:\n");
scanf("%c",&operator);
printf("enter the two operands:\n");
scanf("%f%f",&a,&b);

switch(operator)
{
case '+':
printf("%f",a+b);
break;
case '-':
printf("%f",a-b);
break;
case '*':
printf("%f",a*b);
break;
case '/':
printf("%f",a/b);//print the answer when the entered operator is "/"
break;
}
return 0;
}
