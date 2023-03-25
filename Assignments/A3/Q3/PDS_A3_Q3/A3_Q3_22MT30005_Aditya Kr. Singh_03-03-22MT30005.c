#include<stdio.h>
int main()
{
    float x1,x2,x3,y1,y2,y3,z1,z2,z3;
    printf("Enter the coordinates of A\n ");
    scanf("%f%f%f", &x1,&x2,&x3);
    printf("Enter the coordinates of B\n ");
    scanf("%f%f%f", &y1,&y2,&y3);
    printf("Enter the coordinates of C\n ");
    scanf("%f%f%f", &z1,&z2,&z3);
    printf("The three coordinates are: A(%f%f%f) B(%f%f%f) C(%f%f%f)", x1,x2,x3,y1,y2,y3,z1,z2,z3);
    int area= (x1*(y2*z3-z2*y3)-y1*(x2*z3-z2*x3)+z1*(x2*y3-x3*y2));
    if (area==0)
        printf("The given three points are collinear");
    else printf("The three points are not collinear");




    return 0;


}
