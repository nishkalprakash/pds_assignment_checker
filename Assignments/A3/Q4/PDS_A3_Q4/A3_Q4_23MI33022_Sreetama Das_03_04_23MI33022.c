#include <stdio.h>
int main()
{
  int a,b,c,d,x,y;
  printf("Enter the coordinates of the bottom left corner of the rectangle ");
  scanf("%d%d", &a,&b);
  printf("Enter the coordinates of the top right corner of the rectangle ");
  scanf("%d%d", &c,&d);
  if(a<c && b<d)
    {
  printf("It is a well formed rectangle ");
    }
  else
    {
      printf("Ill formed rectangle ");
    }
  printf("Enter the x and y  coordinates of point P respectively  ");
  scanf("%d%d", &x,&y);
  if(x==a && y==b)
    {
      printf("P lies inside the rectangle ");
      printf("P lies on the bottom left corner of the rectangle ");    
    }
  else if(x==c && y==d)
    {
       printf("P lies inside the rectangle ");
      printf("P lies on the top right corner of the rectangle ");
    }
  else if(a<x<c && y==b)
    {
       printf("P lies inside the rectangle ");
      printf("P lies on the bottom  side  of the rectangle ");
    }
  else if(b<y<d && x==a)
    {
       printf("P lies inside the rectangle ");
      printf("P lies on the top side of the rectangle ");
    }
   else if(a<x<c && y==d)
    {
       printf("P lies inside the rectangle ");
      printf("P lies on the top  side  of the rectangle ");
    }
  else if(b<y<d && x==c)
    {
       printf("P lies inside the rectangle ");
      printf("P lies on the bottom  side of the rectangle ");
    }
  else if(a<x<c && b<y<d)
    {
      printf("P lies inside the rectangle ");
    }
  else if(x>c && y==d)
    {
      printf("P lies outside the rectangle");
    }
  else if(x<a && y==b)
    {
      printf("P lies outside the rectangle");
    }
      else if(y>d && x==c)
    {
      printf("P lies outside the rectangle");
    }
  else if(y<b && x==a)
    {
      printf("P lies outside the rectangle");
    }
   else if(x>c && y==b)
    {
      printf("P lies outside the rectangle");
    }
  else if(x<a && y==d)
    {
      printf("P lies outside the rectangle");
    }
      else if(y>d && x==a)
    {
      printf("P lies outside the rectangle");
    }
  else if(y<b && x==c)
    {
      printf("P lies outside the rectangle");
    }
  else
    {
      printf("Wrong input ");
    }
  return 0;
}
