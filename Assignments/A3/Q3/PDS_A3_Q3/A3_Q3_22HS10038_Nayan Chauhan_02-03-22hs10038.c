#include <stdio.h>
int main()
{
    float x1, y1, z1, x2, y2, z2, x3, y3, z3, onw;
    char n,m,o;
    printf("A(x1,y1,z1) : ");
    scanf("%f%f%f", &x1, &y1, &z1);
    printf("A(x2,y2,z2) : ");
    scanf("%f%f%f", &x2, &y2, &z2);
    printf("A(x3,y3,z3) : ");
    scanf("%f%f%f", &x3, &y3, &z3);
    printf("A(x1,y1,z1) : (%.2f,%.2f,%.2f)\n", x1, y1, z1);
    printf("A(x2,y2,z2) : (%.2f,%.2f,%.2f)\n", x2, y2, z2);
    printf("A(x3,y3,z3) : (%.2f,%.2f,%.2f)\n\n", x3, y3, z3);
    float cross_prod = x1*(y2*z3-z2*y3)-y1*(x2*z3-z2*x3)+z1*(x2*y3-y2*x3);
    if(cross_prod==0)
    {
        printf("The given three points are collinear.\n\n ");
    }
    else printf("The given three points are not collinear.\n\n ");
    if(x1>x2)
    {
           A="c" //X1 Is L1
    }
    else if(x2>x1) l1=x2, l2=y2, l3=z2, s1=x1, s2=y1, s3=z1;//2 is L1
    else
    {
        if(y1>y2)
    {
        l1=x1, l2=y1,l3=z1;
           s1=x2, s2=y2, s3=z2;//X1 Is L1
    }
    else if(y2>y1) l1=x2, l2=y2, l3=z2, s1=x1, s2=y1, s3=z1;//2 is L1
    else
    {
        if(z1>z2)
    {
        l1=x1, l2=y1,l3=z1;
           s1=x2, s2=y2, s3=z2;//X1 Is L1
    }
    else if(z2>z1) l1=x2, l2=y2, l3=z2, s1=x1, s2=y1, s3=z1;//2 is L1
    else
    {
        l1=x2, l2=y2, l3=z2, s1=x1, s2=y1, s3=z1;//same
    }
    }
    }
     if(l1<x3)
    {
           l1=x3, l2=y3, l3=z3;
    }
    else if(l1>x3)
    else
    {
        if(l2<y3)
    {
       l1=x3, l2=y3, l3=z3;
    }
    else if(l2>y3)
    else
    {
        if(l3<z3)
    {
        l1=x3, l2=y3, l3=z3;
    }
    else if(l3>z3)
    else t3=s3, t2=s2, t1=s1, s1=x3, s2=y3, s3=z3;



     printf("A(x1,y1,z1) : (%.2f,%.2f,%.2f)\n ", l1, l2, l3, s1, s2, s3, t1, t2, t3);
    }



}
