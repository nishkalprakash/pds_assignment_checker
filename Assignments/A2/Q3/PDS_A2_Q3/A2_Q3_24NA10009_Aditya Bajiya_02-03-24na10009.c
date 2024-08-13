#include <stdio.h>
#include <math.h>
int main()
{
	float u, a;
	int xo, yo, t, theta;
	printf("enter initial coordinates xo and yo");
	scanf("%d%d", &xo, &yo);
	printf("enter initial speed u and acceleration a");
	scanf("%f%f", &u, &a);
	printf("enter time t and angle theta in degree");
	scanf("%d%d", &t, &theta);
	
	float thet = theta* M_PI/180;
	float ux = u* cos(thet);
	float uy = u* sin(thet);
	float ax = a* cos(thet);
	float ay = a* sin(thet);
	
	float xt = xo + ux*t + ax*t*t/2;
	float yt = yo + uy*t + ay*t*t/2;
	
	printf("point Q is %f %f", xt, yt);
	return 0;
}
