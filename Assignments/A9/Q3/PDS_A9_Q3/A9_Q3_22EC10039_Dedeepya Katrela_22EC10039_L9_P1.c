//SEC:14
//ROLL NUMBER:22EC10039
//NAME:DEDEEPYA
//ASSIGNMENT:9
//DESCRIPTION:PROGRAM TO CHECK POINTS
#include <stdio.h>
struct rectangle{
        float x_coord;
        float y_coord;
     };
float area(struct rectangle a,struct rectangle b)
{
 float p;
 p=(b.x_coord-a.x_coord)*(b.y_coord-a.y_coord);
 
 return p;
}
 
int main()
{struct rectangle a,b;
 float Area;
 printf("enter the value of x and y coord of a:");
 scanf("%f %f",&a.x_coord,&a.y_coord);
 printf("enter the value of x and y coord of b:");
 scanf("%f %f",&b.x_coord,&b.y_coord);
 Area=area(a,b);
 printf("Area: %f\n",Area);

 
return 0;

}
