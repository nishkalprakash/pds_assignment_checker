#include<stdio.h>
int main()
{
  int x,y;
  printf("Enter the values if x and y cordinates\n");
  scanf("%d%d",&x,&y);
  if(x ==0 )
    {
      printf("the point lies on Y axis");
    }
  else if (y == 0)
    {
      printf("The point lies on X axis");
    }
  else if (x > 0 && y > 0)
    {
      printf("The point lies on Quadrant 1");
    }
   else if (x < 0 && y > 0)
    {
      printf("The point lies on Quadrant 2");
    } else if (x < 0 && y < 0)
    {
      printf("The point lies on Quadrant 3");
    } else if (x > 0 && y < 0)
    {
      printf("The point lies on Quadrant 4");
    }
   else
     {
       printf(" enter  valid coordinates");
     }
  return 0;

}
