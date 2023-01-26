/*
section 14
ANUSHREE GHOSH
22CH30005
ASSIGNMENT 9
description:calculating area of a rectangle using top left corner point and bottom right corner point
*/

#include<stdio.h>

// defining the structure

typedef struct rectangle
{
 int x;
 int y;
} rectangle;
 
//rectangle co_od1,co_od2;
 
void rectangleArea(rectangle co_od1,rectangle co_od2)
{
 struct rectangle A;
 int val1,val2;
 val1=co_od1.x-co_od2.x;
 val2=co_od1.y-co_od2.y;
 // printing the area of the rectangle
 printf("Area:%d",val1*val2);
}

int main()
{
  struct rectangle co_od1,co_od2 ;
  // reading the coordinates
  printf("Rect:");
  scanf("%d %d %d %d",&co_od1.x,&co_od1.y,&co_od2.x,&co_od2.y);
  rectangleArea(co_od1,co_od2);

  return 0;
}

