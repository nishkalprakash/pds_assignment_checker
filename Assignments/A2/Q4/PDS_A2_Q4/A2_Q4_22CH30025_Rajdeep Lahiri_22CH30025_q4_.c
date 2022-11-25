#include <stdio.h>
#include <math.h>

int main()
{
    double mu0,epsilon0;
    float c;
    scanf("%lf %lf",&mu0,&epsilon0);
    c = 1/sqrt(mu0*epsilon0);
    printf("the speed of light is: %f",c);
    return 0;
}    

 
