#include <stdio.h>
#include <math.h>
int main(){
	double a=-7, b=7, c;
	int u, v, w, x;
	printf("Enter the coefficient of x^0");
	scanf("%d", &u);
	printf("Enter the coefficient of x^1");
	scanf("%d", &v);
	printf("Enter the coefficient of x^2");
	scanf("%d", &w);
	printf("Enter the coefficient of x^3");
	scanf("%d", &x);
	double pa, pb, pc, m;
	pa=((x*powf(a, 3))+(w*powf(a, 2))+(v*a)+u);
	pb=((x*powf(b, 3))+(w*powf(b, 2))+(v*b)+u);

	

	while((pc-0>0.001)||(0-pc>0.001)){
		m=((pb-pa)/(b-a));
		printf("%lf", m);
		c=(((-pa)/m)-a);
		pc=((x*powf(c, 3))+(w*powf(c, 2))+(v*c)+u);
		if (pc>0)
			b=c;
		if (pc<0)
			a=c;

	}

	printf("%lf", c);


	return 0;
	
}