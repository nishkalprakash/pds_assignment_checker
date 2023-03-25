#include<stdio.h>
int main()
{
    float x1,y1,z1,x2,y2,z2,x3,y3,z3,a,b,c,A,B,C,a1,b1,c1;
    printf("Enter the co-ordinates of A(x1,y1,z1) : ");
    scanf("%f %f %f",&x1,&y1,&z1);
    printf("Enter the co-ordinates of B(x2,y2,z2) : ");
    scanf("%f %f %f",&x2,&y2,&z2);
    printf("Enter the co-ordinates of C(x3,y3,z3) : ");
    scanf("%f %f %f",&x3,&y3,&z3);
    a = x1-x2;
    b = y1-y2;
    c = z1-z2;
    A = x2-x3;
    B = y2-y3;
    C = z2-z3;
    a1 = a/A;
    b1 = b/B;
    c1 = c/C;
    printf("A(x1,y1,z1) : (%f,%f,%f)\n",x1,y1,z1);
    printf("B(x2,y2,z2) : (%f,%f,%f)\n",x2,y2,z2);
    printf("C(x3,y3,z3) : (%f,%f,%f)\n",x3,y3,z3);

    if ( a1==b1 && b1==c1)
      {
        printf("The given three points are collinear");
      }
    else
      {
        printf("The given points are not collinear");
      }

}
