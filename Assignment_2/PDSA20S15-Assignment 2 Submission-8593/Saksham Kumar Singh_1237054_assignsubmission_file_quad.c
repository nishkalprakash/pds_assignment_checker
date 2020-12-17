#include <stdio.h>
#include <math.h>
int main()
{
  int a,b,c;
 double k,d,r1,r2;
 printf("enter coefficient of X^2 :\n");
 scanf("%d",&a);
 printf("enter coefficient of X:\n");
 scanf("%d",&b);
 printf("enter coefficient of constant:\n");
 scanf("%d",&c);
 d=b*b-4*a*c;
 if(d<0)
{
 printf("the given equation has no real roots");
 return 0;
 }
 else if(d==0)
 {
  r1=r2=(-b)/(2*a);
 printf("the given equation has equal roots %d",r1);
 return 0;
 }
 else
 {
 k=sqrt(d);
 printf("%f",k);
 r1=(-b+k)/(2*a);
 r2=(-b-k)/(2*a);
 printf("the given equation has distinct roots %f;%f",r1,r2);
 return 0;
 }
 }
