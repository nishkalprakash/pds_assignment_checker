#include<stdio.h>

typedef struct rectangle{
 int x1;
int y1;
int x2;
int y2;
}rectangle;

int Area(int x1,int y1,int x2,int y2)
{
  int A= (x2-x1)*(y2-y1);
return A;
}
int main()
{
  rectangle P;
 printf("Enter the bottom left coordinate of rectangle P:-\n");
  scanf("%d %d",&P.x1,&P.y1);
  printf("Enter the coordinate of top right corner of rectangle P:-\n");
  scanf("%d %d",&P.x2,&P.y2);
 int A= Area(P.x1,P.y1,P.x2,P.y2);
printf("Area: %d",A);
return 0;
}
