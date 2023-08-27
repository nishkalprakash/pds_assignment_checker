//name tanishq sura
//roll no 23CS10071

#include<stdio.h>

int main(){
  int a,b,c,d;
  printf("give the coordinates of bottom left corner\n"); 
  scanf("%d %d", &a,&b); //took int inputs for coordinates
  printf("give the coordinates of top right corner\n");
  scanf("%d %d", &c,&d);
  int area,perim;
  area=(d-b)*(c-a); //area= side1*side2
  perim=2*(d-b+c-a);//perimeter = 2*(side1+side2)
  printf("the area=%d\nthe perimeter=%d\n", area,perim);
  float p,q;
  p=(a+c)/2.0; // took 2.0 so that mix arithematic takes place and gives correct float
  q=(b+d)/2.0; // same as above
  printf("the coordinates of point of intersection of diagonals is (%.1f,%.1f)",p,q); // we only require 1 digit after decimal to represent all possible int of diagonal pts so took only 1 digit after decimal 
  return 0;
}
  
  
