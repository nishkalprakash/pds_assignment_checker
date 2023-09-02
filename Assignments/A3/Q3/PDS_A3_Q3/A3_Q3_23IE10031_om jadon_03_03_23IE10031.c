// Roll no. - 23IE10031
// Name - Om singh Jadon

#include <stdio.h>

int main()
{
  int x, y;
  printf("x and y coordinates of point p: ");
  scanf("%d %d", &x, &y);

  if(x==0 && y==0) printf("Point p lies on Origin.");
  else if (x==0 && y!=0) printf("Point p lies on Y axis.");
  else if (x!=0 && y==0) printf("Point p lies on X axis.");
  else if (x>0 && y>0) printf("Point p lies in 1st Quadrant.");
  else if (x<0 && y>0) printf("Point p lies in 2nd Quadrant.");
  else if (x<0 && y<0) printf("Point p lies in 3rd Quadrant.");
  else if (x>0 && y<0) printf("Point p lies in 4th Quadrant.");
  printf("\n");

  return 0;
		     
}
