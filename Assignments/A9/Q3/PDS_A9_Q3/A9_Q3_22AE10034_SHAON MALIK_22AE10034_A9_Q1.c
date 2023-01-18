
/*
 Section 14
 Roll No: 22AE10034
 Name: Shaon Malik
 Assignment No :9
 Question No :1
 Description: to find area of rectangle 
*/
#include <stdio.h>

typedef struct {
	int x1;
	int y1;
	int x2;
	int y2;

 } rectangle;//structure to define a parallel axis rectangle

int area (rectangle a)
 {
  int l=a.x2-a.x1;//length
  int b=a.y2-a.y1;//breadth
  int ar=l*b;//area of the rectangle
  if(ar<0)
  	ar*=-1;
  return ar;
  }

int main(){
    rectangle R1;
    printf("enter the coordinates of bottom left corner : ");
    scanf("%d %d", &R1.x1, &R1.y1);//coordinates of top-left corner
     printf("enter the coordinates of top right corner :");
    scanf("%d %d", &R1.x2, &R1.y2);//coordinates of bottom-right corner
    int ar1=area(R1);
    printf("Area: %d \n",ar1);
    
  }

