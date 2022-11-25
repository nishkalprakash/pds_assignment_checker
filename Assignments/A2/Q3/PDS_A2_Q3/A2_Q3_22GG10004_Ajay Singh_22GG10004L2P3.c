#include<stdio.h>
#include<math.h>
int main()
{
int a;
int b;
int c;
float d;

printf("coefficient of quadratic equation: asquare(x)+bx+c=0 \n*);
printf("enter a");
scanf("%d" ,&a);

printf("enter an intger b");
scanf("%d" ,&b);

printf("enter an integer c");
scanf("%d" ,&c);

d= [-b+underroot(square(b)-4ac)]/2a;

printf("the roots of equation are");
printf("%f",d);
return 0;
}
