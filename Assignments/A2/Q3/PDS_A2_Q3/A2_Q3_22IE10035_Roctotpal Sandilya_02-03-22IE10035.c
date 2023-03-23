#include<stdio.h>
#include<math.h>

int main(){
double x0; double y0 ;double u; double theta; double alpha; double t;

printf("Enter value of x0:");
scanf("%lf", &x0);// taking x0
printf("Enter value of y0:");
scanf("%lf", &y0);// taking y0
printf("Enter value of theta:");
scanf("%lf", &theta);// taking theta
printf("Enter value of u:");
scanf("%lf", &u);// taking u
printf("Enter value of alpha:");
scanf("%lf", &alpha);// taking alpha
printf("Enter value of t:");
scanf("%lf", &t);//taking t

double yt = y0 + u*sin(theta*M_PI/180)*t + 0.5*alpha*sin(theta*M_PI/180)*pow(t,2); // computing yt
double xt = x0 + u*cos(theta*M_PI/180)*t + 0.5*alpha*cos(theta*M_PI/180)*pow(t,2);// computing yt

printf("Value of xt: %lf", xt);
printf("Value of yt: %lf", yt);


return 0;
}
