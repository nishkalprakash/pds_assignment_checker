#include <stdio.h>
#include <math.h>

int main()
{
    float alpha=0.306,rho=1.2;
    double Rs=6.96e8 ,Ts=1.3654e-11,D=1.496e11,Tp;
    /*pre-defined value = 5.742861e-13*/

    printf("Enter the value of alpha,rho,Rs,Ts,D respectively: ");
    scanf("%f%f%le%le%le",&alpha,&rho,&Rs,&Ts,&D);
    Tp=Ts*sqrt((Rs*sqrt((1-alpha)/rho))/(2*D)); /*This is the self-entered value*/
    printf("Tp=%le",Tp);
    return 0;

    /* the pre-defined value and self-entered values are the same = 5.742861e-13*/
    /* using %le we can read values stored in the scientific notation and are produced in the same format as well*/
}
