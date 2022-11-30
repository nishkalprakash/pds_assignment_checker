#include<stdio.h>
#include<math.h>
int main()
{
float a=100,b=100,c,p,x,q,w,e,r,p1,p2,p3;
a<b;
if(a*b<0)
{
scanf("Put a=%f\n",&a);
scanf("Put b=%f\n",&b);
scanf("Put x^3 coeff=%f\n",&q);
scanf("Put x^2 coeff=%f\n",&w);
scanf("Put x^1 coeff=%f\n",&e);
scanf("Put x^0 coeff=%f\n",&r);
p=q*(x*x*x)+w*(x^2)+e*(x)+r;
p1=q*(a^3)+w*(a^2)+e*(a)+r;
p2=q*(b^3)+w*(b^2)+e*(b)+r;
c= a+ (((a-b)(p1))/(p2-p1));
p3=q*(c^3)+w*(c^2)+e*(c)+r);
while (p3<0.001)
{
printf("the root is = %f",c);
else
if (p1*p3>0)
a=c;
else
if (p2*p3>0)
b=c;
}
}
else 
printf("false entry");
return 0;
}
