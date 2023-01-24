#include<stdio.h>
#include<math.h>

typedef struct circle {
  int x,y;
  float r;
} circle;

int main()
{
  circle c1;
  circle c2;
  printf("Enter the coordinate of circle c1:-\n");
  scanf("%d %d",&c1.x,&c1.y);
  printf("Enter the radius of circle c1:-\n");
  scanf("%f",&c1.r);
  printf("Enter the coordinate of circle c2:-\n");
  scanf("%d %d",&c2.x,&c2.y);
  printf("Enter the radius of circle c2:-\n");
  scanf("%f",&c2.r);
 
 if( sqrt( (c1.x-c2.x)*(c1.x-c2.x) + (c1.y-c2.y)*(c1.y-c2.y) ) < c1.r + c2.r )
 { 
  printf("Circles Intersects");
}
 else 
{
printf(" Circles DON'T Intersects");
 
}
return 0;
}
