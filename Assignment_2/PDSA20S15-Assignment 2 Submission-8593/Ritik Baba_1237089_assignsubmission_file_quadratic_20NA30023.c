#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c,d,D,root1,root2;
    printf("Enter the coeff. of the equation a,b,c \n");
    scanf("%lf%lf%lf",&a,&b,&c);
    printf("The coefficients the equation are %lf,%lf,%lf .\n ",a,b,c);
    d = (pow(b,2)) - 4*a*c;

    if(d<0)
    {
        printf("Sorry, nothing else to be done. \n");
    }else
    {
        if(d==0)
            printf("The roots are Equal .\n");
        D=sqrt(d);
        root1 = ( D-b)/(2*a) ;
         root2 = -(b + D)/(2*a) ;
         printf("The roots of the Equation are %lf,%lf .\n",root1,root2);
    }



}
