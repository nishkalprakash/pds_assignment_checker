//Program to calculate position of particle in 2D plane
//Name: Rushil Sinha
//Roll no. : 24NA10061

#include <stdio.h>
#include <math.h>

int main(){
	int x0, y0, u, theta, a, t;
	float Ux, Uy, thetaR,distance,Sx, Sy;
	printf("Enter initial coordinates, initial speed, acceleration, time:");
	scanf("%d %d %d %d %d %d", &x0, &y0, &u, &theta, &a, &t);
	thetaR = (M_PI)/180 * theta;
	distance = u*t + 0.5 * a*t*t
	Sx = distance * cos(thetaR);
	Sy = distance * sin(thetaR);
	xt = x0 + Sx;
	yt = y0 + Sy;
	print("Q(Xt,Yt) = Q(%d %d)", xt, yt)
		
	return 0;
	
	
}
