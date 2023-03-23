#include<stdio.h>
#include<math.h>
int main(){
    float xo,yo,u,theta,alpha,t;  //theta is in degrees
    printf("enter value of xo \n");
    scanf("%f",&xo);
    printf("enter value of yo \n");
    scanf("%f",&yo);
    printf("enter value of u \n");
    scanf("%f",&u);
    printf("enter value of theta \n");
    scanf("%f",&theta);
    printf("enter value of alpha \n");
    scanf("%f",&alpha);
    printf("enter value of t \n");
    scanf("%f",&t);

    float pi=3.14;

    float uxo=u*cos(pi*theta/180); //component of u in x direction
    float uyo=u*sin(pi*theta/180); //component of u in y direction

    float ax=alpha*cos(pi*theta/180); //component of alpha in x direction
    float ay=alpha*sin(pi*theta/180); //component of alpha in y direction

    float xt=xo+(uxo*t+(ax*t*t)/2);
    printf("xt = %f \n",xt);

    float yt=yo+(uyo*t+(ay*t*t)/2);
    printf("yt = %f \n",yt);

return 0;
}
