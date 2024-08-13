// Program to find final coordinates of a point based on the given parameters
// Creator: Prateek Kesavarapu
// Roll No: 24NA10049

#include <stdio.h>
#include <math.h>

int main(){
	double x0, y0, u, theta, a, t; // assigning values
	printf("x0: ");
	scanf("%lf", &x0);
	printf("y0: ");
	scanf("%lf", &y0);
	printf("theta: ");
	scanf("%lf", &theta);
	printf("u: ");
	scanf("%lf", &u);
	printf("a: ");
	scanf("%lf", &a);
	printf("t: ");
	scanf("%lf", &t);
	double Xt = x0 + cos(theta * M_PI/180) * u * t + cos(theta * M_PI/180) * a * t * t / 2; // calculation for distance covered along x-axis
	double Yt = y0 + sin(theta * M_PI/180) * u * t + sin(theta * M_PI/180) * a * t * t / 2; // calculation for distance covered along y-axis
	printf("Q(Xt, Yt) = Q(%1.2lf, %1.2lf)\n", Xt, Yt); // printing out answers
	return 0;
}
