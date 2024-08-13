#include<stdio.h>
#include<math.h>

int main()
{
	float Xo,Yo,theta,angle,a,t,Xt,Yt;
	//all the var used
	double u;
	printf("\n Xo = ");
	scanf("%f",&Xo);
	printf("\n Yo = ");
	scanf("%f",&Yo);
	printf("\n theta = ");
	scanf("%f",&theta);
	angle= (sqrt(M_PI))*(theta)/180; /*angle is used to convert theta into radians which is stored
	in variable angle */
	printf("\n u = ");
	scanf("%le",&u);
	printf("\n a = ");
	scanf("%f",&a);
	printf("\n t = ");
	scanf("%f",&t);
	float d;
	d=(u*t)+0.5*a*t*t;
	Xt=d*cos(angle);
	Yt=d*sin(angle);
	printf("\n Q(Xt,Yt) = (%le,%le)",Xt,Yt);
	
	
	return 0;
}
