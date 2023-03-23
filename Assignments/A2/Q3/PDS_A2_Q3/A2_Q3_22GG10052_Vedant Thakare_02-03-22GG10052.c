#include<stdio.h>
#include<math.h>
int main()
{
    double x0,y0,u,theta,alpha,t,xt,yt,b;
    //The below lines are for taking the values of x0,y0,u,theta,alpha from the user
    printf("Enter x0\n");
    scanf("%lf",&x0);
    printf("Enter y0\n");
    scanf("%lf",&y0);
    printf("Enter theta\n");
    scanf("%lf",&theta);
    printf("Enter u\n");
    scanf("%lf",&u);
    printf("Enter alpha\n ");
    scanf("%lf",&alpha);
    printf("Enter t\n");
    scanf("%lf",&t);
    //The approximmate value of 'pie' is taken to be 3.14 ,which may affect the exact accuracy of the answers
    b = (3.14*theta)/180;
    yt = y0 + u*sin(b)*t + 0.5*alpha*sin(b)*t*t;
    xt = x0 + u*cos(b)*t + 0.5*alpha*cos(b)*t*t;
    printf("The value of xt is %lf\n",xt);
    printf("The value of yt is %lf\n",yt);
    return 0;


}
