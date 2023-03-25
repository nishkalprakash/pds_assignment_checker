#include<stdio.h>
#include<math.h>
int main()
{
    float x1,x2,x3,y1,y2,y3,z1,z2,z3;
    printf("enter cordinate of point A :\n");
    scanf("%f %f %f",&x1,&y1,&z1);
    printf("enter cordinate of point B :\n");
    scanf("%f %f %f",&x2,&y2,&z2);
    printf("enter cordinate of point c :\n");
    scanf("%f %f %f",&x3,&y3,&z3);
    printf("A(x1,y1,z1) : (%.2f,%.2f,%.2f) \n",x1,y1,z1);
    printf("B(x2,y2,z2) : (%.2f,%.2f,%.2f) \n",x2,y2,z2);
    printf("C(x3,y3,z3) : (%.2f,%.2f,%.2f) \n",x3,y3,z3);
    if( x1*(y2*z3-z2*y3)-y1*(x2*z3-z2*x3)+z1*(x2*y3-y2*x3)==0 )      //for three points to be in straight line area of triangle formed by those three points must be equal to 0.
        printf("The given three points are collinear.");
    else printf("The given three points are not collinear.");

    return 0;
}

