#include<stdio.h>
#include<math.h>
struct circle
{
int x;
int y;
float r;
};
int intersectingcircle(struct circle a,struct circle b)
{
float radius;
float distance;
radius=a.r+b.r;
distance=sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
if(distance<radius)
printf("circles intersect");
else
printf("circles do not intersect");
}
int main()
{
struct circle c,d;
printf("ente rthe coordintaes of the center and radius of the circle1");
scanf("%d %d %f",&c.x,&c.y,&c.r);
printf("ente the coordintaes of the center and radius of the circle2");
scanf("%d %d %f",&d.x,&d.y,&d.r);
intersectingcircle(c,d);
return 0;
}

