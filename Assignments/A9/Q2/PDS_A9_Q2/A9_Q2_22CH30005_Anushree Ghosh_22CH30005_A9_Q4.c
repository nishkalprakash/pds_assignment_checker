/*
section 14
ANUSHREE GHOSH
22CH30005
ASSIGNMENT 9
description:checking whether two circles are intersecting or not
*/

#include<stdio.h>
#include<math.h>

// defining the structure

typedef struct circle
{
 int x;
 int y;
 float r;
} circle;

circle c1,c2;

// reading circle c1

circle value1()
{
 circle c1;
 printf("x y r:");
 scanf("%d %d %f",&c1.x,&c1.y,&c1.r);
 return c1;
} 
  // reading circle c2

circle value2()
{
 circle c2;
 printf("x y r:");
 scanf("%d %d %f",&c2.x,&c2.y,&c2.r);
 return c2;
} 

void isIntersectingCircle( circle p, circle q)
{
 int dist_bw_centers,sum_of_radii;
 
 //checking whether the circles are intersecting or not

 dist_bw_centers=sqrt((pow((p.x-q.x),2))+(pow((p.y-q.y),2)));
 sum_of_radii=(p.r+q.r);

 if(dist_bw_centers<sum_of_radii)
 {
  printf("Circles Intersect");
 }
 else
 {
  printf("Circles DON'T Intersect");
 }
}

int main()
{ 
  circle c1,c2;
  c1=value1();
  c2=value2();
  isIntersectingCircle(c1,c2); //calling the function isIntersectingCircle()
  return 0;
}
  
 
