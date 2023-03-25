#include<stdio.h>

int main()
{
    float x1,y1,z1,x2,y2,z2,x3,y3,z3,a,b,c;
    printf("A(x1,y1,z1) : ");
    scanf("%f %f %f",&x1,&y1,&z1);
    printf("B(x2,y2,z2) : ");
    scanf("%f %f %f",&x2,&y2,&z2);
    printf("C(x3,y3,z3) : ");
    scanf("%f %f %f",&x3,&y3,&z3);
    printf("A(x1,y1,z1) : (%.2f, %.2f, %.2f)\n",x1,y1,z1);
    printf("B(x2,y2,z2) : (%.2f, %.2f, %.2f)\n",x2,y2,z2);
    printf("C(x3,y3,z3) : (%.2f, %.2f, %.2f)\n",x3,y3,z3);
    if ((((x1-x2)/(x2-x3))==((y1-y2)/(y2-y3)))&&(((y1-y2)/(y2-y3))==((z1-z2)/(z2-z3))))
        printf("\nThe given three points are collinear\n\n");
    else
        printf("\nThe given three points are not collinear\n\n");
    a=x1*100+y1*10+z1;
    b=x2*100+y2*10+z2;
    c=x3*100+y3*10+z3;
    if ((c>b)&&(b>a))
            printf("A(%.2f,%.2f,%.2f) < B(%.2f,%.2f,%.2f) < C(%.2f,%.2f,%.2f)",x1,y1,z1,x2,y2,z2,x3,y3,z3);
    if ((a>b)&&(b>c))
            printf("C(%.2f,%.2f,%.2f) < B(%.2f,%.2f,%.2f) < A(%.2f,%.2f,%.2f)",x3,y3,z3,x2,y2,z2,x1,y1,z1);
    if ((b>a)&&(a>c))
            printf("C(%.2f,%.2f,%.2f) < A(%.2f,%.2f,%.2f) < B(%.2f,%.2f,%.2f)",x3,y3,z3,x1,y1,z1,x2,y2,z2);
    if ((a>c)&&(c>b))
            printf("B(%.2f,%.2f,%.2f) < C(%.2f,%.2f,%.2f) < A(%.2f,%.2f,%.2f)",x2,y2,z2,x3,y3,z3,x1,y1,z1);
    if ((b>c)&&(c>a))
            printf("A(%.2f,%.2f,%.2f) < C(%.2f,%.2f,%.2f) < B(%.2f,%.2f,%.2f)",x1,y1,z1,x3,y3,z3,x2,y2,z2);
    if ((c>a)&&(a>b))
            printf("B(%.2f,%.2f,%.2f) < A(%.2f,%.2f,%.2f) < C(%.2f,%.2f,%.2f)",x2,y2,z2,x1,y1,z1,x3,y3,z3);
    return 0;
}
