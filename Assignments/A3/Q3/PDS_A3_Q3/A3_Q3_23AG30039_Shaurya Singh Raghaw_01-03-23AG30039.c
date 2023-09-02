//SHAURYA SINGH RAGHAW
//23AG30039


#include<stdio.h>
int main()
{
  int x,y;
  printf("enter the x coordinate\n");
  scanf("%d",&x);
  printf("enter the y coordinate\n");
  scanf("%d",&y);

  if(x==0 && y!=0)
    {
      printf("point lies on y axis");
    }
  else if(y==0 && x!=0)
    {
      printf("point lies on x axis");

    }
  else if(x==0 && y==0)
    {
      printf("point lies on both x and y axis");
    }

  else if(x>0 && y>0)
    {
      printf("point lies in quadrant 1");
    }
  else if(x<0 && y>0)
    {
      printf("point lies in quadrant 4");
    }
  else if(x<0 && y<0)
    {
      printf("point lies in quadrant 3");
    }
  else if(x>0 && y<0)
    {
      printf("point lies in quadrant 2");
    }
  
  return 0;

}
