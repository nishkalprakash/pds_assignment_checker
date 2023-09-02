//Name: Nayandeep Deb
//Roll no. 23MA10036

#include <stdio.h>

int main() {
  int a, b, c, d;
  printf("Bottom-left coordinates: ");
  scanf("%d %d", &a, &b);
  printf("Top-right coordinates: ");
  scanf("%d %d", &c, &d);
  if (a >= c || b >= d)
    {
      printf("Ill formed rectangle\n");
      return 0;
    }
  int x,y;
  printf("Random coordinates(point p): ");
  scanf("%d %d", &x, &y);
  if (x > a && x < c && y > b && y < d)
    {
      printf("p=(%d, %d) lies inside rectangle\n",x, y);
    }
  else if (x < a || x > c || y < b || y > d)
    {
      printf("p=(%d, %d) lies outside rectangle\n",x, y);
    }
  else if (y == b)
    {
      if (x == a)
	{
	  printf("p=(%d, %d) is on bottom-left corner\n",x, y);
	}
      else if (x == c)
	{
	  printf("p=(%d, %d) is on bottom-right corner\n",x, y);
	}
      else if (x > a && x < c)
	{
	  printf("p=(%d, %d) is on bottom side\n",x, y);
	}
    }
  else if (y == d)
    {
      if (x == a)
	{
	  printf("p=(%d, %d) is on top-left corner\n",x, y);
	}
      else if (x == c)
	{
	  printf("p=(%d, %d) is on top-right corner\n",x, y);
	}
      else if (x > a && x < c)
	{
	  printf("p=(%d, %d) is on top side\n",x, y);
	}
    }
  else if (x == a && y > b && y < d)
    {
      printf("p=(%d, %d) is on left side\n",x, y);
    }
  else if (x == c && y > b && y < d)
    {
      printf("p=(%d, %d) is on right side\n",x, y);
    }
  return 0;
}
