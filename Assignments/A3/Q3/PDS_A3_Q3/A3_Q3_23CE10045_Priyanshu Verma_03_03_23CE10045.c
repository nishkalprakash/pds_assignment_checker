//Roll No.:23CE10045
//Name:PRIYANSHU VERMA


#include <stdio.h>

int main()
{
  float x, y;
  printf("Enter coordinates of point P: \n");
  scanf("%f%f", &x, &y);
  if((x == 0)&&(y == 0))
    {
      printf("P lies on both X axis and Y axis");
    }
    else if((x == 0)&&(y != 0))
    {
    printf("P is on Y axis\n");
    }
    else  if((y == 0)&&( x != 0))
      {
    printf("P is on X axis\n");
      }
    else  if((x > 0)&&(y > 0))
      {
    printf("P is in 1st Quadrant\n");
      }
    else if((x < 0)&&(y > 0))
      {
    printf("P is in 4th Quadrant\n");
      }
   else  if((x < 0)&&(y < 0))
      {
    printf("P is in 3rd Quadrant\n");
      }
  else  if((x > 0)&&(y < 0))
      {
    printf("P is in 2nd Quadrant\n");
      }
  return 0;

}
