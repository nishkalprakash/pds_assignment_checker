#include<stdio.h>
#include<math.h>
int main()
{
    float a, b, c;
    float x1, x2, d;
    printf("Enter the coefficients for equation ax^2+bx+c=0\n");
    scanf("%f%f%f", &a, &b, &c);
    printf("The coefficients of equation are: %f, %f, %f \n", a, b, c);
    d=pow(b,2)-(4*a*c);
    x1=(-b+sqrt(d))/2*a;
    x2=(-b-sqrt(d))/2*a;
    if(d<0)
        printf("The roots are complex \n");
    else
    if(d>=0)
    {

        printf("The roots of the equation are: %f and %f \n", x1, x2);
        if(x1==x2)
            printf("The roots are equal \n");
    }
    return 0;

}
