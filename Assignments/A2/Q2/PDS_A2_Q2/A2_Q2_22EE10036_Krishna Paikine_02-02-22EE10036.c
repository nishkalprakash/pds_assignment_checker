#include<stdio.h>
#include<math.h>
int main()
{
    double alpha;
    double rho;
    double Rs;
    double Ts;
    double D;
    double Tp;
    printf("Input the values of alpha, rho, Rs, Ts, D"); // user will input data
    scanf("%lf %lf %le %le %le", &alpha, &rho, &Rs, &Ts, &D);
    printf("The value of Tp is %f", Ts*(sqrt(Rs*(sqrt((1-alpha)/rho)/2*D)))); // calculation done by computer
    // when compiling in the terminal I had to use gcc <File name> -lm
    // After inputing the values in assignment my final value of Tp came out to be 0.093269 
    // The value in which there is exp function we have to use le instead of lf 
    return 0;
}

