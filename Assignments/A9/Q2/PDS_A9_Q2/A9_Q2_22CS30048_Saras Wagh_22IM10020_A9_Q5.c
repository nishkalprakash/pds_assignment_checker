//Assignment 9
//Section 14
//Name:Sanika Kadam
//Question 5

//Program to check if two circles intersect or not

#include<stdio.h>
#include<math.h>
 
typedef struct{
               int x; //x coordinate of centre of circle
               int y; //y coordinate of centre of circle
               float r;//radius of circle
              }circle;

//Function to check if circles intersect or not

int check(circle *C1,circle *C2)
{
   long dist,temp,p,q;
   p=((C1->x)-(C2->x))*((C1->x)-(C2->x));
   q=((C1->y)-(C2->y))*((C1->y)-(C2->y));
   dist=sqrt(p+q);

   temp=(C1->r)+(C2->r);

   if(dist<=temp)
   {
     return 1;
   }
   else
    return 0;
}

int main()
{
   circle C1,C2;
   printf("C1:"); //Enter x coord of centre,y coord of centre and radius
   scanf("%d %d %f",&C1.x,&C1.y,&C1.r);
   printf("C2:"); //Enter x coord of centre,y coord of centre and radius
   scanf("%d %d %f",&C2.x,&C2.y,&C2.r);

   if(check(&C1,&C2)==1)
   {
    printf("Circle intersects\n");
   }
   else if(check(&C1,&C2)==0)
   {
    printf("Circle does not intersects\n");
   } 
   
   return 0;
}
   

