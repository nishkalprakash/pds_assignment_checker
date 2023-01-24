/* Section 14
   Muskan
   Lab- 9
   Roll No.- 22ME30042
*/
#include<stdio.h>
#include<math.h>

struct rectangle
{
 int x_bottom,y_bottom;
 int x_top,y_top;
};
  
struct rectangle rect1;

float area(struct rectangle rect1)
{
 int side1,side2;
float area1;
 side1=((rect1.x_top)-(rect1.x_bottom));
 
  side2=((rect1.y_top)-(rect1.y_bottom));
 
 area1=side1*side2;
 return (area1);
}

int main()
{

printf("Enter the data of  rectangle");
scanf("%d%d%d%d",&rect1.x_bottom,&rect1.y_bottom,&rect1.x_top,&rect1.y_top);
float z=area(rect1);
printf("the area of the rectangle is %f",z);
return 0;
}


