/*
Name : Ankit Yadav
Roll No : 21EE30005
Department : Electrical Engineering
Package : codeblocks
Assignment class : 1
*/


#include<stdio.h>

int main(){

float a,u,alpha,t,s,d;

printf("Enter the value of a,u and alpha\n");
scanf("%f %f %f",&a,&u,&alpha);
printf("Enter the Value of time\n");
scanf("%f",&t);

s=((u*t)+(0.5*alpha*t*t));
d=a+s;

printf("Distance= %f\n",d);

return 0;
}
