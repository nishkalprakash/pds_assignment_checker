/*

SECTION 14

Roll No:22EE10048

Name: Brij

Assignment NO: 3

Description-Program to write number in words

*/
#include <stdio.h>
int main()
{
char c;
float a,b;
printf("Enter a binary operator(+,-,*,/) and two numbers\n");
scanf("%c %f %f",&c,&a,&b);
if(c=='+')
printf("%f",(a+b));
else if(c=='-')
printf("%f",(a-b));
else if(c=='*')
printf("%f",(a*b));
else if(c=='/')
printf("%f",(a/b));
else
printf("Enter valid operator");
return 0;
}
