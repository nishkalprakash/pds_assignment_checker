#include<stdio.h>
#include<math.h>
int main()
{
    double x , y , u , theta , a , t , thetanew , Xt , Yt;
    printf("enter the value of x coordinate initial:");
    scanf("%lf",&x);
    printf("enter the value of y coordinate initial:");
    scanf("%lf",&y);
    printf("enter the value of theta (angle with the x axis):");
    scanf("%lf",&theta);
    printf("enter the value of u (initial velocity):");
    scanf("%lf",&u);
    printf("enter the value of a (acceralation) :");
    scanf("%lf",&a);
    printf("enter the value of t (time elapsed):");
    scanf("%lf",&t);
    
    Xt = x + (u*cos(theta*((M_PI)/180)))*t + 0.5*a*cos(theta*((M_PI)/180))*(pow(t,2)) ;
    Yt = y + (u*sin(theta*((M_PI)/180)))*t + 0.5*a*sin(theta*((M_PI)/180))*(pow(t,2)) ;
    printf("the value of Q(Xt,Yt) = Q( %6.2lf , %6.2lf ) \n\n", Xt , Yt);
    return 0;


}
