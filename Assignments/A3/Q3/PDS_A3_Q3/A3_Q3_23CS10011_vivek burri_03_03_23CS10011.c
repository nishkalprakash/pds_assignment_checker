// roll no 23CS10011
// name  vivek
#include<stdio.h>
int main(){
  int x,y;
  printf("enter cordinates of point p");
  scanf("%d%d",&x,&y);
  if (x==0&y!=0)
    printf("point lies on x axis");
  else if (x!=0&y==0)
    printf("point lies on y axis");
  else if (x==0&y==0)
    printf("point lies on both x and y axis");
  else if (x>0&y>0)
    printf(" point lies on 1st quadrant");
  else if (x<0&y>0)
    printf(" point lies on 2nd quadrant");
  else if (x<0&y<0)
    printf(" point lies on 3rd quadrant");
  else if (x>0&y<0)
    printf(" point lies on 4th quadrant");
  return 0;}
