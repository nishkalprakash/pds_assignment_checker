#include<stdio.h>
int main()
{


 float x1,x2,x3,y1,y2,y3,z1,z2,z3;

 printf("enter the coordinate of point A ");
 scanf("%f,%f,%f",&x1,&y1,&z1);
 printf("enter the coordinate of point B ");
 scanf("%f,%f,%f",&x2,&y2,&z2);
 printf("enter the coordinate of point C ");
 scanf("%f,%f,%f",&x3,&y3,&z3);
//condition for collinear point is given in the if statement condition

 if (((x2-x1)/(x3-x1))==((y2-y1)/(y3-y1)) && ((x2-x1)/(x3-x1))==((z2-z1)/(z3-z1)))

    printf("the three points  are collinear");
    else
        printf("the three point are not collinear");


 return 0 ;
}

