#include<stdio.h>
#include<math.h>
void main()

{
    double a,b,c,d,r1,r2,D1;
    printf("Enter the coefficients a , b and c respectively for the quadratic\n");
    scanf("%lf%lf%lf",&a,&b,&c);
    printf("The coefficients of the quadratic are %lf,%lf and %lf\n",a,b,c);
    D1=pow(b,2)-(4*a*c);
    if (D1<0)
    {
        printf("The roots of the given quadratic are complex\n");

    }
    else
    {
        r1=(D1-b)/(2*a);
        r2=(-D1-b)/(2*a);
        printf("The roots of the given quadratic are %lf and %lf\n",r1,r2);
    }
    if (r1==r2)
    {
        printf("The roots of the quadratic are equal\n");

    }

}
