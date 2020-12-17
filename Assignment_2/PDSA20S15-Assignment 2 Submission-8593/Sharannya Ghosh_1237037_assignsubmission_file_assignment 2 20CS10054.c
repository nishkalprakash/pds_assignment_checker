#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c;
    printf("Enter the coefficients a,b,c of the quadratic equation\n");
    scanf("%f%f%f",&a,&b,&c);
    printf("The coefficients of the equation are:%f,%f,%f\n",a,b,c);
    float D,x1,x2;
    D=b*b-4*a*c;
    if(D<0)
        printf("The given quadratic equation has complex roots\n");
    else
    {
        x1=((-b)+sqrt(D))/(2*a);
        x2=((-b)-sqrt(D))/(2*a);
        printf("The roots of the equation are:%f and %f\n",x1,x2);
        if(D==0)
            printf("The roots are equal\n");
    }
    return 0;
}
