// Name - Adarsh Kumar Singh
// Roll - 23CE10005

#include<stdio.h>
int main ()
{
  float x, y;
  printf("\nEnter the co-ordinates of a point say, A(x,y): ");
  scanf("%f%f", &x, &y);

  if (x==0 && y!=0)
    {
      printf("\nThe point A lies on Y-axis.");
    }
  else if (y==0 && x!=0)
    {
      printf("\nThe point A lies on X-axis.");
    }
  else if (y==0 && x==0)
    {
      printf("\nThe point A lies on both X-axis and Y-axis.");
    }
  else if (x>=0 && y>=0)
    {
      printf("\nThe point A lies in 1st quadrant.");
    }
  else if (x<=0 && y>=0)
    {
      printf("\nThe point A lies in 2nd quadrant.");
    }
  else if (x<=0 && y<=0)
    {
      printf("\nThe point A lies in 3rd quadrant.");
    }
  else if (x>=0 && y<=0)
    {
      printf("\nThe point A lies in 4th quadrant.");
    }
  printf("\n\nThankyou\n\n");
  return 0;
}
  
