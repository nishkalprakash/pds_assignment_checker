/*
Name- Harshit Raj
Dept- Chemical
Roll- 21CH30015
Package- Codeblocks
OS- Win 10
*/

#include <stdio.h>
int main() {

float a,u,alpha,t;

printf("enter starting point a= ");
scanf("%f", &a);

printf("enter initial speed u= ");
scanf("%f", &u);

printf("enter acceleration alpha = ");
scanf("%f", &alpha);

printf("enter time of motion t= ");
scanf("%f", &t);

printf("distance from origin after time t= %f", a+(u*t)+(alpha*t*t/2));





return 0;
}





