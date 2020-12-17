#include <stdio.h>
#include <math.h>
 int main()
 {
double a,b,c,h;
 double d,e,f,g,x;
 printf("enter the coefficient a,b,c of the quadratic equation:\n");
 scanf("%lf %lf %lf",&a,&b,&c);
 printf("the values are a=%lf,b=%lf,c=%lf\n",a,b,c);
 x = 2*a;
 h=-b;
 d=(b*b)-(4*a*c);

 if(d>=0)
    {
    if (d>0)
    {
        f=(h+sqrt(d))/x;
        g=(h-sqrt(d))/x;
        printf("The roots real and unequal and are %lf , %lf\n",f,g);
    }
    else
    {e=h/x;
    printf("Roots are real and equal and is equal to:%lf\n",e);
    return 0;}

    }
     else
    {
     printf("the roots are complex\n");
     return 0;
    }

    }



