#include<stdio.h>
#include<math.h>
int main()
{
long double h,j;
printf(" Please enter values of u and e");
scanf("%Lf %Lf",&h,&j);
long double c,d,e;
c= h*j;
printf("%Lf",c);
long double f,g;
f=powl(c,0.5);
g=1/f;
printf(" The value of speed of light is %Lf",g);
return 0;
}
