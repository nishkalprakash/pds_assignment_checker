//Roll No. 23EX10024
//Name Nishant Kumar
#include<stdio.h>
 int main()
{
  int x,y,a,b,c,d;
  printf("Enter the bottom left corner coordinates of the retangle\n");
  scanf("%d %d", &a,&b);
  printf("Enter the top right corner coordinates of the rectangle\n");
  scanf("%d %d", &c,&d);
  printf("Enter the coordinates of the general point\n");
  scanf("%d %d", &x,&y);
  if (x==a && y==b){
    printf("The point is the bottom left corner of the rectangle\n");
  }
  else if (x==a && y==d){
    printf("The point is the top left corner of the rectangle\n");
  }
  else if (x==c && y==b){
    printf("The point is the bottom right corner of the rectangle\n");
  }
  else if (x==c && y==d){
    printf("The point is the top right corner of the rectangle\n");
  }
  else if (x==a && y<d && y>b){
    printf("The point is on the left side of the rectangle\n");
  }
  else if (x==c && y<d && y>b){
    printf("The point is on the right side of the rectangle\n");
  }
  else if (y==b && x<c && x>a){
    printf("The point is on the bottom side of the rctangle\n");
  }
  else if (y==d && x<c && x>a){
    printf("The point is on the top side of the rectangle\n");
  }
  else if (x>a && x<c && y>b && y<d){
    printf("The point is inside the rectangle\n");
  }
  else if (x<a || x>c || y<b || y>d){
    printf("The point lies outside the rectangle\n");
  }
  else {
    printf("Wrong input of the coordinates of rectangle\n");
  }
  return 0;
}
