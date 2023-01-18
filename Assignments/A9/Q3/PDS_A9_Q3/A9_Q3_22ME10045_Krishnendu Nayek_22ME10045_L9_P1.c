#include<stdio.h>
int main()
{
struct rectangle_point
{
float x;
float y;
};

struct rectangle_point r1,r2;
printf("\n Enter the x-coordinate of top left corner:");
scanf("%f",&r1.x);
printf("\n Enter the y-coordinate of top left corner:");
scanf("%f",&r1.y);

printf("\n Enter the x-coordinate of bottom right corner:");
scanf("%f",&r2.x);
printf("\n Enter the y-coordinate of bottom right corner:");
scanf("%f",&r2.y);

float area;
area= (r2.x - r1.x)*(r1.y - r2.y);
if(area>0)
printf("\n The area of the rectangle is %f",area);
if(area<0)
printf("\n The area of the rectangle is %f",-1* area);
}
