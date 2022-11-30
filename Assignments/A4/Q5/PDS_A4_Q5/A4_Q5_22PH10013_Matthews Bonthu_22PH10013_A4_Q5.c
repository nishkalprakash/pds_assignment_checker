#include <stdio.h>
#include <math.h>

int main ( )
{
  double a=-99999,b=99999,pa,pb,pc,c;
  int c1,c2,c3,c4;
 
   printf("enter the coef of x^3");
 scanf("%d",&c1);
   printf("\n enter the coef of x^2");
 scanf("%d",&c2);
   printf("enter the coef of x^1");
 scanf("%d",&c3);
   printf("enter the coef of x^0");
 scanf("%d",&c4);

pa=c1*a*a*a+c2*a*a+c3*a+c4;
pb=c1*b*b*b+c2*b*b+c3*b+c4;
 for (;;)
{
c=(a*pb-b*pa)/(pb-pa);

pc=c1*c*c*c+c2*c*c+c3*c+c4;

  if (pc<0.001 && pc>-0.001)
{ 
 printf("root is %lf",c);
break;
}
else 
{
 if (c1>0)
{ if (pc>=0)
{
b=c;
}
else 
{
 a=c;
}
}
else 
{
if (pc>0)
{
a=c;
}
else
{
b=c;
}
}
}
}
return 0;
}


 
  
