/*
Section 14 
Roll No. : 22NA30030
Name : Siddhant Chasta 
Assignment No. : 9
Description :A program to find whether the two circles intersect or not.
*/

#include<stdio.h>
#include<math.h>

    typedef struct circle
  {
         int x1,x2; // x coordinates of centre of circles
         int y1,y2; // y coordinates of centre of circles
         float r1,r2; // radii of the circles
  } circle;
   

   int intersectCircle(circle c1,circle c2)
 {
    if(sqrt(((c1.x1-c2.x2)*(c1.x1-c2.x2))+((c1.y1-c2.y2)*(c1.y1-c2.y2))) < (c1.r1+c2.r2))
    { 
    printf("Circles Intersect.\n");
    }
    else printf("Circles DON'T Intersect.\n");
 }

int main()
{
   circle c1,c2;
   printf("Enter the coordinates of center of circle and its radius : ");
   printf("\n");
   printf("C1 : ");
   scanf("%d %d %f",&c1.x1,&c1.y1,&c1.r1);
   printf("C2 : ");
   scanf("%d %d %f",&c2.x2,&c2.y2,&c2.r2);
   
   intersectCircle(c1,c2);

}












    



    



