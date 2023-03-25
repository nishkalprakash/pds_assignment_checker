#include<stdio.h>
int main()
{
    float x1,x2,x3,y1,y2,y3,z1,z2,z3,D;
    printf("Enter the co-ordinates of point A\n");
    scanf("%f%f%f",&x1,&y1,&z1);
    printf("Enter the co-ordinates of point B\n");
    scanf("%f%f%f",&x2,&y2,&z2);
    printf("Enter the co-ordinates of point C\n");
    scanf("%f%f%f",&x3,&y3,&z3);
    //For the given points to be collinear ,the value of their determinant is 0
    D = x1*(y2*z3-y3*z2)-y1*(x2*z3-x3*z2)+z1*(x2*y3-x3*y2);
    printf("A(x1,y1,z1):(%f,%f,%f)\n",x1,y1,z1);
    printf("B(x2,y2,z2):(%f,%f,%f)\n",x2,y2,z2);
    printf("C(x3,y3,z3):(%f,%f,%f)\n",x3,y3,z3);
    if (D==0)
    {
        printf("The given three points are collinear");

    }
    else
    {
        printf("The given three points are not collinear");
    }
    return 0;


}
