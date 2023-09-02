#include<stdio.h>
int main()
{
int x,y;
printf("Enter the coordinates of point p : ");
scanf("%d%d",&x,&y);
if(y==0)
 printf("p lies on x axis.\n");
else if(x==0)
 printf("p lies on y axis.\n");
else if(y==0 && x==0)
 printf("p lies on both the axis.\n");
else
 {
  if(x>0 && y>0)
   printf("p lies in first quadrant.\n");
  else if(x<0 && y>0)
   printf("p lies in fourth quadrant.\n");
  else if(x<0 && y<0)
   printf("p lies in third quadrant.\n");
  else
   printf("p lies in second quadrant.\n");
   }
return 0;
   }
