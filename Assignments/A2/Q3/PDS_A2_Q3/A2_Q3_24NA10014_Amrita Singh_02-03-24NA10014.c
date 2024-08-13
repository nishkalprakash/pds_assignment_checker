//PROGRAM 3
//AMRITA SINGH
//Roll no 24NA10014
#include<stdio.h>
#include<math.h>
int main()
{
	int x0,y0,a,t,theta;
	float u;
	
	printf("enter the values for x0 \n yo\n u\n a\n t \n theta\n");
	scanf("%d %d %f %d %d %d",&x0,&y0,&u,&a,&t,&theta);
	float thetaf,xt,yt,vx,vy,ax,ay;
	thetaf=((M_PI)/180)*theta;
	vx=u*cos(thetaf);
	ax=a*cos(thetaf);
	xt=(vx*t+(ax*t*t)/2) + x0;
	vy=u*sin(thetaf);
	ay=a*sin(thetaf);
	yt=(vy*t+(ay*t*t)/2) +y0;
	
//printing the value
	printf("the value of xt=%f and yt=%f",xt,yt);
	
	return 0;
	
}
	
	
