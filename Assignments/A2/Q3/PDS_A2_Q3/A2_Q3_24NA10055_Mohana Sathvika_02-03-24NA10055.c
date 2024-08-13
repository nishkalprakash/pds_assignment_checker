#include<stdio.h>
#include<math.h>
int main(){

	printf("input the position of particle:");
	double x0;
	double y0;
	double t;
	scanf(%lf%lf%lf,&x0,y0,t);
	double theta;
	double u;
	double alpha;
	scanf(%lf%lf%lf, &theta,&u,&alpha);
	double r1;
	r1=x0+0.5*alpha*t*t;
	double r2;
	r2=y0+0.5*alpha*t*t;
	double xt;
	xt=x0+(r1*cos(theta));
	yt=yo+(r2*sin(theta));
	return 0;
}



