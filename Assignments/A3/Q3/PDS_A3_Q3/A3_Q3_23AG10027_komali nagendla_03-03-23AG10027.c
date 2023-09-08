//Roll  No.:<23AG10027>
//Name:<Nagendla Komali>
#include<stdio.h>
int main()
{
  int x,y;
  printf("Enter a point (x,y)");
  scanf("%d%d",&x,&y);
  if ((x==0)&&(y==0))
    {
      printf("Enter the point lies on both axes");
    }
  
  else if (y==0)
    {
      printf("Enter the point lies on x axis");
    }
  else if (x==0)
    {
      printf("Enter the point lies on y axis");
    }
  else if ((x>0)&&(y>0))
    {
      printf("Enter the point lies in quadrant 1");
    }
  else if ((x<0)&&(y>0))
    {
      printf("Enter the point lies in quadrant 4");
    }
  else if((x<0)&&(y<0))
    {
      printf("Enter the point lies in quadrant 3");
    }
  else if((x>0)&&(y<0))
    {
      printf("Enter the point lies in quadrant 2");
    }
  return 0;
}
