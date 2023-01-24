/*
section:14
roll no:22MI10013
name:animesh mishra
assignment no:9
description:area of rectangle
*/
#include<stdio.h>
struct coord{
    float x;
    float y;
} a,b;
float area(struct coord a,struct coord b)
{
int area;
area = (b.y - a.y)*(b.x - a.x);
return area;
}
int main()
{
 printf("enter the coordinate");
 scanf("(%f %f) (%f %f)",&a.x,&a.y,&b.x,&b.y);
 printf("area:%f" , area(a,b));
}

 
