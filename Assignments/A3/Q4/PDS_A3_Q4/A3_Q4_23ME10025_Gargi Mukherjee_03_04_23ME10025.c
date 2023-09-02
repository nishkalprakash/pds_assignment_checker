//Name:Gargi Mukherjee
//Roll no.:23ME10025
#include <stdio.h>
int main()
{
  int a,b,c,d,x,y;
  printf("Enter the coordinates of bottom-left corner of the rectangle:");
  scanf("%d%d",&a,&b);
  printf("Enter the coordinates of top-right corner of the rectangle:");
  scanf("%d%d",&c,&d);
  
  if (c<=a || d<=b)
    {
      printf("Ill formed rectangle");
    }
  else
    {
     printf("Enter two integers representing a point:");
     scanf("%d%d",&x,&y);
     if (x>a && x<c && y>b && y<d)
       printf("p=(%d,%d) lies inside the rectangle",x,y);
     if (x>a && x<c && y==d)
        printf("p=(%d,%d) lies on the top side of the rectangle",x,y);
     if (x==c && y>b && y<d)
        printf("p=(%d,%d) lies on the right side of the rectangle",x,y);
     if (x==a && y>b && y<d)
        printf("p=(%d,%d) lies on the left side of the rectangle",x,y);
     if (x>a && x<c && y==b)
        printf("p=(%d,%d) lies on the bottom side of the rectangle",x,y);
     if (x==a && y==b)
        printf("p=(%d,%d) lies on the bottom-left corner of the rectangle",x,y);
     if (x==c && y==d)
        printf("p=(%d,%d) lies on the top-right corner of the rectangle",x,y);
     if (x==c && y==b)
        printf("p=(%d,%d) lies on the bottom-right corner of the rectangle",x,y);
     if (x==a && y==d)
        printf("p=(%d,%d) lies on the top-left corner of the rectangle",x,y);
     if (x<a || x>c || y<b ||y>d)
       printf("p=(%d,%d) lies outside the rectangle",x,y);
    }
  return 0;
}
    
      
      
       
  
