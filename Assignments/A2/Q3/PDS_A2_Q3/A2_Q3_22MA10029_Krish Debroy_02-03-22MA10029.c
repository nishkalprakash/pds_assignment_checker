0#include <stdio.h>
#include <math.h>

int main()
{
    double x0, y0, u , theta, a , t , xt, yt;
    printf("Enter the values of x0, y0, theta, u, a ,t respectively :\n");
    scanf("%lf%lf%lf%lf%lf%lf", &x0,&y0,&theta,&u,&a,&t);
    theta =  theta * M_PI /180.0;/*converting theta to radians*/
    xt = x0 + ((u*cos((double)theta)*t)+ (a*cos((double)theta)*t*t/2.0));/*we have to split the acceleration and velocity into its X and Y components.*/
    yt = y0 + ((u*sin((double)theta)*t)+ (a*sin((double)theta)*t*t/2.0));/*cos component is the X component and sin component is the Y component.*/
    printf("\nQ(Xt, Yt) = Q(%.2lf, %.2lf)\n", xt , yt);/*used print formatting (%.2lf) to truncate Xt and Yt value to two decimal places */
    return 0 ;

}
