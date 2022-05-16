#include<stdio.h>

int main()

{
float s,d,t;
int u,alpha,a;
printf("enter the value of u,a,alpha\n");



scanf("%d%d%d",&u,&a,&alpha);
printf("enter the value of time\n");
scanf("%f",&t);
s=u*t+0.5*alpha*t*t;
d=s+a;

printf("distance=%f",d);
return(0);

}
