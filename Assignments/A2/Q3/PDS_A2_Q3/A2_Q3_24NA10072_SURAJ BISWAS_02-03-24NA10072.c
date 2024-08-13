#include<stdio.h>
#include<math.h>

int main()
{
	float x0,y0,u,theta,a,xt,t,yt,dist;
	
	printf("\nEnter x0:");
	scanf("%f",&x0);
	
	printf("\nEnter y0:");
	scanf("%f",&y0);
	
	printf("\nEnter u:");
	scanf("%f",&u);
	
	printf("\nEnter theta:");
	scanf("%f",&theta);
	
	printf("\nEnter a:");
	scanf("%f",&a);
	
	printf("\nEnter t:");
	scanf("%f",&t);
	
	dist=(u*t)+a*t*t/2;
	
	xt=x0+dist*cos(theta);
	yt=y0+dist*sin(theta);
	
	printf("Q(xt,yt)=Q(%f,%f)",xt,yt);
	
	
	return 0;
}
