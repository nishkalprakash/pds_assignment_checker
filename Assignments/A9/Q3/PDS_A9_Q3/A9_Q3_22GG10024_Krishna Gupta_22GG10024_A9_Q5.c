/* 
  NAME - KRISHNA GUPTA
  SECTION -14
  ASSGNMENT -9
  DESCRIPTION - CALCULATING THE AREA */
#include <stdio.h>
  
    typedef struct rectangle
    {
 
       float x;
       float y;
     } rectangle;
   
   rectangle p1,p2;
   // INPUT POINT 1
 struct rectangle rp1()
   {
    
     struct rectangle point1;
     printf("Rect: ");
     scanf("%f %f", &point1.x, &point1.y);
     return point1;
    
   }
   // INPUT POINT 2
 struct rectangle rp2()
   {
    
     struct rectangle point2;
     scanf("%f %f", &point2.x, &point2.y);
     return point2;
    
   }

   // CALCULATING AREA
  float area(rectangle a,rectangle b) 
    {
       float len1 ,len2,lenz;
       len1= b.x -a.x;
       len2= b.y-a.y;
       lenz= len1*len2;
       return lenz;
    }
    // MAIN FUNCTION CALLING OTHER FUNCTIONS
   int main()
    {

      struct rectangle p1,p2;
      p1 = rp1();
      p2=  rp2();
      printf("area %f", area(p1,p2));

      return 0;
    }
    
