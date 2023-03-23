#include <stdio.h>
#include <math.h>
int main()
{
    double x0, y0, theta, u, a, t, xt, yt, q;  //Defined the data types of variables used in this program. I also introduced a new variable to emsure the conversion of degree value of theta into radians
    scanf("%lf%lf%lf%lf%lf%lf", &x0, &y0, &theta, &u, &a, &t); //Read the values of the variables from the user
    q=(M_PI/180.0)*theta; //Since cos and sin functions of math libraries use input in the form of radians. Used the math lib to use precise value of Pi
    xt= x0 + u*cos(q)*t + 0.5*a*cos(q)*t*t; //Defined the final position in x using basic kinematics formulae
    yt= y0 + u*sin(q)*t + 0.5*a*sin(q)*t*t; //Defined the final position in y using basic kinematics formulae
    printf("The final position Q(%0.2lf, %0.2lf)", xt, yt); //Printed the final position as output

    return 0;

}
