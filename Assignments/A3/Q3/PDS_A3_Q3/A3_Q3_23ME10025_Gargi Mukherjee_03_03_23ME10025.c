//Name:Gargi Mukherjee
//Roll no.:23ME10025
#include <stdio.h>
int main()
{
  int a,b;
  printf("Enter the x coordinate of a point p:");
  scanf("%d",&a);
  printf("Enter the y coordinate of a point p:");
  scanf("%d",&b);
  if(a!=0 && b==0)
    {
      printf("p lie on x-axis");
    }
  if(a==0 && b!=0)
    {
      printf("p lie on y-axis");
    }
  if(a==0 && b==0)
    {
      printf("p lie on both x and y axis");
    }
  if(a>0 && b>0)
    {
      printf("p lie in first quadrant");
    }
  if(a>0 && b<0)
    {
      printf("p lie in second quadrant");
    }
  if(a<0 && b<0)
    {
      printf("p lie in third quadrant");
    }
  if(a<0 && b>0)
    {
      printf("p lie in fourth quadrant");
    }
  return 0;
}
  
  
  
