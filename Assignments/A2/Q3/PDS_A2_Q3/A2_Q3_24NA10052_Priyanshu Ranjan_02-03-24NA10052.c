#include <stdio.h>
#include <math.h>
int main()
{	
	double x1,x2,y1,y2,u,theta,a,t,ux,uy;
	printf("Enter the  initial x coordinates :\n");
	scanf("%lf",&x1);
	printf("Enter the  initial y coordinates :\n");
	scanf("%lf",&y1);
	printf("Enter the speed of object :\n");
	scanf("%lf",&u);
	printf("Enter the radion angle of projectile :\n");
	scanf("%le",&theta);
	printf("Enter the alpha value :\n");
	scanf("%lf",&a);
	printf("Enter the time value :\n");
	scanf("%lf",&t);
	theta = (theta*3.14)/180;
	uy= u*sin(theta);
	
	ux = cos(theta)*u;
	
	x2 = x1+(ux*t) +((a*t*t)/2);
	y2 = y1 +(uy*t) + ((a*t*t)/2);
	printf("the output of x2 :%lf\n",x2);
	printf("the output of y2 :%lf\n",y2);
}
	
