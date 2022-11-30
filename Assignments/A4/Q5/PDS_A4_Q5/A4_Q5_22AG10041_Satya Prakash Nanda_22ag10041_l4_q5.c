#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c,d;
printf("let the cubic eqn be ax^3+bx^2+cx+d\n");
printf("enter a:\n");
scanf("%d",&a);
if(a==0){printf("not valid\n");}
printf("enter b:\n");
scanf("%d", &b);
printf("enter c:\n");
scanf("%d", &c);
printf("enter d:\n");
scanf("%d", &d);

printf("entered cubic eqn is %dx^3+ %dx^2 + %dx + %d\n", a,b,c,d);

return 0;
}
