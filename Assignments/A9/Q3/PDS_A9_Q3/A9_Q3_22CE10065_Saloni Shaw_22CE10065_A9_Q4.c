/*

Section 14

Roll no : 22CE10065

Name : Saloni Shaw

Assignment 9

Description - Program to determine the area of the rectangle. 
*/

#include <stdio.h>
typedef struct
{
int b1_x;
int bl_y;
int tr_x;
int tr_y;
}rectangle;
void computearea(rectangle r)//computing area
{
int area;
area=(r.tr_x-r.b1_x)*(r.tr_y-r.bl_y);
printf("Area:%d", area);//printing the results
}
int main()
{
rectangle a;
printf("Rect :");//asking input
scanf("(%d %d) (%d %d)",&a.b1_x,&a.bl_y,&a.tr_x,&a.tr_y);
computearea(a);
return 0;
}//end of program
