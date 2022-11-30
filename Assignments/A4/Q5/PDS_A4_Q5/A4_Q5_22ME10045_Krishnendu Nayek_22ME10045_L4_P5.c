#include<stdio.h>
#include<math.h>

int main();
{
int k,l,m,n;
double float a,b,p1,p2,p3,a1,p,c;
printf("Enter coefficient of x^0: ");
scanf("%d",&k);
printf("Enter coefficient of x^1: ");
scanf("%d",&l);
printf("Enter coefficient of x^2: ");
scanf("%d",&m);
printf("Enter coefficient of x^3: ");
scanf("%d",&n);

a=-100;
b=100;
p1=n*a*a*a+m*a*a+l*a+k;
p2=n*b*b*b+m*b*b+l*b+k;
while(a<0)
{
if(p1*p2<0)
{
a++;



c=b-p2*(b-a1)/(p2-p1);
p3=n*c*c*c+m*c*c+l*c+k;
if(p3<00.1)
printf("root is: %lf \n",c);
else if(p1*p3<0);
a1=c;
else
b=c;
}}
return 0;
}





