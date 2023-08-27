//Roll no.: 23IM30025
//NAME : Shreyash Girdhari Dhakate
#include<stdio.h>
int main(){
  int a,b,c,d;//defining a ,b,c,d as integers
  //taking inputs
  printf("Enter Coordinates of bottem left corner  the rectangle:");
  scanf("%d %d",&a,&b);
  printf("Enter Coordinates of the top right corner of the rectangle:");
  scanf("%d %d",&c,&d);
  //calculation part of area and perimeter
  int area,perim;
  area=(c-a)*(d-b);
  perim=((c-a)+(d-b))*2;
  printf("Area of the rectangle is:%d\n",area);
  printf("Perimeter of the rectangle is:%d\n",perim);
  // calculation for coordinates of intersection of diagonals
  float p,q;
  p=(a+c)/2.0;
  q=(b+d)/2.0;
  printf("The Coordinates of point of intersection of diagonals of rectangle is:(%f,%f)\n",p,q);
  return 0;
}
