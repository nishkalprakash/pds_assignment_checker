#include<stdio.h>
#include<math.h>
struct circle
{
int x;
int y;
float r;
};
int IsIntersectingCircle(struct circle a, struct circle b) // function determining whether circles are intersecting.
{
if (sqrt(pow((a.x-b.x),2)+pow((a.y-b.y),2))<=(a.r+b.r))
return 1;
else 
return 0;
}
int main()    //main function
{
struct circle c1,c2;
printf("Enter the abcissa, ordinate of centre, radius of circle 1 = ");
scanf("%d %d %f",&c1.x,&c1.y,&c1.r);
printf("Enter the abcissa, ordinate of centre, radius of circle 2 = ");
scanf("%d %d %f",&c2.x,&c2.y,&c2.r);
if (IsInterSectingCircle(c1,c2)==0)
printf("Circles DON'T intersect");
else 
printf("Circles intersect");
return 0;
}

