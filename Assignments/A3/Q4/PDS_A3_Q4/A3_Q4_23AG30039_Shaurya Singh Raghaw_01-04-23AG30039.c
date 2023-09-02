//SHAURYA SINGH RAGHAW
//23AG30039

#include<stdio.h>
int main()
{
  int a,b,c,d,x,y;
  printf("enter the coordinates of bottom left corner:\n");
  scanf("%d%d",&a,&b);
  printf("enter the coordinates of top right corner\n");
  scanf("%d%d",&c,&d);

  if(c<a || d<b)
    {
      printf("ill formed rectangle");
    }
  else
    {
      printf("enter the x coordinate:\n");
      scanf("%d",&x);
      printf("enter the y coordinate:\n");
      scanf ("%d",&y);

      if(x>a && x<c && y>b && y<d)
	{
	  printf("point lies inside the rectangle");
	}
      else if(x==a && y==b)
	{
	  printf("point lies on bottom left corner");
	}
      else if(x==c && y==d)
	{
	  printf("point lies on top right corner");
	}
      else if(x==a && y>b && y<d)
	{
	  printf("point lies on left side of rectangle");
	    }
      else if(x==c && y>b && y<d)
	{
	  printf("point lies on right side of rectangle");
	}
      else if(y==b && x>a && x<c)
	{
          printf("point lies on bottom side of rectangle");
        }
      else if(y==d && x>a && x<c)
	{
	  printf("point lies on top side of rectangle");
	}
      else if(x>c || x<a || y>d || y<b)
	{
	  printf("point lies outside rectangle");
	}
    }
  return 0;
}
      
      
