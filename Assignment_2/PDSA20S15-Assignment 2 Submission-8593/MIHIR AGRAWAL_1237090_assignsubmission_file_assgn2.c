#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, d;
    double r1, r2;
    printf("Enter the co-efficients of the quadratic equation: \n");
    scanf("%f%f%f",&a,&b,&c);
    printf("The co-efficcients of the equation are: %f, %f, %f\n", a,b,c);
    d=b*b-4*a*c;
    if(d<0)
    printf("The roots are complex\n");
    else
    {
        r1=(-b+sqrt(d))/(2.0*a);
        r2=(-b-sqrt(d))/(2.0*a);
        printf("The roots of the equation are: %lf, %lf\n", r1,r2);
        if(d==0.00)
        printf("The roots are equal\n");
    }
}
