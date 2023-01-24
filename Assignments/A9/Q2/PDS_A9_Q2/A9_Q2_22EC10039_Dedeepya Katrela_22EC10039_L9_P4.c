//SEC:14
//ROLL NUMBER:22EC10039
//NAME:DEDEEPYA
//ASSIGNMENT:9
//DESCRIPTION:PROGRAM TO CHECK POINTS
#include <stdio.h>
#include <math.h>
struct circle{
    int x;
    int y;
    float r;
 };
int isintersectingcircle(struct circle c1,struct circle c2)
{float dist;
 int flag;
 dist= sqrt((c1.x-c2.x)*(c1.x-c2.x)+(c1.y-c2.y)*(c1.y-c2.y));
 if(dist<=(c1.r+c2.r))
 flag=1;
 else
 flag=0;
return flag;
}
int main()
{
  struct circle p,q;
  int flag;
  printf("enter the values of x and y coord of center and radius of the circle p:");
  scanf("%d %d %f",&p.x,&p.y,&p.r);
  printf("enter the values of x and y coord of center and radius of the circle q:");
  scanf("%d %d %f",&q.x,&q.y,&q.r);
 flag=isintersectingcircle(p,q);
 if(flag==1)
 printf("circles intersect\n");
else
 printf("circles do not intersect\n");
 return 0;
}
 
