/*NAME:VADITHYA DUSVANH
  SECTION:14
  TOPIC:STRUCTUES
  ASSIGNMENT:9        */

#include<stdio.h>
#include<math.h>
 
   typedef struct circles {
   float x,y;
   float r;
   }circle ;

   int main()
{
   circle c1;
   circle c2;
   printf("enter the coordinates of the circle c1: \n");
   scanf("%f %f",&c1*x,c1*y);
   printf("enter the radius of the circle c1: \n");
   scanf("%f",&c1*r);
   printf("enter the coordinites of the circle c2: \n");
   scanf("%f %f",&c1*x,c2*y);
   printf("enter the radius of the circle c2: \n");
   scanf("%f",&c2*r);


 if( sqrt( pow ((c1.x-c2.x)*(c1.x-c2.x)))+( pow ( (c1.y-c2.y)*(c1.y-c2.y)) )) <c1.r+c2.r )
{
 printf("circles intersect");
}
 else{
 printf("circles DON'T Intersect");
}
  return 0;
}
