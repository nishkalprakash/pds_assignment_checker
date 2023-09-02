//Roll no.:23IE10011
//Name: Avik Ghosh
#include <stdio.h>

int main( ) {
  int x,y;
  //taking coordinates of x and y of point P
  printf("Enter the x and y coordinates of point P\n");
  scanf("%d%d", &x,&y);
  if(x == 0)
    printf("Point P lies on x-axis");
  else if(y == 0)
    printf("Point P lies on y-axis");
  else if(x == 0 && y == 0)
    printf("Point P lies on both x-axis and y-axis that is at origin ");
  else
    {//As P does not lie on any axes so finding the quadrant in which P lies
      if( x > 0 && y > 0)
	printf("P lies in 1st Quadrant");
      else if(x < 0 && y > 0)
	printf("P lies in 2nd Quadrant");
      else if(x < 0 && y < 0)
	printf("P lies in 3rd Quadrant");
      else
	printf("P lies in 4th Quadrant");
    }
  printf("\n");
  return 0;
}
