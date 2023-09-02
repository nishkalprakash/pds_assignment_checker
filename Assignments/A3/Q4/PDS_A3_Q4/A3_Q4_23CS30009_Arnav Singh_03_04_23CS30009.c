//Roll No.: 23CS30009
//Name: Arnav Singh

#include <stdio.h>

int main(){
  int a,b,c,d;
  printf("Enter space separated coordinates of bottom left corner of the rectangle: ");
  scanf("%d%d", &a, &b);
  printf("Enter space separated coordinates of top right corner of the rectangle: ");
  scanf("%d%d", &c, &d);
  if (c<=a || d<=b){
    printf("Ill formed rectangle\n");
    return 0;   //To exit the program
  }
  int x,y;
  printf("Enter space separated coordinates of point P: ");
  scanf("%d%d", &x, &y);
  if (x==a && y==b) printf("(%d,%d) lies on the bottom left corner of the rectangle.\n", x, y);
  else if (x==a && y==d) printf("(%d,%d) lies on the top left corner of the rectangle.\n", x, y);
  else if (x==c && y==b) printf("(%d,%d) lies on the bottom right corner of the rectangle.\n", x, y);
  else if (x==c && y==d) printf("(%d,%d) lies on the top right corner of the rectangle.\n", x, y);
  else if (x==a && y<d && y>b) printf("(%d,%d) lies on the left side of the rectangle.\n", x, y);
  else if (x==c && y<d && y>b) printf("(%d,%d) lies on the right side of the rectangle.\n", x, y);
  else if (x<c && x<a && y==b) printf("(%d,%d) lies on the bottom side of the rectangle.\n", x, y);
  else if (x<c && x<a && y==d) printf("(%d,%d) lies on the top side of the rectangle.\n", x, y);
  else if (x<c && x<a && y<d && y>b) printf("(%d,%d) lies inside the rectangle.\n", x, y);
  else printf("(%d,%d) lies outside the rectangle", x, y);
  return 0;
}
