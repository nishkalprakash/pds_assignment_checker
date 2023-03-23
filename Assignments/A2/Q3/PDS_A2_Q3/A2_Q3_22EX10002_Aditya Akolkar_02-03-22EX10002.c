#include <stdio.h>
#include <math.h>

 int main ()
 {
    double X0, Y0, u, theta, alpha, t, Xt, Yt, delta; //function to declare variables

    //takes input from user
    printf("Enter value of X0: \n");
    scanf("%lf" , &X0);

    printf("Enter value of Y0: \n");
    scanf("%lf" , &Y0);

    printf("Enter value of u: \n");
    scanf("%lf", &u);

    printf("Enter value of theta: \n");
    scanf("%lf" , &theta);

    printf("Enter value of alpha: \n");
    scanf("%lf" , &alpha);

    printf("Enter value of t: \n");
    scanf("%lf" , &t);

    //logic(calculations) code Based on three formulae of motion
    delta = theta*M_PI/(180);
    Xt = X0 + (u * cos(delta) * t) + (0.5 * alpha * cos(delta)* t * t) ;
    Yt= Y0 + (u * sin(delta) * t) + (0.5 * alpha * sin(delta)* t * t) ;

    //output function
    printf("Value of Xt is: %lf \n", Xt);

    printf("Value of Yt is: %lf \n", Yt);

    return 0;

 }
