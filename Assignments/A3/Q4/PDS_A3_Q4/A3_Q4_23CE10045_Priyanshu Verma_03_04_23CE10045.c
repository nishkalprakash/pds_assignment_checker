//Roll No.:23CE10045
//Name:PRIYANSHU VERMA

#include <stdio.h>
int main ()
{
  int a, b, c, d, x, y;
  printf("Enter the coordinates of bottom-left corner: \n");
  scanf("%d%d", &a, &b);
  printf("Enter the coordinates of top-right corner: \n");
  scanf("%d%d", &c, &d);
  if((a >= c) || (d <= b))
    {
      printf("Ill formed rectangle\n");
      return 0;
    }
    printf("Enter coordinates of point p: \n");
    scanf("%d%d", &x, &y);
    
  if(((x > a)&&(x < c))&&((y > b)&&(y < d)))
    {
      printf("P lies inside the rectangle");
    }
  else  if(((x < a)||(x > c))||((y < b)||(y > d)))
    {
      printf("P lies outside the rectangle");
    }
  else  if((x == a)&&( y!=b)&&(y!=d))
    {
      printf("P lies on left side of the rectangle");
    }
  else if((x == c)&&( y!=b)&&(y!=d))
    {
      printf("P lies on right side of the rectangle");
    }
  else if((y == b)&&( x!=a)&&(x!=c))
    {
      printf("P lies on bottom side of the rectangle");
    }
  else if((y == d)&&( x!=a)&&(x!=c))
    {
      printf("P lies on top side of the rectangle");
    }
  else if((x == a)&&(y==b))
    {
      printf("P lies on bottom-left corner of the rectangle");
    }
  else if((x == a)&&(y==d))
    {
      printf("P lies on top-left corner of the rectangle");
    }
  else if((x == c)&&(y==b))
    {
      printf("P lies on bottom-right corner of the rectangle");
    }
  else if((x == c)&&(y==d))
    {
      printf("P lies on top-right corner of the rectangle");
    }
  return 0;
  }
