#include<stdio.h>
#include<math.h>
int main()
{
	double x0,y0,u,theta,a,t,Xt,Yt;
	printf("x0= %lf\n",x0);
	scanf("%lf",&x0);
	printf("y0= %lf\n",y0);
	scanf("%lf",&y0);
	printf("theta= %lf\n",theta);
	scanf("%lf",&theta);
	printf("u= %lf\n",u);
	scanf("%lf",&u);
	printf("a= %lf\n",a);
	scanf("%lf",&a);
	printf("t= %lf\n",t);
	scanf("%lf",&t);
	
	Xt = x0 + u*t*cos(theta*M_PI/180) + a*t*t/2*cos(theta*M_PI/180);
	Yt = y0 + u*sin(theta*M_PI/180)*t + a*sin(theta*M_PI/180)*t*t/2;
	printf("Q(Xt,Yt)= Q(%lf,%lf)", Xt,Yt);
	return 0;
}
	
