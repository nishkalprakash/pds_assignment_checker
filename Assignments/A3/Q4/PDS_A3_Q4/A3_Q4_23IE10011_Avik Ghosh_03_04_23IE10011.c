//Roll no.:23IE10011
//Name: Avik Ghosh
#include <stdio.h>

int main( ) {
  int a,b,c,d,x,y;
    printf("Enter the coordinates of the bottom-left corner (a,b) and the top-right corner of a rectangle (c,d)\n");
  scanf("%d%d%d%d",&a,&b,&c,&d);
  if(c > a && d > b) {
    printf("Enter the coordinates of point p\n");
    scanf("%d%d",&x,&y);
    if((a < x && c > x) && (b < y  &&  d > y))
      printf("Point p lies inside the rectangle");
    //Checking p lies on any side of rectangle
    else if((x == a) && (b < y  &&  d > y))
      printf("Point p lies on the left side of rectangle");
    else if((x == c) && (b < y  &&  d > y))
      printf("Point p lies on the right side of rectangle");
    else if((y == b) && (a < x  && c > x))
      printf("Point p lies on the bottom side of rectangle");
    else if((y == d) && (a < x && c > x))
      printf("Point p lies on the top side of rectangle");
    //Checking if p lies any vertices of rectangle
    else if((x == a) && (y == b))
      printf("Point p is on the bottom left corner");
    else if((x == c) && (y == b))
       printf("Point p is on the bottom right corner");
     else if((x == a) && (y == d))
        printf("Point p is on the top left corner");
    else if((x == c) && (y == d))
      printf("Point p is on the top right corner");
    else
      printf("Point p lies outside the rectangle");
  }
  else
    printf("Ill formed rectangle");
  printf("\n");
  return 0;
}
      
    
      
    
    
