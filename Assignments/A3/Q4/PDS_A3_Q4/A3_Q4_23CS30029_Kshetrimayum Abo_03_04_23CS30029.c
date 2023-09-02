//Roll No.: 23CS30029
//Name: Kshetrimayum Abo
#include <stdio.h>
int main()
{
  int a,b,c,d,x,y;
  printf("Enter the bottom-left corner coordinate(integer) of the rectangle : ");
  scanf("%d%d",&a,&b);
  printf("Enter the top-right corner coordinate(integer) of the rectangle : ");
  scanf("%d%d",&c,&d);
  if (d < b||c < a)
    printf("Ill formed rectangle\n");
  else
    {
      printf("Enter the x coordinate(integer) and y coordinate(integer) of point p : ");
      scanf("%d%d",&x,&y);

      //OUTSIDE
      //Checking if point p lies outside the rectangle
      if(x < a || x > c || y > d || y < b)
	printf("p=(%d,%d) lies outside the rectangle\n",x,y);

      //INSIDE
      //Checking if point p lies inside the rectangle
      else if(x > a && x < c && y > b && y < d)
	printf("p=(%d,%d) lies inside the rectangle\n",x,y);

      //SIDES
      //Checking if point p lies on left side of rectangle
      else if(x == a && y < d && y > b)
	printf("p=(%d,%d) lies on the left side of rectangle\n",x,y);
      //Checking if point p lies on right side of rectangle
      else if(x == c && y < d && y > b)
	printf("p=(%d,%d) lies on the right side of rectangle\n",x,y);
      //Checking if point p lies on top side of rectangle
      else if(y == d && x < c && x > a)
	printf("p=(%d,%d) lies on the top side of rectangle\n",x,y);
      //Checking if point p lies on bottom side of rectangle
      else if(y == b && x < c && x > a)
	printf("p=(%d,%d) lies on the bottom side of rectangle\n",x,y);

      //CORNERS
      //Checking if point p lies on top-right corner of rectangle
      else if(x == c && y == d)
	printf("p=(%d,%d) lies on top-right corner of the rectangle\n",x,y);
      //Checking if point p lies on top-left corner of rectangle
      else if(x == a && y == d)
	printf("p=(%d,%d) lies on top-left corner of the rectangle\n",x,y);
      //Checking if point p lies on bottom-left corner of rectangle
      else if(x == a && y == b)
	printf("p=(%d,%d) lies on bottom-left corner of the rectangle\n",x,y);
      //Checking if point p lies on bottom-right corner of the rectangle
      else if(x == c && y == b)
	printf("p=(%d,%d) lies on bottom-right corner of the rectangle\n",x,y);


      else
	printf("Invalid Coordinates\n"); //Should never be printed I believe
    }
  return 0;
}
