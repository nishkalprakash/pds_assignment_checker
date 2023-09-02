#include <stdio.h>
int main()
{
  int x,y;
  printf("enter the x coordinate of point p");
  scanf("%d", &x);
  printf("enter the y coordinate of point p");
  scanf("%d", &y);
  if (x==0)
    {
      printf("point p lies on y axis");
    }
  else if (y==0)
    {
      printf("point p lies on x axis");
    }
  else if (x>0 && y>0)
    {
      printf("point p lies in 1st quadrant");
    }
  else if (x<0 && y>0)
    {
      printf("point p lies in 2nd quadrant");
    }
  else if (x<0 && y<0)
    {
      printf("point p lies in 3rd quadrant");
    }
  else if (x>0 && y<0)
    {
      printf("point p lies in 4th quadrant");
    }
  return 0;
}
