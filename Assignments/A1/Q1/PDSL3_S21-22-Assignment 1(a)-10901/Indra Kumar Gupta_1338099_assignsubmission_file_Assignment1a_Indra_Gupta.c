/*
Name: Indra Kumar Gupta
Roll: 21AE10043
Department: Aerospace Engineering
Package: CodeBlocks
Operating system: Windows
*/

//Assignment 1(a)

#include<stdio.h>
int main(){

int a,u,alpha;
float t,d;
printf("Enter the values of a, u, alpha in order: ");
scanf("%d%d%d",&a ,&u ,&alpha);
printf("Enter the time: ");
scanf("%f",&t);
d = fabs(a+(u*t)+(0.5*alpha*t*t));
printf("Distance = %f",d);


return 0;
}
