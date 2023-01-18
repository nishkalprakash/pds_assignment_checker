/*
Section 14
Roll No : 22AG10001
Name : Aarushi Mahajan
Assignment No : 9
Description : Program to find area of rectangle.
*/

#include <stdio.h>

typedef struct rectangle {
	int x;
	int y;
} rectangle;

int area (rectangle botl, rectangle topr)
{
   int l, b, area;
   l= topr.x - botl.x;
   b= topr.y - botl.y;
   area= l*b;
   return area;
}

int main()
{
   
   int rect_area;
   rectangle botl, topr;
   
   printf("Rect: ");
   scanf("%d %d %d %d",&botl.x,&botl.y,&topr.x,&topr.y);
   rect_area= area(botl, topr);
   printf("\nArea: %d",rect_area);

   return 0;
}
   

