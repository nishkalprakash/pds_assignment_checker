#include<stdio.h>
#include<math.h>
int main(){
double x0, y0,u,angle,a,xt,yt,t ,an;// defining variable
double pie=3.14; // defining the value of pie for bringing the value of theta in radian

printf("position of particle at initial p(x0,y0)\n ");
scanf("%lf, %lf",&x0,&y0);

printf("initial velocity");
scanf("%lf",&u);

printf("initial angle");
scanf("%lf",&angle);

printf("acceleration");
scanf("%lf",&a);

printf("time");
scanf("%lf",&t);
an=(angle*pie)/180; // converting the value of theta in radian . an is angle in radian


xt=u*cos(an)*t+.5*a*cos(an)*t+x0;  // final x cordinate of the particle
yt=u*sin(an)*t+.5*a*sin(an)*t+y0;  //final y cordinate of the particle

printf(" the final x-coordinate of the particle is %lf",xt);
printf(" the final y-coordinate of the particle is %lf",yt);

return 0;
}

