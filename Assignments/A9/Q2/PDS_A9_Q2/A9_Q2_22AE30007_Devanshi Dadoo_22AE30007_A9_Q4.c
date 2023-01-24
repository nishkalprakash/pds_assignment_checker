/*
section 14
roll no.: 22AE30007
name: Devanshi Dadoo
Assigment 9
desciption: TO FIND IF TWO CIRCLES ARE INTERSECTING 
*/

#include<stdio.h>
#include<math.h>

  // DEFING STRUCTURE 


typedef struct circle
{
 int x;
 int y;
 float r;
} circle;

circle c1, c2;


// READING CIRCLE 1

struct circle read_points1()
{
 struct circle c1;
 printf("x y r for c1: ");
 scanf("%d %d %f", &c1.x, &c1.y, &c1.r);
  return c1;
}


// READING CIRCLE 2  



struct circle read_points2()
{
 struct circle c2;
 printf("x y r for c2: ");
 scanf("%d %d %f", &c2.x, &c2.y, &c2.r);
  return c2;
}


// FUNCTION TO CHECK IF THE TWO CIRCLES ARE INTERSECTING 


float IsIntersectingCircle(circle a, circle b)
{
 float distance_between_centers, sum_of_radius, p, q;
 p=(a.x-b.x)*(a.x-b.x);
 q=(a.y-b.y)*(a.y-b.y);
 
 distance_between_centers= sqrt(p + q);
  sum_of_radius= (a.r+b.r);
  if(distance_between_centers < sum_of_radius)
 {
  printf("Circles Intersect \n");
 }
 else 
 {
  printf("Circles DON'T Intersect \n");
 }
}

// MAIN FUNCTION 

int main()
{
 struct circle c1, c2;
 c1= read_points1();
 c2= read_points2();
 IsIntersectingCircle(c1, c2);
}
 
 
 




