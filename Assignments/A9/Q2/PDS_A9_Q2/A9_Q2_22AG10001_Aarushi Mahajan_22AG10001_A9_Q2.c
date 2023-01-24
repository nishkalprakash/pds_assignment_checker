/*
Section 14
Roll No : 22AG10001
Name : Aarushi Mahajan
Assignment No : 9
Description : Program to check if circles intersect.
*/

#include <stdio.h>
#include <math.h>

typedef struct circle {
	int x;
	int y;
	float r;
} circle;

int main()
{
   struct circle c1, c2;
   float d, sum;

   printf("Enter coordinates of center of circle 1.\n");
   scanf("%d %d",&c1.x,&c1.y);
   printf("Enter radius of circle 1.\n");
   scanf("%f",&c1.r);
   printf("Enter coordinates of center of circle 2.\n");
   scanf("%d %d",&c2.x,&c2.y);
   printf("Enter radius of circle 2.\n");
   scanf("%f",&c2.r);
   
   d= sqrt( pow((c1.x-c2.x),2) + pow((c1.y-c2.y),2) );
   sum= c1.r + c2.r;
   
   if (d<sum)
   printf("Circles Intersect");
   else
   printf("Circles DON'T Intersect");

   return 0;
}





