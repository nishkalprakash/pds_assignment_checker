#include<stdio.h>
int main()
{
    float x1,x2,x3,y1,y2,y3,z1,z2,z3,a;

    printf("A(x1,y1,z1):\n");
    scanf("%f%f%f",&x1,&y1,&z1);

    printf("B(x2,y2,z2):\n");
    scanf("%f%f%f",&x2,&y2,&z2);

    printf("C(x3,y3,z3):\n");
    scanf("%f%f%f",&x3,&y3,&z3);

    a = (x1*(y2*z3 - y3*z2)) - (y1*(x2*z3 - x3*z2)) + (z1*(x2*y3 - x3*y2));

    if (a == 0)
    {
        printf("The given three points are collinear.\n");
    }
    else
    {
        printf("The given three points are not collinear.\n");
    }

    if (x1 < x2 && x1<x3)
    {
        printf("A(%f,%f,%f)",x1,y1,z1);
        if(x2 < x3)
        {
            printf("< B(%f,%f,%f) < C(%f,%f,%f)\n",x2,y2,z2,x3,y3,z3);
        }
        else
        {
            printf("< C(%f,%f,%f) < B(%f,%f,%f)\n",x3,y3,z3,x2,y2,z2);
        }
    }
    else if (x2 < x3 && x2 < x1)
    {
        printf("B(%f,%f,%f)",x2,y2,z2);
        if(x1 < x3)
        {
            printf("< A(%f,%f,%f) < C(%f,%f,%f)\n",x1,y1,z1,x3,y3,z3);
        }
        else
        {
            printf("< C(%f,%f,%f) < B(%f,%f,%f)\n",x3,y3,z3,x2,y2,z2);
        }
    }
     else
    {
        printf("C(%f,%f,%f)",x3,y3,z3);
         if(x1 < x2)
        {
            printf("< A(%f,%f,%f) < B(%f,%f,%f)\n",x1,y1,z1,x2,y2,z2);
        }
        else
        {
            printf("< B(%f,%f,%f) < A(%f,%f,%f)\n",x2,y2,z2,x1,y1,z1);
        }
     if (x1 == x2 && x2 == x3 && x3 == x1)
    {
    if (y1 == y2 && y2 == y3 && y3 == y1)
    {
        if (z1 < z2 && z1<z3)
        {
            printf("A(%f,%f,%f)",x1,y1,z1);
            if (z2<z3)
            {
                printf("< B(%f,%f,%f) < C(%f,%f,%f)\n",x2,y2,z2,x3,y3,z3);
            }
            else
            {
                printf("< C(%f,%f,%f) < B(%f,%f,%f)\n",x3,y3,z3,x2,y2,z2);
            }
        }
     else if (y1 < y2 && y1<y3)
    {
        printf("A(%f,%f,%f)",x1,y1,z1);
        if(y2 < y3)
        {
            printf("< B(%f,%f,%f) < C(%f,%f,%f)\n",x2,y2,z2,x3,y3,z3);
        }
        else
        {
            printf("< C(%f,%f,%f) < B(%f,%f,%f)\n",x3,y3,z3,x2,y2,z2);
        }
    }
    else if (y2 < y3 && y2 < y1)
    {
        printf("B(%f,%f,%f)",x2,y2,z2);
        if(y1 < y3)
        {
            printf("< A(%f,%f,%f) < C(%f,%f,%f)\n",x1,y1,z1,x3,y3,z3);
        }
        else
        {
            printf("< C(%f,%f,%f) < A(%f,%f,%f)\n",x3,y3,z3,x1,y1,z1);
        }
    }
     else
    {
        printf("C(%f,%f,%f)",x3,y3,z3);
         if(y1 < y2)
        {
            printf("< A(%f,%f,%f) < B(%f,%f,%f)\n",x1,y1,z1,x2,y2,z2);
        }
        else
        {
            printf("< B(%f,%f,%f) < A(%f,%f,%f)\n",x2,y2,z2,x1,y1,z1);
        }
    }
    }






}
    }
}

