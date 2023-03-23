#include<stdio.h>// including the math and input output library
#include<math.h>
int main()
{
    double a,s,r,ts,d;//declaring the variables
    double tp;

    printf("alpha=");
    scanf("%lf",&a);//taking the value
    printf("rho=");
    scanf("%lf",&s);
    printf("Rs=");
    scanf("%lf",&r);
    printf("Ts=");
    scanf("%lf",&ts);
    printf("D=");
    scanf("%lf",&d);
    tp=ts*sqrt(r*sqrt((1-a)/s)/(2*d));//using the expression
    printf("Tp=%le",tp);
    return 0;
}
/*double a1=0.306,s1=1.2,r1=6.98e8,ts1=1.3654e-11,d1=1.496e11;
double tp1;
tp1=ts1*sqrt(r1*sqrt((1-a1)/s1)/(2*d1));
this way we are getting 5.742861e-13, and the value i am getting after i use scanf and I get 5.742861e-13 so the same value*/
