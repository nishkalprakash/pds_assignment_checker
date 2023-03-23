#include<stdio.h>
#include<math.h>
int main(){
 double X0,Y0,U,thita,alpha,a, t,s,xt,yt;
 printf("enter the value of X0:\n");
  scanf("%lf",&X0);
 printf("enter the value of Y0:\n");
  scanf("%lf",&Y0);
 printf("enter the value of U:\n");
  scanf("%lf",&U);
 printf("enter the value of thita:\n");
  scanf("%lf",&thita);
 printf("enter the value of alpha:\n");
  scanf("%lf",&alpha);
 printf("enter the value of t:\n");
 scanf("%lf",&t);
 thita=(thita*M_PI)/180;
 s=(U*t)+((1/2)*a*t*t);
 xt=X0+s*cos(thita);
 yt=Y0+s*sin(thita);
 printf("Q(xt,yt)=Q(%lf,%lf)",xt,yt);
 return 0;
}



