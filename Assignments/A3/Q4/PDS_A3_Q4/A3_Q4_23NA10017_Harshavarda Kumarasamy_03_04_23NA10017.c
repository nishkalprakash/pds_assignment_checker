//Roll No:<23NA10017>
//Name:<Harshavarda Kumarasamy>

#include <stdio.h>

int main()
{
  int a, b, c, d;
  int x,y;

  printf("Type in the x-coordinate and y-coordinate of bottom-left corner:\n");
  scanf("%d%d", &a, &b);

  printf("Type in the x-coordinate and y-coordinate of top-right corner:\n");
  scanf("%d%d", &c, &d);

  if(c > a && d > b)
    {
      printf("Type in x-coordinate and y-coordinate of Point p:\n");
      scanf("%d%d", &x, &y);

      if(x>=a && x<=c && y>=b && y<=d)
	{if (x==a && y==b)
	    printf("p=(%d,%d) lies on two sides of the rectangle.\n", x, y);
	  else if (x==a && y==d)
	    printf("p=(%d,%d) lies on two sides of the rectangle.\n", x, y);
	  else if (x==c && y==b)
	    printf("p=(%d,%d) lies on two sides of the rectangle.\n", x, y);
	  else if (x==c && y==d)
	    printf("p=(%d,%d) lies on two sides of the rectangle.\n", x, y);
	  else if (x==a)
	    printf("p=(%d,%d) lies on one side of the rectangle.\n", x, y);
	  else if (y==b)
	    printf("p=(%d,%d) lies on one side of the rectangle.\n", x, y);
	  else if (x==c)
	    printf("p=(%d,%d) lies on one side of the rectangle.\n", x, y);
	  else if (y==d)
	    printf("p=(%d,%d) lies on one side of the rectangle.\n", x, y);
	  else
	    printf("p=(%d,%d) lies inside the rectangle.\n", x, y);
	  
	  if(x==c && y==d)
	    printf("p=(%d,%d) lies on the top right corner of the rectangle.", x, y);
	  else if(x==a && y==b)
	    printf("p=(%d,%d) lies on the bottom left corner of the rectangle.", x, y);
	  else if(y>(b+d)/2)
	    printf("p=(%d,%d) lies on the top side of the rectangle.", x, y);
	  else
	    printf("p=(%d,%d) lies on the bottom side of the rectangle.", x, y);
             
	}
      else
	printf("p=(%d,%d) is outside of the rectangle.", x, y); 
    }
  else
    printf("Ill formed rectangle");

  return 0;
}
  
