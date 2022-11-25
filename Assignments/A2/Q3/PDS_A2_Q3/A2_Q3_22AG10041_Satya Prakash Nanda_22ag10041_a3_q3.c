#include<stdio.h>
#include<math.h>
int main()// to calculate the roots of the quadratic equation
{
 int a,b,c;
 printf("enter the values of a,b,c:\n");
 scanf("%d %d %d",&a,&b,&c);
 printf("the quadratic equation is %dx^2 + %dx + %d\n",a,b,c);
 float d,e,f;
 d=sqrt(b*b-4*a*c);
 e=(-b+d)/2*a;
 f=(-b-d)/2*a;
 printf("root1=%f\n", e);
 printf("root2=%f\n", f);
 
return 0;
}

