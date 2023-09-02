//Roll no.: 23Ch10006
//Name: Anshuman Acharya
#include<stdio.h>
#include<math.h>
int main()
{
  // Predicting position of a point
  int x1,y1;
  printf("Enter coordinates of your point:\n");
  scanf("%d %d",&x1, &y1);
    if(x1 == 0 && y1 > 0)
    {
      printf("Your point lies on the positive y-axis\n");
	}
    else if(x1 == 0 && y1 < 0)
    {
      printf("Your point is on negative y-axis\n");
    }
  else if(x1 > 0 && y1 == 0)
    {
      printf("Your point is on the positive x-axis\n");
    }
  else if(x1 < 0 && y1 == 0)
    {
      printf("Your point is on the negative x-axis\n");
    }
  else if(x1 > 0 && y1 > 0)
    {
      printf("Your point is in the first quadrant\n");
    }
  else if(x1 < 0 && y1 > 0)
    {
      printf("Your point is in the second quadrant\n");
    }
  else if(x1 < 0 && y1 < 0)
    {
      printf("Your point is in the third quadrant\n");
	}
  else
    {
      printf("Your point is in the forth quadrant\n");
    }
 
  return 0;
}
