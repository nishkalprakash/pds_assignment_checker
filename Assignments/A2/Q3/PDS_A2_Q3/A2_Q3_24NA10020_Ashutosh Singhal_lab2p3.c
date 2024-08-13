#include<stdio.h>
#include <math.h>
int main(){
double x,y,u,th,a,t ;
float f1,f2;

printf("enter the values");
scanf("%lf%lf%lf%lf%lf%lf",&x,&y,&u,&th,&a,&t);
f1= u*cos(M_PI*th)*t + 0.5*a*cos(M_PI*th/180)*t*t;
f2= u*sin(M_PI *th)*t + 0.5*a*sin(th* M_PI /180)*t*t;
printf("final x is %f",f1);
printf("final x is %f",f2);
return 0;
}

