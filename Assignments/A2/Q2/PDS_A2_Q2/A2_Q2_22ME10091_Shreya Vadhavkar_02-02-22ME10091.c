#include<stdio.h>
#include<math.h>
int main()
{
    #define ALPHA 0.306
    #define SIGMA 1.2
    #define RS 6.96e8
    #define TS 1.3654e-11
    #define DD 1.496e11

    double alpha, sigma, Rs, Ts, D, Tp,TP;/*declare variables*/
    printf("Enter the values in the given order:");
    scanf("%lf %lf %le %le %le", &alpha, &sigma, &Rs, &Ts, &D);/*Input values from the user*/
    Tp = Ts*sqrt(Rs*sqrt((1-alpha)/sigma)/(2*D));/*Compute Tp from user defined values*/
    printf("%le",Tp);/*Display the first output*/
    TP = TS*sqrt(RS*sqrt((1-ALPHA)/SIGMA)/(2*DD));/*Compute Tp from the pre-defined values*/
    printf("\n%le",TP);/*display the second output*/
    return 0;
}

/*The both outputs are coming out as same which is 5.742861e-13*/
