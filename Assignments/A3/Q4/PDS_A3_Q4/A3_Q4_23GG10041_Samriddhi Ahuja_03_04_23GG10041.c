//roll no. <23GG10041>
//name <samriddhi ahuja>
#include <stdio.h>
int main()
{
  int a,b,c,d,x,y;
  printf("enter the coordinates (a,b)=\n");
  scanf("%d%d", &a, &b);
  printf("enter the coordinates (c,d)=\n");
  scanf("%d%d", &c, &d);
  if (a>=c||b>=d)
    {printf("ill formed recatangle\n");
      return 0;}
  else
    printf("enter the coordinates p(x,y)=\n");
  scanf("%d%d", &x,&y);
  if (x>a && x<c && y>b && y<d)
    {printf(" point lies inside the rectangle\n");}
  else if (x==a && y>b && y<d)
    {printf("point lies on the left side of the rectangle\n");}
  else if(y==b && x>a && x<c)
    {printf("point lies on the bottom side\n");}
	   else if ( x==c && y>b &&y<d)
	     {printf("point lies on right side of the rectangle\n");}
	   else if (y==d && x>a && y<c)
	     {printf("point lies on the top side of the rectangle\n");}
	   else if (x==a &&y==b)
	     {printf("point lies on the bottom left corner\n");}
	   else if (x==a && y==d)
	     {printf("point lies on the top left corner\n");}
	   else if (x==c && y==d)
	     {printf("point lies on the top right corner\n");}
	   else if (x==c && y==b)
	     {printf("point lies on the bottom right corner\n");}
	   else {printf("point lies outside the rectangle\n");}
	   return 0;
	 }
    
