#include <stdio.h>
int main()
{
  int a,b,c,d;
  printf("enter the x coordinate of bottom left corner");
  scanf("%d", &a);
  printf("enter the y coordinate of bottom left corner");
  scanf("%d", &b);
  printf("enter the x coordinate of top right corner");
  scanf("%d", &c);
  printf("enter the y coordinate of top right corner");
  scanf("%d", &d);
  if (c>a && d>b)
    {
      printf("the rectangle is well formed\n");
      int x,y;
      printf("enter the x coordinate of point p");
      scanf("%d",&x);
      printf("enter the y coordinate of point p");
      scanf("%d", &y);
      if (x==a && y==b)
	{
	  printf("point p lies on bottom left corner of the rectangle");
	}
      else if (x==a && y==d)
	{
	  printf("point p lies on top left corner of the rectangle");
	}
      else if (x==c && y==b)
	{
	  printf("point p lies on bottom right corner of the rectangle");
	}
      else if (x==c && y==d)
	{
	  printf("point p lies on top right corner of the rectangle");
	}
      else if (a<x && x<c && b<y && b<d)
	{
	  printf("point p lies inside the rectangle");
	}
      else if (x<a || x>c || y<b || y>d)
	{
	  printf("point p lies outside the rectangle");
	}
      else if (y==d && a<x<c)
	{
	  printf("point p lies on top horizontal side of the reactangle");
	}
      else if (y==b && a<x<c)
	{
	  printf("point p lies on bottom horizontal side of the rectangle");
	}
      else if (x==a && b<y<d)
	{
	  printf("point p lies on left vertical side of the rectangle");
	}
      else if (x==c && b<y<d)
	{
	  printf("point p lies on right vertical side of the rectangle");
	}
    }
  else
    {
      printf("ill formed rectangle");
    }
  return 0;
}
