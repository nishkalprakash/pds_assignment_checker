/* Shaikh Muhib Ali(21EE10064), Electrical department, platform used:Code blocks*/
#include<stdio.h>
int main(){

        float u,alpha,t,a;
        scanf("%f%f%f%f,&u&alpha&t&a");

        float d,s;
        s=u*t + 0.5*alpha*t*t;
        d=s+a;

        printf("distance from origin=%f\n",d);

        return 0;

 }
