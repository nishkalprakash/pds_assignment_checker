#include <stdio.h>
typedef struct rect
{
float lx;
float ly;
float rx;
float ry;
}rect;

float area(rect rect1)
{
float length;
float width;
length = rect1.rx-rect1.lx;
width = rect1.ry-rect1.ly;
return (length*width);
}


int main()
{
rect rect1;
printf("enter the details for the rectangle\n");
scanf("%f %f %f %f",&rect1.lx,&rect1.ly,&rect1.rx,&rect1.ry);
float ar;
ar = area(rect1);
printf("the area is %f",ar);
return 0;
}



