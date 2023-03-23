#include<stdio.h>
#include<math.h>
int main(){
double x0; double y0; double u;
double theta;
double a;
double t;
double xt;
double yt;
printf ("Enter the value of x0:");//taking the value of x0
scanf ("%lf", &x0);//Inserting the value of x0 in the variable
printf ("Enter the value of y0:");//taking the value of y0
scanf ("%lf", &y0);//Inserting the value of y0 in the variable
printf ("Enter the value of u:");//taking the value of u
scanf ("%lf", &u);//Inserting the value of u in the variable
printf ("Enter the value of theta:");//taking the value of theta
scanf ("%lf", &theta);//Inserting the value of theta in the variable
printf ("Enter the value of a:");//taking the value of a
scanf ("%lf", &a);//Inserting the value of a in the variable
printf ("Enter the value of t:");//taking the value of t
scanf ("%lf", &t);//Inserting the value of t in the variable

xt=(x0+(u*t+0.5*a*t*t)*cos((M_PI)*(theta)/180));//calculating the value of xt
yt=(y0+(u*t+0.5*a*t*t)*sin((M_PI)*(theta)/180));//calculating the value of yt
printf ("The value of xt:%lf", xt);
printf ("The value of yt:%lf", yt);
return 0;













}
