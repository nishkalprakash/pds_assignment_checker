//Roll no.: 23Ch10006
//Name: Anshuman Acharya
#include<stdio.h>
#include<math.h>
int main()
{
  // Predicting position of a point with respect to the rectangle as given by the user..
  int a, b, c, d, x, y;
  printf("Enter coordinates of your first point of your rectangle,ie A, in the first quadrant only\n");
  scanf("%d %d",&a, &b);
  printf("Enter coordinates of your second point of your rectangle, ie B\nThis should be above and right to A\n");
  scanf("%d %d",&c, &d);
  if(a<0||b<0||c<0||d<0)
    {
      printf("Your point is invalid\n");                //To keep the rectangle in the first quadrant..
    }

  else if(c<a && d<b)
    {
      printf("Not formed rectangle\n");
	}
    else if(c>a && d>b)
    {
      printf("Enter coordinates of another point to check it's position with respect to the rectangle\n");
	scanf("%d %d",&x,&y);
      if(x == a && y<d && y>b)
	{
	  printf("The point is on the left side\n");
	}
      else if(x == c && y<d && y>b)
	{
	  printf("The point is on the right side\n");
	}
      else if(y == b && x<c && x>a)
	{
	  printf("The point is on the lower side\n");
	}
      else if(y == d && x<c && x>a)
	{
	  printf("The point is on the upper side\n");
	}
      else if(x < c && x>a && y<d && y>b)
	{
	  printf("The point is inside the rectangle\n");
	}
      else if(x == a&&y ==b||x==c&&y==d||x == a&&y==d||x==c&&y==b)
	{
	  printf("The point is on the corner\n");
	}
      else{
	printf("The point is outside the rectangle\n");
      }
    };
 
  return 0;
}
