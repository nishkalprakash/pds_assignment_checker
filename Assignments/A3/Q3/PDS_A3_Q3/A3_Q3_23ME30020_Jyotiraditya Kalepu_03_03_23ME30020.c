//Roll No: 23ME30020
//Name: Kalepu Jyotiraditya

#include <stdio.h>
int main()
{
  int x_cord, y_cord;            // Declaring variabls to store the co-ordinates of the point
  printf("Please enter the x co-ordinates and y co-ordinates of a point in XY plane\n");
  scanf("%d %d",&x_cord,&y_cord);
  if(x_cord == 0 && y_cord == 0){                    // Checking if point lies at origin
    printf("The point P lies on both X axis and Y axis i.e., it is the origin\n");
  }
  else if(x_cord == 0 && y_cord != 0){               // Checking if point lies on Y axis
   printf("The point P lies on Y axis but not on X axis\n");
  }
  else if(x_cord != 0 && y_cord == 0){               // Checking if point lies on X axis
   printf("The point P lies on X axis but not on Y axis\n");
  }
  else if(x_cord != 0 && y_cord != 0){               // Checking if point doesn't lie on either axis
    if ( x_cord > 0){
      if (y_cord>0) printf("Point lies in the first quadrant\n");    // Checking if point lies in First Quadrant
      if (y_cord<0) printf("Point lies in the second quadrant\n");   // Checking if point lies in Second Quadrant
    }
    if ( x_cord < 0){
      if (y_cord>0) printf("Point lies in the fourth quadrant\n");   // Checking if point lies in Third Quadrant
      if (y_cord<0) printf("Point lies in the third quadrant\n");    // Checking if point lies in Fourth Quadrant
    }
  }
  return 0;
}
