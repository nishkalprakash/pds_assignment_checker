#include<stdio.h>
#include<math.h>
int main()
{
    double X0, Y0, u, theta, alpha, t, Xt, Yt;
    printf("Enter the values of X0, Y0, u, theta, alpha, t\n");
    scanf("%lf %lf %lf %lf %lf %lf", &X0, &Y0, &theta, &u, &alpha, &t);
    Xt = X0+(u*cos(theta))*t+0.5*alpha*cos(theta)*t*t;
    Yt = Y0+(u*sin(theta))*t+0.5*alpha*sin(theta)*t*t;
    printf("The value of (Xt,Yt) is (%lf %lf)\n", Xt, Yt);
    //  when compiling in the terminal I had to use gcc <File name> -lm
    return 0;
}
