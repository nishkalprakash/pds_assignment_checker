/*
Name:Biswaranjan Samal
Roll no: 21IM10011
Dept: Industrial and Systems Engineering
Package: Codeblocks
Assignment: 1a distance calculator
*/

#include<stdio.h>
#include<math.h>

int main(){
 double u,alpha,t,a,disp,d;

 printf("Enter the values of a(intial position), u(initial speed), alpha(acc) in order:\n");
 scanf("%lf%lf%lf",&a,&u,&alpha);
 printf("Enter the time:\n");
 scanf("%lf",&t);

 disp = a + u*t + (0.5*alpha*t*t);
 d = abs(disp);

 printf("The distance from origin is %lf",d);




return 0 ;}



