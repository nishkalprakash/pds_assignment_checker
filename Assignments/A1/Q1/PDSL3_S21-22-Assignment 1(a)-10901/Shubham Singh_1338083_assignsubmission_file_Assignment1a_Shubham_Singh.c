/*
Name: Shubham Singh
Roll No: 21EX10032
Department: Geology and Geophysics
Package: Codeblocks
Assignment Class: 1
*/

#include<stdio.h>
#include<math.h>
int main() {

    float a, u, t, alpha, d;

    printf ("Enter the value of a,u,alpha :\n");     //here a comes from cordinate given in question as A(a,0)
    scanf ("%f%f%f", &a,&u,&alpha);

    printf ("Enter the time :\n");
    scanf ("%f", &t);

    d = u*t+a+0.5*alpha*t*t;

    printf ("Distance = %f",fabs(d));    //since distance can not be negative

    return 0;
}
