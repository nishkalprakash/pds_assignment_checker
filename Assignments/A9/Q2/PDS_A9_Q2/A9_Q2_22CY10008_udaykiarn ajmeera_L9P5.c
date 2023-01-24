/*
NAME:AJMEERA UDAY KIARN
ROLL NO:22CY10008
ASSIGNMENT:9
SECTION:14
DESCRIPTION:
*/

#include<stdio.h>

 typedef circle stuct [
   float x,y;
   float r;
}circle ;
 
 int main()
{  
   circle c1;
   circle c2;
   printf("enter the coordinates of the circle c1: \n");
   scanf("%d %d",&c1,x,c1.y);
   printf("enter the radius of the circle c1: \n");
   scanf("%d",&C1.r);
   printf("enter the coordinate nof the circle c2: \n");
   scanf("%d %d",&C1,x,c2.y);
   printf("enter the radius of the circle c2: \n");
   scanf("%f",&c2*r);

   if(sqrt( pow ((c1.x-c2.x)*(c1,x-c2.x)+ pow ((c1.y-c2.y)*(c1.y-c2.y)) )) <c1.r+c2.r)
{
 printf("circle interesect");
}
else{
printf("circle dont intersect");
}
return 0;
}

