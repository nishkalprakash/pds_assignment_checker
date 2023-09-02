//Roll no.- 23BT10015
//name- Ishansh Yadav
#include<stdio.h>

int main()
{ int a, b, c, d;
  printf("Enter the coordinates of the first point");
  scanf("%d %d", &a, &b);
  printf("Enter the coordinates of the second point");
  scanf("%d %d", &c, &d);
  if(c<a||d<b) 
  	     {printf("Ill formed rectangle");
  	      return 0;}
  int x, y;
  printf("Enter the coordinates of P");
  scanf("%d %d", &x, &y);
  if(x==a&&y==b) 
  	      	printf("Point lies on bottom and left side of rectangle");
  else if(x==c&&y==d) 
  			printf("Point lies on top and right side of rectangle");
  else if(x==a&&y==d) 
  			printf("Point lies on top and left side of rectangle");
  else if(x==c&&y==b) 
  			printf("Point lies on bottom and right side of rectangle");
  else if(((x>a)&&(x<c))&&((y>b)&&(y<d))) 
  			printf("Point lies inside the rectangle");
  else 
  			printf("Point lies outside the rectangle");
  return 0;  
}