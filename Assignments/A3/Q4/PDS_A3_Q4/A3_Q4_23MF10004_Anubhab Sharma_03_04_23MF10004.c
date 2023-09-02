#include <stdio.h>
int main()
{
  int a,b,c,d,x,y;
  printf("enter the x,y coordinates of bottom left corner of the rectangle \n");
  scanf("%d%d", &a,&b);
  printf("Enter the x,y coordinates of the top right corner of the rectangle \n");
  scanf("%d%d", &c,&d);

  if ((c-a<=0) || (d-b<=0)){
    printf("Ill triangle formed \n");
      return 0;}

  printf("Enter the x,y coordinates of point p \n");
  scanf("%d%d", &x,&y);

  if ((x==a) && (y==b))
    printf("Point lies on the bottom left corner of rectangle \n");
  else if ((x==c) && (y==b))
    printf("Point lies on the bottom right corner of rectangle \n");
  else if ((x==c) && (y==d))
    printf("Point lies on the top right corner of rectangle \n");
  else if ((x==a) && (y==d))
    printf("Point lies on the top left corner of rectangle \n");
  else if ((y==b) && (a<x) && (x<c))
    printf("Point lies on the bottom side of rectangle \n");
  else if ((y==d) && (a<x) && (x<c))
    printf("Point lies on the top side of rectangle \n");
  else if ((x==a) && (b<y) && (y<d))
    printf("Point lies on the left side of rectangle \n");
  else if ((x==c) && (b<y) && (y<d))
    printf("Point lies on the right side of rectangle \n");
  else if ((a<x) && (x<c) && (b<y) && (y<d))
    printf("Point lies inside the rectangle \n");
  else
    printf("Point lies outside the rectangle \n");
}
