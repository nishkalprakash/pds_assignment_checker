/*
Section 14
Roll no - 22IE10007
Name - Anisha Banerjee
Assignment 9
Program to check whether 2 circles intersect or not
*/
#include<stdio.h>
#include<math.h>
typedef struct
      {
        int x;
        int y;
        float r;
      }circle;
int IsIntersectingCircle(circle p,circle q)
   {
     float d;
     d=sqrt((p.x-q.x)*(p.x-q.x)+(p.y-q.y)*(p.y-q.y)); //Calculating distance
     if (d<(p.r+q.r))                                 //Checking criterion
       return 1;
     else 
       return 0;
   }
int main()
   {
     circle c1,c2;
     int m;
     printf("x y r\n");
     scanf("%d %d %f",&c1.x,&c1.y,&c1.r);
     scanf("%d %d %f",&c2.x,&c2.y,&c2.r);
     m=IsIntersectingCircle(c1,c2);
     if(m==1)
       printf("Circles Intersect\n");           //Printing
     if(m==0)
       printf("Circles DON'T Intersect\n");
     return 0;
   }
