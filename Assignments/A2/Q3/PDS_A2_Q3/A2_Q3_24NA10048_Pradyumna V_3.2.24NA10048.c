#include <stdio.h>
#include <math.h>
int main()
{
	double xi,yi,u,teta,alp,t,xf,yf,tet;
	scanf("%le",&xi);
	scanf("%le",&yi);
	scanf("%le",&u);
	scanf("%le",&teta);
	scanf("%le",&alp);
	scanf("%le",&t);
	tet = teta*(M_PI / 180);
	
	xf= xi + (u*cos(tet)*t + 0.5*alp*cos(tet)*t*t);
	yf= yi + (u*sin(tet)*t + 0.5*alp*sin(tet)*t*t);
	printf("the final coordinates are=(%f,%f)",xf,yf);
	return 0;
}
