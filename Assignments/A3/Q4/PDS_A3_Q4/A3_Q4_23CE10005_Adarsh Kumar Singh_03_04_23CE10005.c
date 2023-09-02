// Name - Adarsh Kumar Singh
// Roll No. 23CE10005

#include<stdio.h>
int main ()
{
  float a, b, c, d, x, y;
  printf("\nEnter the co-ordinates of the bottom left corner of a rectangle say, A(a,b): ");
  scanf("%f%f", &a, &b);
  printf("Enter the co-ordinates of the top right corner of a rectangle say, A(c,d): ");
  scanf("%f%f", &c, &d);
  if (a<c && b<d)
    {
      printf("Enter the co-ordinates of any random point say, P(x,y): ");
      scanf("%f%f", &x, &y);
      if ((x<a && x>c) || (y<b && y>d))
	{
	  printf("\nThe point X lies outside the rectangle.");
	}
      else if ((x<c && x>a) && (y<d && y>b))
	{
	  printf("\nThe point X lies inside the rectangle.");
	}
      else if ((x==a) && (y<d && y>b))
	{
	  printf("\nThe point X lies on the left side of the rectangle.");
	}
      else if ((x==c) && (y<d && y>b))
	{
	  printf("\nThe point X lies on the right side of the rectangle.");
	}
      else if ((x<c && x>a) && (y==b))
	{
	  printf("\nThe point X lies on the bottom side of the rectangle.");
	}
      else if ((x<c && x>a) && (y==d))
	{
	  printf("\nThe point X lies on the top side of the rectangle.");
	}
      else if ((x==a) && (y==b))
	{
	  printf("\nThe point X lies on the bottom left corner of the rectangle.");
	}
      else if ((x==a) && (y==d))
	{
	  printf("\nThe point X lies on the top left corner of the rectangle.");
	}
      else if ((x==c) && (y==b))
	{
	  printf("\nThe point X lies on the bottom right corner of the rectangle.");
	}
      else if ((x==c) && (y==d))
	{
	  printf("\nThe point X lies on the top right corner of the rectangle.");
	}
    }
  else
    {
      printf("Ill formed rectangle.");
    }
  printf("\n\nThankyou\n\n");
  return 0;
}
      
      
      
  
