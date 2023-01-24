/* 
  NAME - KRISHNA GUPTA
  SECTION -14
  ASSGNMENT -9
  DESCRIPTION - INTERSECTION OF CIRCLES*/
#include <stdio.h>
#include <math.h>
   
    typedef struct circle
    {
      int x;
      int y;
      float r;
    }  circle;
   
   circle c1, c2;
   
   struct circle read_points1()
    {

      struct circle c1;
      printf("x y r for c1: ");
      scanf("%d %d %f",&c1.x,&c1.y,&c1.r);
       return c1;
     }

    struct circle read_points2()
   {

       struct circle c2;
      printf("x y r for c2: ");
      scanf("%d %d %f",&c2.x,&c2.y,&c2.r);
       return c2;
     }
  
    float IsIntersectingCircle(circle a, circle b)
     {
       float distance_between_centers,sum_of_radius,p,q;
       p =(a.x -b.x)*(a.x - b.x);
       p =(a.y -b.y)*(a.y - b.y);

      distance_between_centers = sqrt(p+q);
      sum_of_radius = (a.r+b.r);
      if (distance_between_centers<sum_of_radius)
      {
        printf("circles intersect \n");
     }

     else 
     {
      printf("circles dont intersect \n");
      }
}


int main()
  {
  struct circle c1,c2;
 c1= read_points1();
 c2 =read_points2();
  IsIntersectingCircle(c1,c2);


    }
