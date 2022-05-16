/*
Name- Bharat Kabra
Roll: 21CH10015
Dept: Chemical
Package: Codeblocks
Assignment class: 1
*/
#include<stdio.h>
int main(){
float a, v, alpha, t, s,d;
printf("Enter the starting point on x axis:\n");
scanf("%f",&a);
printf("Enter the velocity of the particle:\n");
scanf("%f",&v);
printf("Enter the acceleration of the particle:\n");
scanf("%f",&alpha);
printf("Enter the value of time:\n");
scanf("%f",&t);
s=v+0.5*alpha*(t*t);
d = s+a ;
printf("Distance of the point from origin is %f",d);
return 0;
}

