#include<stdio.h>
#include<math.h>
int main()
{
int a;
int b;
int c;
printf("Please Enter a,b and c");
scanf("%i%i%i",&a,&b,&c);
float x,y,z,w;
x= b*b;
y= 4*a*c;
z= x-y;
w=pow(z,1/2);
float d,e;
d= w-b;
e=-b-w;
float f,g;
f= d/2;
g=e/2;
float h,i;
h= f/a;
i=g/a;
printf(" The roots of the equation are %f and %f", h,i);
return 0;
}




