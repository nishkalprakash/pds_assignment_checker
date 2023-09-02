#include <stdio.h>
#include <math.h>

int main()
{
  int x,y;
  printf("Enter the x and y coordinates of the point p \n");
  scanf("%d%d", &x,&y);

  if ((x==0) &&(y==0))
	     printf("Point lies on both X and Y axis \n");
  else if (x==0)
    printf("Point lies on the x axis \n");
  else if ((x>0) && (y>0))
		  printf("Point lies on the 1st quadrant \n");
  else if ((x<0) && (y>0))
		  printf("Point lies on the 2nd quadrant \n");
  else if ((x<0) && (y<0))
		  printf("Point lies on the 3rd quadrant \n");
  else if ((x>0) && (y<0))
		  printf("Point lies on the 4th quadrant \n");
}
  
  
		  
