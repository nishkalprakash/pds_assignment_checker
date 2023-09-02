//Roll No:23EE30017
//Name:Ranga Kiranmai
#include <stdio.h>
int main()
{
  int x,y;
  printf("Give the coordinates for a point P\n");
  scanf("%d %d", &x, &y);
  if(x==0) printf("The point lies on x axis");
  if(y==0) printf("The point lies on y axis");
  if(x==0 && y==0) printf("The point lies on both x and y axes");
  if(x>0 && y>0) printf("The point lies in the 1st quadrant");
  if(x<0 && y>0) printf("The point lies in the 2nd quadrant");
  if(x<0 && y<0) printf("The point lies in the 3rd quadrant");
  if(x>0 && y<0) printf("The point lies in the 4th quadrant");
  return 0;
}
  
