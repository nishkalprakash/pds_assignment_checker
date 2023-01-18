#include<stdio.h>
#include<math.h>
struct rectangle
{
int x1,x2;
int y1,y2;
};
int recarea(struct rectangle c);
int  main()
{
struct rectangle e;
printf("enter the coordinates of lower left corner");
scanf("%d %d",&e.x1,&e.y1);
printf("enter the coordinates of top left corner");
scanf("%d %d",&e.x2,&e.y2);
area(e);
return 0;
}
int area(struct rectangle c)
{
int X;
X=sqrt(((c.x2-c.x1)*(c.x2-c.x1))*(c.y2-c.y1)*(c.y2-c.y1));
printf("Area:%d",X);
return 0;
}



