#include<stdio.h>
#include<math.h>
struct circle{
int x;
int y;
float r;
};
void IsIntersectingCircle(struct circle c1, struct circle c2)
{
float d1,d2,temp;
temp=pow((c1.x-c2.x),2) + pow((c1.y-c2.y),2);
d1=sqrt(temp);
d2=c1.r+c2.r;
if(d1>=d2)
printf("\n The circle are not intersecting!");
else
printf("\n The circle are intersecting!");
}
int main()
{
 struct circle c1,c2;
 printf("\n Enter the coordinates of the centre of the first circle:");
 scanf("%d %d",&c1.x,&c1.y);
 printf("\n Enter the radius of the first circle:");
 scanf("%f",&c1.r);
 printf("\n Enter the coordinates of the centre of the second circle:");
 scanf("%d %d",&c2.x,&c2.y);
 printf("\n Enter the radius of the second circle:");
 scanf("%f",&c2.r);

 IsIntersectingCircle(c1,c2);
}

 


