#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c;
    printf("write the coeffients a,b,c in order \n");
    scanf("%f %f %f",&a,&b,&c);

    printf("the coefficients of the equation are %f,%f,%f\n",a,b,c);
    double s=sqrt(b*b-4*a*c);
    double x=(-b+s)/(2*a);
    double y=(-b-s)/(2*a);

    if (s>0)
        printf("roots of the equation are %f and %f\n",x,y);

    else if (s==0)
        printf("roots of the equation are equal and the root is %f \n",x);

    else
        printf("roots of the equation are imaginary\n");

    return 0;
}
