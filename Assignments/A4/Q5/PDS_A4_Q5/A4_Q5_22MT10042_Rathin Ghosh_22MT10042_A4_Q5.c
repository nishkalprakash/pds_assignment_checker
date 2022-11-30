//program calculates the approximate roots of a cubic polynomial.
#include<stdio.h>
#include<math.h>
int main()
{
int p,q,r,s;
double a,b;
printf("Enter the coefficients of the polynomial : ");
scanf("%d %d %d %d",&p,&q,&r,&s);
printf("Enter the lower and upper limit of the roots ");
scanf("%lf %lf",&a,&b);
double pa= p*pow(a,3)+q*pow(a,2)+r*pow(a,1)+s;
double pb= p*pow(b,3)+q*pow(b,2)+r*pow(b,1)+s;
while(pa*pb>0)
{
printf("Enter the lower and upper limit of the roots ");
scanf("%lf %lf",&a,&b);
double pa= p*pow(a,3)+q*pow(a,2)+r*pow(a,1)+s;
double pb= p*pow(b,3)+q*pow(b,2)+r*pow(b,1)+s;
}
double c=((a-b)/(pb-pa))*pb+b;
while(c>0.001 && c<-0.001)
{
double pc=p*pow(c,3)+q*pow(c,2)+r*pow(c,1)+s;
if (pc*pa>0)
a=c;
else 
b=c;
c=((a-b)/(pb-pa))*pb+b;
}
printf("The estimated root is %lf", c);
return 0;
}






