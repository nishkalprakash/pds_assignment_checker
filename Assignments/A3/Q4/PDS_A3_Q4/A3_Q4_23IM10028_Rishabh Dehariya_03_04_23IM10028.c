//Roll No - 23IM10028
//Name - Rishabh Dehariya
#include<stdio.h>

int main()
{
  int a,b;
  int c,d;

  //First part of the Question

  
  printf("Co-ordinates (x,y) of bottom left corner of a rectangle:");
  scanf("%d %d", &a, &b);

  printf("\nCo-ordinates (x,y) of top right corner of a rectangle:");
  scanf("%d  %d", &c, &d);

  if (c<=a || d<=b)
    {
      printf("Ill formed Rectangle");
    }
  else
    {
 //Second Part of the Question

  int x,y;

  printf("\nEnter the x-coordinate of point p:");
  scanf("%d",&x);

  printf("\nEnter the y-coordinate of point p:");
  scanf("%d",&y);

  if(x==a && y==b)
    {
      printf("Point P=(%d, %d) lies on bottom left corner of the Rectangle", x, y);
    }
  else if(x==a && y==d)
    {
      printf("Point P=(%d, %d) lies on top left corner of the Rectangle", x, y);
    }

  else if(x==c && y==b)
    {
      printf("Point P=(%d, %d) lies on bottom right corner of the Rectangle", x, y);
    }

  else if(x==c && y==d)
    {
      printf("Point P=(%d, %d) lies on top right corner of the Rectangle", x, y);
    }

  else if((x<=a || x>=c) && (y>=d || y<=b))
    {
      printf("Point P=(%d, %d) lies outside the Rectangle", x, y);
    }

  else if((x>=a && x<=c) && (y<=d && y>=b))
    {
      printf("Point P=(%d, %d) lies inside the Rectangle", x, y);
    }

  else if(x==a && y<=d && y>=b)
    {
      printf("Point P=(%d, %d) lies on Left side of the Rectangle", x, y);
  
    }

   else if(x==c && y<=d && y>=b)
    {
      printf("Point P=(%d, %d) lies on Right side of the Rectangle", x, y);
  
    }

   else if(y==b && x<=c && x>=a)
    {
      printf("Point P=(%d, %d) lies on Bottom side of the Rectangle", x, y);
  
    }

   else if(y==d && x<=c && x>=a)
    {
      printf("Point P=(%d, %d) lies on Left side of the Rectangle", x, y);
  
    }
  return 0;
    }
}

  
