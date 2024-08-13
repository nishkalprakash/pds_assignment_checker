#include <stdio.h>

#include <math.h>

int main(){

double x0;
double y0;
double u;
double theta;
double alpha;
double xt;
double yt;
double t;



printf("input the value of x0");
scanf("\n%le",&x0);


printf("input the value of y0");
scanf("\n%le",&y0);


printf("input the value of u");
scanf("\n%le",&u);


printf("input the value of theta(in radians)");
scanf("\n%le",&theta);


printf("input the value of alpha");
scanf("\n%le",&alpha);


printf("input the value of t");
scanf("\n%le",&t);


xt= x0+u*cos(theta)*t + (alpha*cos(theta)*t*t)/2;


yt=y0+u*sin(theta)*t + (alpha*sin(theta)*t*t)/2;


printf("xt=%le",xt);
printf("\nyt=%le",yt);

return 0;
}


//comment: there is only one problem I found with this code that is the precision is too high.Everything else is fine...//
