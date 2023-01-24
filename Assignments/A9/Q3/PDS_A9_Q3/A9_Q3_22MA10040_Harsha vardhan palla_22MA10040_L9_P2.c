/*Name:P.Sri Harsha Vardhan
Roll no:22MA10040
assignment:9
program 1*/
#include<stdio.h>
struct rectangle{          //decleration of a struct rectangle//
int xcor;
int ycor;
};
int area(int,int,int,int);
int area(int x1,int y1,int x2,int y2)
{
int area;
area=(x2-x1)*(y2-y1);          //finding the area of the rectangle//
if(area<0) area*=-1;
else area*=1;
return area;
}
int main()
{
struct rectangle r1,r2;
printf("Enter the coordinates of bottom left rectangle:\n");   
scanf("%d %d",&r1.xcor,&r1.ycor);
printf("Enter the coordinates of top right rectangle:\n");
scanf("%d %d",&r2.xcor,&r2.ycor);
printf("Area: %d",area(r1.xcor,r1.ycor,r2.xcor,r2.ycor));
return 0;
}




