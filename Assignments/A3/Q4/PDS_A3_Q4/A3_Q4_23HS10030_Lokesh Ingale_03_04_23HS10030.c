//Name:Lokesh Nitin Ingale
//Roll no:23HS10030
#include<stdio.h>
int main()
{
//Declaring Variables
  int a,b,c,d,x,y;
//Taking Input
  printf("Enter coordinates of bottom-left corner point(a,b):\n");
  scanf("%d%d",&a,&b);
  printf("Enter coordinates of top-right corner point(c,d):\n");
  scanf("%d%d",&c,&d);
  if (c>a && d>b)
    {
  printf("Reactangle is well formed\n");
    }
 else {
   printf("ill formed reactangle");
     return 0;
}
//Taking coordinates of point p(x,y)
printf("Enter coordiantes of point p(x,y)");
scanf("%d%d",&x,&y);
if (x>a && x<c && y>b && y<d)
  {
    printf("p=(%d,%d) lies inside the rectangl",x,y);
 }
 else if (x==a && y==b)
   {
     printf("p=(%d,%d) lies on the bottom-left corner of the rectangle",x,y);
 }
else if (x==a && y==d)
   {
     printf("p=(%d,%d) lies on the top-left corner of the rectangle",x,y);
   }
else if (x==c && y==d)
   {
     printf("p=(%d,%d) lies on the top-right corner of the rectangle",x,y);
   }
else if (x==c && y==b)
   {
     printf("p=(%d,%d) lies on the bottom-right corner of the rectangle",x,y);
   }
else if (x==a && y>b && y<d)
   {
     printf("p=(%d,%d) lies on the left side  of the rectangle",x,y);
   }
else if (x==c && y>b && y<d)
   {
     printf("p=(%d,%d) lies on the right side  of the rectangle",x,y);
   }
else if (y==b && x>a && x<c)
   {
     printf("p=(%d,%d) lies on the bottom  side  of the rectangle",x,y);
   }
else if (y==d && x>a && x<c)
   {
     printf("p=(%d,%d) lies on the top side  of the rectangle",x,y);
   }
 else if (x<a || x>c && y>d ||  y<b)
   {
     printf("p=(%d,%d) lies outside the rectange",x,y);
   }
return 0;
}
