#include<stdio.h>
#include<math.h>
int main(){
  double X0, Y0, u,t, alpha,theta,Xt,Yt;
  printf(" enter the value of X0 = ");
  scanf("%lf", &X0);
  printf(" enter the value of Y0 = ");
  scanf("%lf", &Y0);
  printf(" enter the value of u = ");
  scanf("%lf",&u);
  printf(" enter the value of alpha = ");
  scanf("%lf",&alpha);
  printf(" enter the value of theta = ");
  scanf("%lf",&theta);
  printf(" enter the value of t= ");
  scanf("%lf",&t);
  Xt = X0 + cos(theta*M_PI/180.0)*(u*t+(0.5*alpha*t*t));
  Yt = Y0 + sin(theta*M_PI/180.0)*(u*t+(0.5*alpha*t*t));
  printf("Final position = Q(%lf,%lf)",Xt,Yt);
return 0;
}
