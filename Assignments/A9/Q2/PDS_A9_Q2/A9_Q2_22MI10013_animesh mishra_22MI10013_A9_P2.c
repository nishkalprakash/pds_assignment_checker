
/*
section:14
roll no:22MI10013
name:animesh mishra
assignment no:9
description:circle intersect or not
*/
#include<stdio.h>
#include<math.h>
struct circle{
         int x;
         int y;
         float r;
};
int IsIntersectionCircle(struct circle a,struct circle b)
{
   float dis;
   dis=sqrt((b.x-a.x)*(b.x-a.x)+(b.y-a.y)*(b.y-a.y));
   if(dis<=a.r+b.r)
             return 1;
   return 0;
}
int main()
{
    struct circle a,b;
    printf("x  y  r\n");
    scanf("%d %d %f",&a.x,&a.y,&a.r);
     scanf("%d %d %f",&b.x,&b.y,&b.r);
    if(IsIntersectionCircle(a,b)==1)
             printf("Circle Intersect");
   else
             printf("Circles dont intersect");

   return 0;
}
    


