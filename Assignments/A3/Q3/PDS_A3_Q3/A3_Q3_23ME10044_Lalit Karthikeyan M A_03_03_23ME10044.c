//Roll Number: 23ME10044
//Name: Lalit Karthikeyan M A

#include<stdio.h>

int main(){

  int x,y;

  printf("Enter the X Coordinate of point p: ");
  scanf("%d", &x);

  printf("Enter the Y Coordinate of point p: ");
  scanf("%d", &y);

  if(x==0 && y!=0) printf("The point p lies in y axis.\n");

  if(y==0 && x!=0) printf("The point p lies in x axis.\n");

  if(x==0 && y==0) printf("The point p lies in origin.\n");

  if(x>0 && y>0) printf("The point p lies in 1st Quadrant.\n");

  if(x>0 && y<0) printf("The point p lies in 2nd Quadrant.\n");

  if(x<0 && y<0) printf("The point p lies in 3rd Quadrant.\n");
  
  if(x<0 && y>0) printf("The point p lies in 4th Quadrant.\n");

  return 0;

}
