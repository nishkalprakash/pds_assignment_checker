#include<stdio.h>
#include<math.h>
int main()
{
    double x0,y0,theta,s,a,t,xt,yt,d,u;
    printf("Enter the values of x0,yo,a,t,theta,u\n");
    scanf("%lf %lf %lf %lf %lf %lf",&x0,&y0,&a,&t,&theta,&u);
    printf("\n The initial position of the particle is (%lf,%lf) \n uniform acceleration a=%lf \n theta=%lf \n time,t=%lf \n",x0,y0,a,theta,t);
    s=(M_PI*(theta))/180;
    d=u*t+(a*t*t)/2;
    xt=x0+d*cos(s);
    yt=y0+d*sin(s);
    printf("The initial position of the particle p=(x0,y0)=p(%lf,%lf)\n The particle is moving with initial speed u=%lf along a line inclined to theta degree with x-axis and with a uniform acceleration a=%lf.\n Now the particle reaches the final position Q(xt,yt)=Q(%lf,%lf)",x0,y0,u,a,xt,yt);

}
