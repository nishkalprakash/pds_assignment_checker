//Roll No.: 23CS30009
//Name: Arnav Singh

#include <stdio.h>

int main(){
  int x,y;
  printf("Enter space separated coordinates of point p: ");
  scanf("%d%d", &x, &y);
  if (x==0 && y==0) printf("P lies on both, x axis & y axis, i.e., on origin.\n");
  else if (x==0 && y!=0) printf("P lies on y axis.\n");
  else if (x!=0 && y==0) printf("P lies on x axis.\n");
  else if (x>0 && y>0) printf("P lies in quadrant 1.\n");
  else if (x>0 && y<0) printf("P lies in quadrant 2.\n");
  else if (x<0 && y<0) printf("P lies in quadrant 3.\n");
  else if (x<0 && y>0) printf("P lies in quadrant 4.\n");
  return 0;
}
