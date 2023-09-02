//Rollno:<23MT30010>
//Name:<Purva Harde>

#include<stdio.h>
int main()
{
  int a, b, c, d, x, y;
  printf("Enter bottom left coordinates\n");
  scanf("%d %d", &a, &b);
  printf("Enter top right coordinates\n");
  scanf("%d %d", &c, &d);
  printf("Enter the coordinates of the point p\n");
  scanf("%d %d", &x, &y);
  { if (x==a , y==b)
      printf("point p(%d, %d) lies on the bottom lest corner of rectangle \n", x, y);
    if (x==c , y==d)
      printf("point p(%d, %d) lies on the top right corner of the rectangle \n", x, y);
   else if (x==a , y==d)
      printf("point p(%d, %d) lies on the top left corner of the rectangle \n", x, y);
   else if (x==c , y==b)
      printf("point p(%d, %d) lies on the bottom right corner of the rectangle \n", x, y);
   else if (x==a , y>b && y<d)
     printf("point p(%d, %d) lies on the left edge \n", x, y);
   else if (x==c , y>b && y<d)
     printf("point (%d, %d) lies on the right edge \n", x, y);
   else if (x>a && x<c , y==b)
     printf("point (%d, %d) lies on the bottom edge \n", x, y);
   else if (x>a && x<c , y==d)
     printf("point(%d, %d) lies on the top edge \n", x, y);
   else if (x<a && x>c , y<b && y>d)
     printf("point(%d, %d) point lies outside the rectangle \n", x, y);
   else if (x>a && x<c , y>b && y<d)
     printf("point(%d, %d) lies inside the rectangle \n", x, y);
   else printf("ill formed rectangle");
  }
  return 0;
}
    
