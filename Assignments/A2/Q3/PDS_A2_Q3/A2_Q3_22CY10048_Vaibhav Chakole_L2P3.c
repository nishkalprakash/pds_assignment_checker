#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c;
float rt1,rt2,d;
printf("Enter coefficient of x^2: ");
scanf("%d",&a);
printf("Enter coefficient of x: ");
scanf("%d",&b);
printf("enter value of constant: ");
scanf("%d",&c);
d=(b*b)-(4*a*c);
rt1= (-b+sqrt(d))/(2*a);
printf("first root of the eqn is: %f",rt1);
rt2= (-b-sqrt(d))/(2*a);
printf("\nsecond root of the eqn is: %f",rt2); 
return 0;
}
