#include<stdio.h>
int main()
{
    double x1,y1,z1,x2,y2,z2,x3,y3,z3;
    printf("A(x1,y1,z1) : ");
    scanf("%lf%lf%lf",&x1,&y1,&z1);
    printf("B(x2,y2,z2) : ");
    scanf("%lf%lf%lf",&x2,&y2,&z2);
    printf("C(x3,y3,z3) : ");
    scanf("%lf%lf%lf",&x3,&y3,&z3);
    printf("A(x1,y1,z1) : (%lf,%lf,%lf)\n",x1,y1,z1);
    printf("B(x2,y2,z2) : (%lf,%lf,%lf)\n",x2,y2,z2);
    printf("C(x3,y3,z3) : (%lf,%lf,%lf)\n",x3,y3,z3);
    double c = x1*(y2*z3-y3*z2)-x2*(y1*z3-y3*z1)+x3*(y1*z2-y2*z1);//finding determinant
    if(c==0)
        printf("The given three points are collinear");
    if(c!=0)
        printf("The given three points are not collinear");
    if(x1==x2&&x2==x3&&y1==y2&&y2==y3&&z1==z2&&z2==z3)
    {
        printf("A(x1,y1,z1) : (%lf,%lf,%lf) <",x1,y1,z1);
        printf("B(x2,y2,z2) : (%lf,%lf,%lf) <",x2,y2,z2);
        printf("C(x3,y3,z3) : (%lf,%lf,%lf)\n",x3,y3,z3);
    }
    else if(x1==x2&&x2==x3&&y1==y2&&y2==y3&&z1>z2&&z2>z3)
    {
        printf("C(x3,y3,z3) : (%lf,%lf,%lf) <",x3,y3,z3);
        printf("B(x2,y2,z2) : (%lf,%lf,%lf) <",x2,y2,z2);
        printf("A(x1,y1,z1) : (%lf,%lf,%lf) ",x1,y1,z1);

    }
    else if(x1==x2&&x2==x3&&y1==y2&&y2==y3&&z1<z2&&z1>z3)
    {
        printf("C(x3,y3,z3) : (%lf,%lf,%lf) <",x3,y3,z3);
        printf("A(x1,y1,z1) : (%lf,%lf,%lf) <",x1,y1,z1);
        printf("B(x2,y2,z2) : (%lf,%lf,%lf) ",x2,y2,z2);
    }
    else if(x1==x2&&x2==x3&&y1==y2&&y2==y3&&z3<z2&&z1<z3)
    {
        printf("A(x1,y1,z1) : (%lf,%lf,%lf) <",x1,y1,z1);
        printf("C(x3,y3,z3) : (%lf,%lf,%lf) <",x3,y3,z3);
        printf("B(x2,y2,z2) : (%lf,%lf,%lf) ",x2,y2,z2);
    }
    else if(x1==x2&&x2==x3&&y1==y2&&y2==y3&&z1>z3&&z3>z2)
    {
        printf("A(x1,y1,z1) : (%lf,%lf,%lf) <",x1,y1,z1);
        printf("C(x3,y3,z3) : (%lf,%lf,%lf) <",x3,y3,z3);
        printf("B(x2,y2,z2) : (%lf,%lf,%lf) ",x2,y2,z2);

    }
    else if(x1==x2&&x2==x3&&y1==y2&&y2==y3&&z2<z3&&z2>z1)
    {
        printf("C(x3,y3,z3) : (%lf,%lf,%lf) <",x3,y3,z3);
        printf("B(x2,y2,z2) : (%lf,%lf,%lf) <",x2,y2,z2);
        printf("A(x1,y1,z1) : (%lf,%lf,%lf) ",x1,y1,z1);
    }
    else if(x1==x2&&x2==x3&&y1==y2&&y2==y3&&z2<z1&&z1>z3)
    {
        printf("C(x3,y3,z3) : (%lf,%lf,%lf) <",x3,y3,z3);
        printf("A(x1,y1,z1) : (%lf,%lf,%lf) <",x1,y1,z1);
        printf("B(x2,y2,z2) : (%lf,%lf,%lf) ",x2,y2,z2);
    }
    else if(x1==x2&&x2==x3&&y1>y2&&y2>y3)
    {
        printf("C(x3,y3,z3) : (%lf,%lf,%lf) <",x3,y3,z3);
        printf("B(x2,y2,z2) : (%lf,%lf,%lf) <",x2,y2,z2);
        printf("A(x1,y1,z1) : (%lf,%lf,%lf) ",x1,y1,z1);
    }
    else if(x1==x2&&x2==x3&&y1<y2&&y1>y3)
    {
        printf("C(x3,y3,z3) : (%lf,%lf,%lf) <",x3,y3,z3);
        printf("A(x1,y1,z1) : (%lf,%lf,%lf) <",x1,y1,z1);
        printf("B(x2,y2,z2) : (%lf,%lf,%lf) ",x2,y2,z2);
    }
    else if(x1==x2&&x2==x3&&y3<y2&&y1<y3)
    {
        printf("A(x1,y1,z1) : (%lf,%lf,%lf) <",x1,y1,z1);
        printf("C(x3,y3,z3) : (%lf,%lf,%lf) <",x3,y3,z3);
        printf("B(x2,y2,z2) : (%lf,%lf,%lf) ",x2,y2,z2);
    }
    else if(x1==x2&&x2==x3&&y1>y3&&y3>y2)
    {
        printf("A(x1,y1,z1) : (%lf,%lf,%lf) <",x1,y1,z1);
        printf("C(x3,y3,z3) : (%lf,%lf,%lf) <",x3,y3,z3);
        printf("B(x2,y2,z2) : (%lf,%lf,%lf) ",x2,y2,z2);

    }
    else if(x1==x2&&x2==x3&&y2<y3&&y2>y1)
    {
        printf("C(x3,y3,z3) : (%lf,%lf,%lf) <",x3,y3,z3);
        printf("B(x2,y2,z2) : (%lf,%lf,%lf) <",x2,y2,z2);
        printf("A(x1,y1,z1) : (%lf,%lf,%lf) ",x1,y1,z1);
    }
    else if(x1==x2&&x2==x3&&y2<y1&&y1>y3)
    {
        printf("C(x3,y3,z3) : (%lf,%lf,%lf) <",x3,y3,z3);
        printf("A(x1,y1,z1) : (%lf,%lf,%lf) <",x1,y1,z1);
        printf("B(x2,y2,z2) : (%lf,%lf,%lf) ",x2,y2,z2);
    }
    else if(x1>x2&&x2>x3)
    {
        printf("C(x3,y3,z3) : (%lf,%lf,%lf) <",x3,y3,z3);
        printf("B(x2,y2,z2) : (%lf,%lf,%lf) <",x2,y2,z2);
        printf("A(x1,y1,z1) : (%lf,%lf,%lf) ",x1,y1,z1);
    }
    else if(x1<x2&&x1>x3)
    {
        printf("C(x3,y3,z3) : (%lf,%lf,%lf) <",x3,y3,z3);
        printf("A(x1,y1,z1) : (%lf,%lf,%lf) <",x1,y1,z1);
        printf("B(x2,y2,z2) : (%lf,%lf,%lf) ",x2,y2,z2);
    }
    else if(x3<x2&&x1<x3)
    {
        printf("A(x1,y1,z1) : (%lf,%lf,%lf) <",x1,y1,z1);
        printf("C(x3,y3,z3) : (%lf,%lf,%lf) <",x3,y3,z3);
        printf("B(x2,y2,z2) : (%lf,%lf,%lf) ",x2,y2,z2);
    }
    else if(x1>x3&&x3>x2)
    {
        printf("A(x1,y1,z1) : (%lf,%lf,%lf) <",x1,y1,z1);
        printf("C(x3,y3,z3) : (%lf,%lf,%lf) <",x3,y3,z3);
        printf("B(x2,y2,z2) : (%lf,%lf,%lf) ",x2,y2,z2);

    }
    else if(x2<x3&&x2>x1)
    {
        printf("C(x3,y3,z3) : (%lf,%lf,%lf) <",x3,y3,z3);
        printf("B(x2,y2,z2) : (%lf,%lf,%lf) <",x2,y2,z2);
        printf("A(x1,y1,z1) : (%lf,%lf,%lf) ",x1,y1,z1);
    }
    else if(x2<x1&&x1>x3)
    {
        printf("C(x3,y3,z3) : (%lf,%lf,%lf) <",x3,y3,z3);
        printf("A(x1,y1,z1) : (%lf,%lf,%lf) <",x1,y1,z1);
        printf("B(x2,y2,z2) : (%lf,%lf,%lf) ",x2,y2,z2);
    }
    return 0;
}
