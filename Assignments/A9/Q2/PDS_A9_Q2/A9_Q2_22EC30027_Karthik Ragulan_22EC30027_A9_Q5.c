#include<stdio.h>
#include<math.h>//since math function is used" -lm" is used
struct circle
{
int x;
int y;
float rad;
};
void IsIntersectingCircle(struct circle A,struct circle B);  
 //declaring a function checks if the two circles are intersecting
int main()
{
struct circle A,B;
printf("enter the coordinates of the center of the first circle: ");
//input the coordinates of the first circle
scanf("%d %d",&A.x,&A.y);
printf("enter the radius of the first circle: ");
//radius of the first circle
scanf("%f",&A.rad);
printf("enter the coordinates of the center of the second circle: ");
//input the coordinates of the seconf circle
scanf("%d %d",&B.x,&B.y);
printf("enter the radius of the second circle\n");
//radius of the second circle
scanf("%f",&B.rad);
IsIntersectingCircle(A,B);
//tells if the two circles are intersecting or not
return 0;
}
void IsIntersectingCircle(struct circle A,struct circle B)
{
float radius;
float dis;
radius=A.rad+B.rad;
dis=sqrt(((A.x-B.x)*(A.x-B.x))+((A.y-B.y)*(A.y-B.y)));
if(dis==radius||dis>radius)
printf("Circles DON'T Intersect");
else
printf("Circles Intersect");
}

