#include<stdio.h>
int main()
{
    float a1,b1,c1,a2,b2,c2,a3,b3,c3;
    float a,b,c,A,B,C;
    printf("Enter coordinates of A : ");
    scanf("%f%f%f", &a1,&b1,&c1);
    printf("Enter coordinates of B : ");
    scanf("%f%f%f", &a2,&b2,&c2);
    printf("Enter coordinates of C : ");
    scanf("%f%f%f", &a3,&b3,&c3);
    printf("A(x1,y1,z1) : (%.2f,%.2f,%.2f) \nB(x2,y2,z2) : (%.2f,%.2f,%.2f) \nC(x3,y3,z3) : (%.2f,%.2f,%.2f) \n", a1,b1,c1,a2,b2,c2,a3,b3,c3);

    a = a2-a1;
    b = b2-b1;
    c = c2-c1;
    A = a3-a2;
    B = b3-b2;
    C = c3-c2;

    if((a/A) == (b/B) == (c/C))
    {
        printf("The given three points are collinear \n");
    }
    else
    {
        printf("The given three points are not collinear \n");
    }

    if (a1>a2 && a2>a3) printf("C(%.2f,%.2f,%.2f)<B(%.2f,%.2f,%.2f)<A(%.2f,%.2f,%.2f)", a3,b3,c3,a2,b2,c2,a1,b1,c1);
    else if (a1>a3 && a3>a2) printf("B(%.2f,%.2f,%.2f)<C(%.2f,%.2f,%.2f)<A(%.2f,%.2f,%.2f)", a2,b2,c2,a3,b3,c3,a1,b1,c1);
    else if (a2>a1 && a1>a3) printf("C(%.2f,%.2f,%.2f)<A(%.2f,%.2f,%.2f)<B(%.2f,%.2f,%.2f)", a3,b3,c3,a1,b1,c1,a2,b2,c2);
    else if (a2>a3 && a3>a1) printf("A(%.2f,%.2f,%.2f)<C(%.2f,%.2f,%.2f)<B(%.2f,%.2f,%.2f)", a1,b1,c1,a3,b3,c3,a2,b2,c2);
    else if (a3>a1 && a1>a2) printf("B(%.2f,%.2f,%.2f)<A(%.2f,%.2f,%.2f)<C(%.2f,%.2f,%.2f)", a2,b2,c2,a1,b1,c1,a3,b3,c3);
    else if (a3>a2 && a2>a1) printf("A(%.2f,%.2f,%.2f)<B(%.2f,%.2f,%.2f)<C(%.2f,%.2f,%.2f)", a1,b1,c1,a2,b2,c2,a3,b3,c3);
    return 0;
}

