/*
Section 14
Roll no - 22IE10007
Name - Anisha Banerjee
Assignment 9
Program to calculate area of an axis parallel rectangle
*/
#include<stdio.h>
typedef struct
  {
    int bl_x;                  // storing bottom left and top right coordinates
    int bl_y;
    int tr_x;
    int tr_y;
  }rectangle;
void computearea(rectangle r)
   {
     int area;
     area=(r.tr_x-r.bl_x)*(r.tr_y-r.bl_y);            // area calculation
     printf("Area: %d",area);                      //printing area
   }
int main()
   {
     rectangle a;
     printf("Rect :");
     scanf("(%d %d) (%d %d)",&a.bl_x,&a.bl_y,&a.tr_x,&a.tr_y);   //input
     computearea(a);
     return 0;
   }
     
