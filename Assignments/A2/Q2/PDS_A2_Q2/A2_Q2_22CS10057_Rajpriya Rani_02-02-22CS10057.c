#include <stdio.h>
#include <math.h>
void main()
{

    double a1,b1,a=0.306,b=1.2,Rs=6.96e8,T=1.3654e-11,D=1.496e11,Rs1,T1,D1,Tp1,Tp;

    printf("Enter the value of alpha,sigma,Rs,Ts,and D");
    scanf("%lf %lf %le %le %le",&a1,&b1,&Rs1,&T1,&D1);
    double r=sqrt((1-a)/b);
    double r1=sqrt((1-a1)/b1);
    Tp=T*sqrt((Rs*r)/(2*D));
    Tp=T1*sqrt((Rs1*r1)/(2*D1));
    printf("\n The value of Tp= %le",Tp);
    printf("\n The value of Tp1= %le",Tp1);
    /* For predefined Tp=5.742861e-13
    For user input Tp=6.953257-310
    */

}
