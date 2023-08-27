//Roll No.: 23CS30029
//Name: Kshetrimayum Abo

#include<stdio.h>
int main()
{
  int a,b,c,d,area,perim; //Declaring the required variables
  float p,q;
  printf("Enter the coordinates(integer) of the bottom left corner of the rectangle : "); //Taking in the coordinates of the rectangle
  scanf("%d%d",&a,&b);
  printf("Enter the coordinates(integer) of the top right corner of the rectangle : ");
  scanf("%d%d",&c,&d);
  area = (d-b)*(c-a); //Calculating the area of the rectangle and storing it in the variable "area"
  perim = (d-b)*2+(c-a)*2; //Calculating the perimeter of the rectangle and storing it in the variable "perim"
  printf("The area of the rectangle is %d and the perimeter of the rectangle is %d\n",area,perim);
  p = (a+c)/2.0; //Calculating the x coordinate of the intersection of the diagonal of the rectangle and storing it in the variable "p"
  q = (b+d)/2.0; //Calculating the y coordinate of the intersection of the diagonal of the rectangle and storing it in the variable "q"
  printf("The point of intersection of the two diagonals of the rectangle is (%f,%f)\n",p,q);
  return 0;
}
