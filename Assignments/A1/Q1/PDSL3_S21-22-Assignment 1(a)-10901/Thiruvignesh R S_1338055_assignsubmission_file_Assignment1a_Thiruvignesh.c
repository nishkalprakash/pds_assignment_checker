/*
Name: R S Thiruvignesh
Roll no.:21BT10022
Department: Biotechnology 4yr
Package: Code blocks
Operating system: Windows 10 */


#include <stdio.h>

void main(){

    float a,u,alpha,t;
    float d;

    printf("enter the values for a,u and alpha:");
    scanf("%f %f %f",&a,&u,&alpha);
    printf("enter the time(in s):");
    scanf("%f",&t);

    if(a>=0){
        d=(u*t+0.5*alpha*t*t)+a;
        printf("distance from (0,0) after %fs is %f",t,d);
    }
    else{
        d=(u*t+0.5*alpha*t*t)+a;
        printf("distance from (0,0) after %fs is %f",t,d);
    }




}
