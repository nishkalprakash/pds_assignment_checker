//calcuating final position
//creator:md waqib sk
//roll:24NA10039

#include<stdio.h>

#include<math.h>
int main(){
	double x0,y0,theta,u,a,t,xt,yt;
	// gets the required inputs from user
	printf("value of x0= \n");
	scanf("%lf",&x0);
	printf("value of y0= \n");
	scanf("%lf",&y0);
	printf("value of theta=\n");
	scanf("%lf",&theta);
	printf("value of u= \n");
	scanf("%lf",&u);
	printf("value of a=\n");
	scanf("%lf",&a);
	printf("value of t= \n");
	scanf("%lf",&t);
	double ux=u*cos(theta*M_PI/180);
	double uy=u*sin(theta*M_PI/180);
	double ax=a*cos(theta*M_PI/180);
	double ay=a*sin(theta*M_PI/180);
// calculates the position
	xt=x0+ux*t +(ax*t*t)/2;
	yt=y0+uy*t +(ay*t*t)/2;

printf("Q(xt,yt)=Q(%lf,%lf) ",xt,yt);



}
