#include<stdio.h>
#include<math.h>

int main()

{
    float a,b,c;
    printf("The coefficients a,b,c of the quadratic equation are: \n");
    scanf("%f%f%f", &a,&b,&c);

    float p;
    p = (pow(b,2)) - 4*a*c;

    double D;
    D = sqrt (p);

    if(p<0)
        printf("The real roots do not exist");
    else
        if(p>=0)
        {
            float x,y;

            x = (-b-D)/(2*a);
            y = (-b+D)/(2*a);

            printf("The roots of the equation are %f & %f\n", x,y);
        }

    if(p==0)
        printf("The roots are equal");


        return 0;
}
