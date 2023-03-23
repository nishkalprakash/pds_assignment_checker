#include<stdio.h>
#include<math.h>
int main()
{
    double x0,y0,u,theta,a,t,xt,yt,b;
    printf("Enter x0=");
    scanf("%lf",&x0);
    printf("Enter y0=");
    scanf("%lf",&y0);
    printf("Enter theta=");
    scanf("%lf",&theta);
    printf("Enter u=");
    scanf("%lf",&u);
    printf("Enter a=");
    scanf("%lf",&a);
    printf("Enter t=");
    scanf("%lf", &t);
    b = (3.1415*theta)/180;
    // Value of pi is taken as 3.1415
    xt = x0 + u*cos(b)*t + 0.5*a*cos(b)*t*t;
    yt = y0 + u*sin(b)*t + 0.5*a*sin(b)*t*t;
    /*distance travelled by particle is s
    then s = ut + 0.5*a*t*t, where u is initial speed, a is acceleartion and t is time period*/
    printf("The coordinates xt = %lf",xt);
    printf("The coordinates yt = %lf",yt);
    return 0;
}
