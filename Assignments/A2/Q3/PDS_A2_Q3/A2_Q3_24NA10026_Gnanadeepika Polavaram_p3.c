#include<stdio.h>
#include<math.h>

int main(){

double x0,y0,u,a,t,xt,yt,tetha1,tetha2,d;

printf("x0 = \n");
printf("y0 = \n");
printf("u = \n");
printf("a = \n");
printf("t = \n");
printf("tetha = \n");


scanf("%le%le%le%le%le%le",&x0,&y0,&u,&a,&t,&tetha1);

tetha2 = 3.14*tetha1/180;

d = u+0.5*a*pow(t,2);
xt = d*cos(tetha2);
yt = d*sin(tetha2);

printf("xt = %le ,yt = %le",xt,yt);





getchar();
return 0;





}
