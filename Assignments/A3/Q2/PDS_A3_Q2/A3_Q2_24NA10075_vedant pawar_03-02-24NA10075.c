#include<stdio.h>
int main()
{int a,b,c;//a=deposit money,b=withdraw money ,c=check balance. 




printf(" the deposit money:");
scanf("%d",&a);

printf(" withdraw money:");
scanf("%d",&b);

c=a-b;

printf(" deposited:%d",a);
printf(" balance:%d",c);
printf(" withdrew:%d",b);


printf ("exit");
return 0;}
