/*
Name: Shashwata Roy
Roll: 21MA10055
Dept: Maths and Computing
Package: Codeblocks
Assignment class: 4
*/
#include<stdio.h>

int main(){
    double a,u,alpha,t,d;
    printf("Enter the values of a, u, alpha in order: ");
    scanf("%lf%lf%lf",&a,&u,&alpha);
    printf("Enter the time: ");
    scanf("%lf",&t);
    d = a+u*t+0.5*alpha*t*t;
    printf("Distance = %lf",d);
return 0;
}
