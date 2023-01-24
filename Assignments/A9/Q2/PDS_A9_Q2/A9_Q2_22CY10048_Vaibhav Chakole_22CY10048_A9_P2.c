/*
Section 14
Roll No: 22CY10048
Name: Vaibhav Tulshidas Chakole
Assignment number: 9
Description : Circle intersecting or not
*/
#include<stdio.h>
struct circle
{
int x;
int y;
float r;
};
int IsIntersectingCircle(struct circle c1, struct circle c2)
{
float d;
d=(c2.y-c1.y)*(c2.y-c1.y)-(c2.x-c1.x)*(c2.x-c1.x); //calculating d square to avoid mistake in square root
if(d<=(c2.r+c1.r)*(c2.r+c1.r)) //comparing d square with r square
{
return 1; //if circle intersect
}
else
{
return 0; //if circle do not intersect
}
}
int main()
{
struct circle c1,c2;
printf("x y r\n");
scanf("%d %d %f",&c1.x,&c1.y,&c1.r);
scanf("%d %d %f",&c2.x,&c2.y,&c2.r);
if(IsIntersectingCircle(c1,c2))
{
printf("Circles Intersect\n"); //if function returns 1
}
else
{
printf("Circles DON'T intersect\n");  //if function returns 0
}
return 0;
}
