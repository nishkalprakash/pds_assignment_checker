#include<stdio.h>
#include<math.h>
struct rectangle
{
int x1,y1;
int x2,y2;
};
int recarea(struct rectangle a);
int main()
{
struct rectangle b;
printf("Enter the coordinates of lower left corner of the rectangle :");
scanf("%d %d", &b.x1,&b.y1);
printf("Enter the coordinates of upper right corner of the rectangle ;");
scanf("%d %d", &b.x2,&b.y2);
area(b);
return 0;
}

int area(struct rectangle a)
{
int B;
B=sqrt(((a.x1-a.x2)*(a.x1-a.x2))*(a.y1-a.y2)*(a.y1-a.y2));
printf("Area : %d",B);
return 0;
}
