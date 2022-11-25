/* 
Section 14
Roll no. 22HS10030
Name:Krithanya
assignment no:3
desc: program to perform arithmetic operations
*/
#include <stdio.h>
int main()
{
float a,b,ans;
char c;
printf(" press + to add  - to subtract  * to multiply / to divide \n ");
scanf("%c",&c);
printf("give two numbers");
scanf("%f %f",&a,&b);
/*printf("%c,%f,%f",c,a,b);*/
if(c=='+')
{
ans= a+b;
}
else if(c=='-')
{
ans=a-b;
}
else if(c=='*')
{
ans=a*b;
}
else
{
ans=a/b;
}
printf("Answer is %f" , ans);
return 0;
}
