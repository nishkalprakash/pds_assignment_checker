//name:Disha Mukherjee
//Roll no:23CH10026

#include <stdio.h>

int main()
{
  int x,y;
  printf("enter co-ordinates of point p\n");
  scanf("%d %d",&x,&y);
  if(x>0 && y>0)
    printf("\nPoint p lies in 1st quadrant");
  else if(x<0 && y>0)
    printf("\nPoint p lies in 2nd quadrant");
  else if(x<0 && y<0)
    printf("\nPoint p lies in 3rd quadrant");
  else if(x>0 && y<0)
    printf("\nPoint p lies in 4th quadrant");
  else if(x==0 && y!=0)
    printf("\nPoint p lies on Y axis");
  else if(y==0 && x!=0)
    printf("\nPoint p lies in X axis");
  else if(x==0 && y==0)
    printf("\nPoint p lies on both X and Y axis");
  return 0;
}
