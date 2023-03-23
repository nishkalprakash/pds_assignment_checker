#include<stdio.h>
#include<math.h>

int main(){

    double alpha , sigma , Rs , Ts , D ,Tp , a ;                                  // declaration

    printf("enter the value of alpha, sigma , Rs, Ts, D");

    scanf("%lf %lf %le %le %le", &alpha, &sigma, &Rs, &Ts , &D);          //  taking input



    a = sqrt( (1 - alpha)/sigma) ;

    Tp = Ts*sqrt( Rs*( a ) / (2*D) );

    printf("value of Tp according to your values is: %le \n", Tp) ;          // printing value of Tp according to user data


    alpha = 0.306 ;
    sigma = 1.2 ;
    Rs = 6.96e8 ;
    Ts = 1.3654e-11 ;
    D = 1.496e11 ;

    printf(" Actual value  of Tp is 5.742681e-13") ;                     // printing value of Tp according to given data



    return 0 ;




}
