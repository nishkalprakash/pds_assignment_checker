#include<stdio.h>
#include<math.h>
int main()
{
    float x0, y0, theta, u, a, t, Xt, Yt;//Declared all the required Variably in *real* values i.e. Float
    printf("x0: ");
    scanf("%f", &x0);
    printf("y0: ");
    scanf("%f", &y0);
    printf("theta: ");
    scanf("%f", &theta);
    printf("u: ");
    scanf("%f", &u);
    printf("a: ");
    scanf("%f", &a);
    printf("t: ");
    scanf("%f", &t);
    theta*= M_PI/180;//Declaring value of pi present in the header file for more accuracy (Converting degrees to radian to use cos and sin functions)
    Xt=x0+u*cos(theta)*t+0.5*a*cos(theta)*t*t;//In the X direction the formula is s=x0+ux*t+0.5*ax*t2
    Yt=y0+u*sin(theta)*t+0.5*a*sin(theta)*t*t;//In the Y direction the formula is s=y0+uy*t+0.5*ay*t^2
    printf("Xt = %.2f", Xt);
    printf("\nYt = %.2f", Yt);
    return 0;
}
