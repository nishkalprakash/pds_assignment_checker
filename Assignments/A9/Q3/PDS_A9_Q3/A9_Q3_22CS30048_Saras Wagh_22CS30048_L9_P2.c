#include<stdio.h>
struct retangle
{
 int x1,y1,x2,y2;
}a1;
int Area(int x1,int x2,int y1,int y2)
{
 int b;
 b=((x1-x2)*(y1-y2));
 if(b<0)
 {
  b*=(-1);
 }
 return b;
};
int main()
{
 
 int c;
 printf("Enter the coordinates of the bottom left and top right corners:\n");
 printf("Enter the coordinates of the bottom left:\n");
 printf("Enter the x coord:");
 scanf("%d",&a1.x1);
 printf("Enter the y coord:");
 scanf("%d",&a1.y1);
 printf("Enter the coordinates of the top right:\n");
 printf("Enter the x coord:");
 scanf("%d",&a1.x2);
 printf("Enter the y coord:");
 scanf("%d",&a1.y2);
 c=Area(a1.x1,a1.x2,a1.y1,a1.y2);
 printf("The area of the rectangle is %d",c);
 return 0;
}
 
  
 
