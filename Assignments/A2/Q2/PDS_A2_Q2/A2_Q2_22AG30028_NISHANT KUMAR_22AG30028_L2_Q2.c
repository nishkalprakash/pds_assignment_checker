#include <stdio.h>


int main() 
{
int a;
char ch;
float n=6.022e23;


printf("enter integer/n");
scanf("%d",&a);
printf("your integer is%d/n",a);

printf("enter your character");

scanf("%c",&ch);

if (ch>=65&&ch<=90)  {



printf("your character is%C",ch); }




printf("enter your float");
scanf("%f",&n);
printf("your float is avagadro number%f",n);


return 0;
}
