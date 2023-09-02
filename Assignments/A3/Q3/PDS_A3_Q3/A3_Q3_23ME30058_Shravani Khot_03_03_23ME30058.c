//Roll no. : 23ME30058
//Name: Shravani Khot

#include <stdio.h>
int main()

 {
   int x,y ;
   printf("Enter the x and y coordinates of the point p \n");
   scanf("%d%d",&x,&y);

   if ((x==0) && (y==0))
       printf("Point lies on both x-axis and y-axis \n");
   
   else if (x==0)
     printf("Point lies on the x-axis \n");
   else if (y==0)
     printf("Point lies on the y-axis\n");
   else if ((x>0) && (y>0))
		   printf("Point lies in the 1st Quadrant \n");
   else if ((x<0) && (y>0))
		   printf("Point lies in the 2nd Quadrant \n");
   else if ((x<0) && (y<0))
		   printf("Point lies in the 3rd Quadrant \n");
   else if ((x>0) && (y<0))
		   printf("Point lies in the 4th Quadrant \n");

   return 0;

 }




