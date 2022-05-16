/*
Thota Kesava Chandra
Computer Science Department
21CS30056
Code Blocks
Windows
*/


#include <stdio.h>
#include <math.h>

int main()
{
    float x1,y1,x2,y2,x3,y3;
    double a,b,c,A,B,C;
    printf("Enter the x & y of vertice 1 : ");
    scanf("%f%f",&x1,&y1);
    printf("Enter the x & y of vertice 2 : ");
    scanf("%f%f",&x2,&y2);
    printf("Enter the x & y of vertice 3 : ");
    scanf("%f%f",&x3,&y3);
    a = (y2 - y1)*(y2 - y1) + (x2 - x1)*(x2 - x1);
    b = (y2 - y3)*(y2 - y3) + (x2 - x3)*(x2 - x3);
    c = (y3 - y1)*(y3 - y1) + (x3 - x1)*(x3 - x1);
    A = sqrt(a);
    B = sqrt(b);
    C = sqrt(c);

    if (A >= B+C)
    {
        printf("Not a valid Triangle");
        return 0;
    }
    else if (B >= A+C)
    {
        printf("Not a valid Triangle");
        return 0;
    }
    else if (C >= A+B)
    {
        printf("Not a valid Triangle");
        return 0;
    }
    /*printf("a is %f\n",a);
    printf("b is %f\n",b);
    printf("c is %f\n",c);*/


    if (a > b+c)
    {
        printf("This is a obtuse angled triangle\n");
    }
    else if(a == b+c)
    {
        printf("This is a right angled triangle\n");
    }
    else if (b > a+c)
    {
        printf("This is a obtuse angled triangle\n");
    }
    else if(b == a+c)
    {
        printf("This is a right angled triangle\n");
    }
    else if (c > b+a)
    {
        printf("This is a obtuse angled triangle\n");
    }
    else if(c == b+a)
    {
        printf("This is a right angled triangle\n");
    }
    else
    {
        printf("This is a acute angled triangle\n");
    }
    return 0;
}
