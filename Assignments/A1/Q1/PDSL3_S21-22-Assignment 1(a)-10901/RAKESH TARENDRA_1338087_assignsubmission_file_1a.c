/*
rakesh tarendra
21MT30031
ASSIGNMENT5
*/
#include <stdio.h>
int main()
{
  float a,u,alpha,t,d;
  printf("Ente the value of a,u,alpha and t in order:\n");
  scanf("%f%f%f%f",&a,&u,&alpha,&t);

 d=a+u*t+(alpha*t*t)/2;

 printf("Distance:%f",d);
 return 0;
  }
