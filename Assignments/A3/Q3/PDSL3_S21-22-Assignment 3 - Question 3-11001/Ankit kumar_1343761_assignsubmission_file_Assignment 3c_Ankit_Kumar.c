/*Ankit Kumar
Roll no.21MI10010*/

#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<math.h>
void intersectionpoint(int a1,int b1,int c1,int a2,int b2,int c2){
float x=(b1*c2-b2*c1)/(a1*b2-a2*b1);
float y=(a2*c1-a1*c2)/(a1*b2-a2*b1);
printf("%f, %f \n",x,y);
}
int main() {
int a1,b1,c1,a2,b2,c2,a3,b3,c3;
scanf("%d %d %d",&a1,&b1,&c1);
scanf("%d %d %d",&a2,&b2,&c2);
scanf("%d %d %d",&a3,&b3,&c3);
intersectionpoint(a1,b1,c1,a2,b2,c2);
intersectionpoint(a1,b1,c1,a3,b3,c3);
intersectionpoint(a3,b3,c3,a2,b2,c2);
  return 0;
}