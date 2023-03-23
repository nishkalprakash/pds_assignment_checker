#include<stdio.h>
#include<math.h>                   // including math library.

int main(){
    double x0, y0 , u, theta , alpha , beta , xT, yT ,t;                    // declaration of variables

    printf("enter the values of x0, y0, u, theta, alpha, t\n");

    scanf("%lf %lf %lf %lf %lf %lf", &x0, &y0, &u, &theta, &alpha, &t) ;    // taking input from user

    beta = ( (M_PI)/180.0 )*(theta);                                          // conversion of angle from degree to radian

    xT = x0 + (cos(beta))*u*t + 0.5*alpha*(cos(beta))*t*t ;                   // calculating xT
    yT = y0 + (sin(beta))*u*t + 0.5*alpha*(sin(beta))*t*t ;

    printf("(%lf , %lf)", xT, yT);                                           // printing the final value of (xT, yT)

    return 0;



}
