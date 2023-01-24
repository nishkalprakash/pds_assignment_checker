#include <stdio.h>
#include <math.h>
struct circle{
int x;
int y;
float r;
};
int main()
{
struct circle c,d;
printf("Enter the coordinates of the center and radius of the first circle :");
scanf("%d %d %f",&c.x,&c.y,&c.r);
printf("Enter the coordinates of the center and radius of the second circle :");
scanf("%d %d %f", &d.x,&d.y,&d.r);
IsIntersectingCircle(c,d);
return 0;
}

void IsIntersectingCircle(struct circle a, struct circle b)
{
float radius;
float distance;
radius=a.r+b.r;
distance=sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
if(distance<radius){
printf("Circles Intersect");}
else {
printf("Circles DON'T Intersect");}
}

