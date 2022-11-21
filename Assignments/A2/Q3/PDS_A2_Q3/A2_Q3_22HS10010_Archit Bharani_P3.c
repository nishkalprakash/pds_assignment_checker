#include<stdio.h>
#include<math.h>
int main()
{
/*To find roots of equation ax^2 + bx +c)*/
int a,b,c;
printf("Enter value of a,b,c");
scanf("%d %d %d",&a,&b,&c);
float s1,s2;
s1=(-b+sqrt(b*b-4*a*c))/(2*a);
s2=(-b-sqrt(b*b-4*a*c))/(2*a);
printf("root=%f %f",s1,s2);
return 0;
}
