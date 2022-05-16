/*Ankit kumar
Roll no.21MI10010*/

#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<math.h>
int main() {
int x[10];
int y[10];
for(int i=0;i<10;i++){
    scanf("%d",&x[i]);
}
for(int i=0;i<10;i++){
    scanf("%d",&y[i]);
}
float x1=0;
float y1=0;
float x1n=0;float y1n=0;float x1d=0;
for(int i=0;i<10;i++){
    x1+=x[i];
    y1+=y[i];

}
x1/=10;
y1/=10;
for(int i=0;i<10;i++){
   float px=(x[i]-x1)*(y[i]-y1);
   x1n+=px;
    float py=(x[i]-x1)*(x[i]-x1);
    x1d+=py;
}
float m=x1n/x1d;
float b=y1-m*x1;
printf("m= %f,b= %f, line equation y=%f x + %f",m,b,m,b);
  return 0;
}