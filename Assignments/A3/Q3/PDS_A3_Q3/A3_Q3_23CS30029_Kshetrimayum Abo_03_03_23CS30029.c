//Roll No.: 23CS30029
//Name: Kshetrimayum Abo

#include <stdio.h>
int main()
{
  int x,y; //Declaring the coordinate variables x and y
  printf("Enter the x coordinate(integer) and y coordinate(integer) of the point p : ");
  scanf("%d%d",&x,&y); //Inputting x and y coordinates from the user
  if (x == 0 && y == 0) //Applying if else conditions from here to see where the point lies and printing out the appropriate axis or quadrant it lies in
    printf("The point lies on the x and y axis\n");
  else if (x == 0)
    printf("The point lies on the y axis\n");
  else if (y == 0)
    printf("The point lies on the x axis\n");
  else if (x > 0 && y > 0)
    printf("The point lies in Quadrant 1\n");
  else if (x > 0 && y < 0)
    printf("The point lies in Quadrant 2\n");
  else if (x < 0 && y < 0)
    printf("The point lies in Quadrant 3\n");
  else if (x < 0 && y > 0)
    printf("The point lies in Quadrant 4\n");
  else
    printf("Invalid Coordinate\n"); //Printing "Invalid Coordinate" if the user ever types something wrong, shouldn't ever execute I believe
  return 0;
}
