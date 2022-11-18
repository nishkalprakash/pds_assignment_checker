/*
Name: Adipta Halder
Roll Number: 21EC30003
Department: EC
Os: Windows 10
Package: CODEBLOCKS
Assignment Class: 3
Assignment: 1a
*/
#include<stdio.h>

int main(){
    float u,t,alpha,a,d;
    printf("Enter the values of a, u, alpha in order: ");
    scanf("%f%f%f",&a, &u, &alpha);
    printf("\nEnter the time: ");
    scanf("%f",&t);
    d=a+(u*t)+(0.5*alpha*t*t);
    if(d>=0){
        printf("\nDistance= %f", d);}
    else if(d<0){
        printf("\nDistance= %f", (-d));}

 return 0;
}

