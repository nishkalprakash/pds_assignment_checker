/*
Section 14
Roll No : 22MI10032
Name : HEET PATEL
Assignment No : 9
Description :  to determine the area of rectangle
*/
#include<stdio.h>
struct rect{//structure
int lx;
int ly;
int rx;
int ry;

};
int main(){
struct rect a;
printf("Enter coordinates of top left corner of rectangle:");
scanf("%d%d",&a.lx,&a.ly);
printf("Enter coordinates of bottom right corner of rectangle:");
scanf("%d%d",&a.rx,&a.ry);
int a1 = a.lx-a.rx;//length
int b = a.ly-a.ry;//breadth
int c = a1*b;
//if(a.rx>a.lx||a.ry>a.ly){
//printf("No such rectangle exists\n");
//}
printf("Area:%d\n",c);//area
}
