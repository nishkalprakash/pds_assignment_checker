/*
name:SENJUTI GHOSH
ROLL:21CY10036
DEPT:Chemistry
Package:CODEBLOCKS
*/
#include<stdio.h>
#include<math.h>
int main(){
float a,u,alpha,t,d;
printf("Enter the values of a,u,alpha,t respectively");
scanf("%f%f%f%f",&a,&u,&alpha,&t);
d=a+(u*t)+(0.5*alpha*t*t);
printf("The distance of the particle from the point (0,0) is %f",fabs(d));
return 0;
}
