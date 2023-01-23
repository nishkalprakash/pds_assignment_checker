#include<stdio.h>
#include<math.h>
struct Circle
{
 int x;
 int y;
 float r;
};
int Isintersecting(struct Circle a,struct Circle b)
{
 int n;
 n=sqrt(((a.x)-(b.x))*((a.x)-(b.x))+((a.y)-(b.y))*((a.y)-(b.y)));
 if(n<=(a.r+b.r))
 return 1;
 else
 return 0;
}
int main()
{
 int c;
 struct Circle Circle1,Circle2;
 printf("Enter the center of the circle1:\n");
 printf("Enter the x coord:\n");
 scanf("%d",&Circle1.x);
 printf("Enter the y coord:\n");
 scanf("%d",&Circle1.y);
 printf("enter the radius of the circle:\n");
 scanf("%f",&Circle1.r);
 printf("Enter the center of the circle2:\n");
 printf("Enter the x coord:\n");
 scanf("%d",&Circle2.x);
 printf("Enter the y coord:\n");
 scanf("%d",&Circle2.y);
 printf("enter the radius of the circle:\n");
 scanf("%f",&Circle2.r);
 c=Isintersecting(Circle1,Circle2);
 if(c==1)
 printf("Circle intersect");
 else printf("Cicle do not intersect");
 return 0;
}
