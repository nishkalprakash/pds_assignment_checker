#include <stdio.h>
#include <math.h>
int main()
{
    double alpha,sigma,Rs,Ts,D;
    printf("Enter the values of alpha sigma Rs Ts D \n");
    scanf("%lf %lf %le %le %le" ,&alpha , &sigma ,&Rs , &Ts , &D);
    double Tp = Ts*(sqrt((Rs*sqrt((1-alpha)/alpha))/2*D));
    printf("Tp = %le",Tp);
    return 0;
    // The value of Tp displayed remains the same in manual input and when initialised which is equal to 1.208996e-01
}
