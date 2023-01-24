#include<stdio.h>
#include<math.h>
struct rectangle
{
int x1,y1;
int x2,y2;
};
void area(struct rectangle A);
int main()
{
struct rectangle A;
printf("enter the coordinates of the bottom left corner of the rectangle: ");
//input the coordinates of the bottom left corner of the rectangle
scanf("%d %d",&A.x1,&A.y1);
printf("enter the coordinates of the top right corner of the rectangle: ");
//input the coordinates of the top right corner of the rectangle
scanf("%d %d",&A.x2,&A.y2);
area(A);//prints the area of the axis parallel rectangle so formed
return 0;
}
void area(struct rectangle A)
{
int area;
area=sqrt(((A.x1-A.x2)*(A.x1-A.x2))*((A.y1-A.y2)*(A.y1-A.y2)));
printf("Area : %d",area);
return;
}
