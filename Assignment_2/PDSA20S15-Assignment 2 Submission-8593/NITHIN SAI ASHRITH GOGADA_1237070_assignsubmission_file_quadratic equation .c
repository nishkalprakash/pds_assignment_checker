#include <stdio.h>
#include <math.h>

int main()
{
    double a,b,c,r1,r2;
    printf("The coefficients of the equations are\n");
    printf("a=");
    scanf("%lf",&a);
    printf("\nb=");
    scanf("%lf",&b);
    printf("\nc=");
    scanf("%lf",&c);
    double det=(b*b)-(4*a*c);
    if(det<0)
    {
        printf("The roots are complex");

    }
    else
    {
        r1=(-1*b+sqrt(det))/(2*a);
        r2=(-1*b-sqrt(det))/(2*a);
        printf("The roots of the equation are %lf, %lf",r1,r2);
    }
    if(det==0)
    {
        printf("\nThe roots are equal");
    }


}
