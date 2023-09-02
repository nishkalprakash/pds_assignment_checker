//Name: Sourendra Nandi
//Roll No. : 23CH10066
#include <stdio.h>
int main()
{
  int x,y;
  printf("Enter the x and y coordinates of point P\n");
  scanf("%d%d",&x,&y);
  printf("Point p : (%d,%d)\n",x,y);
  if (x==0 && y!=0)
    {
      printf("Point P lies on Y axis\n");
    }
  else if (x!=0 && y==0)
    {
      printf("Point P lies on X axis\n");
    }
  else if (x==0 && y==0)
    {
      printf("Point P lies on both X and Y axis as P is the origin\n");
    }
  else
    {
      if (x>0 && y>0)
	{
	  printf("Point P lies in the Quadrant 1 \n");
	}
      else if (x<0 && y>0)
	{
	  printf("Point P lies in the Quadrant 4\n");
	}
      else if (x>0 && y<0)
	{
	  printf("Point P lies in the Quadrant 2\n");
	}
      else
	{
	  printf("Point P lies in Quadrant 3\n");
	}
    }
  return 0;
}
  
	    
