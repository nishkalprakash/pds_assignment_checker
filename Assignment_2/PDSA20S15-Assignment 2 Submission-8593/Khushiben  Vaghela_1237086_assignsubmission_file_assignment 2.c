#include <stdio.h>
#include <math.h>
int main ()
{
   float a,b,c,d,r1,r2,dd;
   printf("Enter a, b and c where a*x*x + b*x +c= 0\n");
   scanf("%d%d%d",&a,&b,&c);
   d=b*b-4*a*c;
   if(d==0)
    {

    r1=-b/(2*a);
    r2=r1;
    printf("Two roots are equal");
    printf("r1=%.2f r2=%.2f",r1,r2);
    }
    else if(d>0)
    {
    dd=sqrt(d);
    r1=(-b+dd)/(2*a);
    r2=(-b-dd)/(2*a);
    printf("Two real unequal roots\n");
    printf("r1=%.2f r2=%.2f",r1,r2);
    }
    else
    {
    printf("Roots are imaginary\n");
    }
    getch();
}
