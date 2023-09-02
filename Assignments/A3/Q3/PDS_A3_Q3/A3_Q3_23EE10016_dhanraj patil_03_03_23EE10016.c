#include <stdio.h>

int main() {
  int x,y;
  printf("enter x and y coordinates\n");
  scanf("%d %d",&x,&y);
  if (x==0 && y==0) {
    printf ("lies on both x and y axis\n");
    return 0;
      }
  if (x==0) {
    printf ("lies on y axis\n");
    return 0;
      }
  if (y==0) {
    printf ("lies on x axis\n");
    return 0;
  }
  if (x>0 && y>0) {
    printf ("lies in 1st quadrant\n");
    return 0;
      }
  if (x>0 && y<0) {
    printf ("lies in 2nd quadrant\n");
    return 0;
  }
  if (x<0 && y<0) {
    printf ("lies in 3rd quadrant");
    return 0;
  }
  if (x<0 && y>0) {
    printf ("lies in 4th quadrant");
    return 0;
  }
}
