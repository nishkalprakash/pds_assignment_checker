#include<stdio.h>
int main()
{
    float x1,x2,x3,y1,y2,y3,z1,z2,z3;
    printf("A(x1,y1,z1)");
    scanf("%f%f%f",&x1,&y1,&z1);
    printf("B(x2,y2,z2)");
    scanf("%f%f%f",&x2,&y2,&z2);
    printf("C(x3,y3,z3)");
    scanf("%f%f%f",&x3,&y3,&z3);
    printf("A(x1,y1,z1):(%f,%f,%f)\n",x1,y1,z1);
    printf("B(x1,y1,z1):(%f,%f,%f)\n",x2,y2,z2);
    printf("C(x1,y1,z1):(%f,%f,%f)\n",x3,y3,z3);
    if (((x2-x1)/(x3-x1))==((y2-y1)/(y3-y1))&&((x2-x1)/(x3-x1)==(z2-z1)/(z3-z1)))
    {
        printf("the given three points are collinear\n");
    }
    else
    {
        printf("the given three points are non collinear\n");
    }
        if (x1>x2 && x1>x3){
                if (x2>x3)
        {
            printf("C(%f,%f,%f)<B(%f,%f,%f)<A(%f,%f,%f)\n",x3,y3,z3,x2,y2,z2,x1,y1,z1);
        }
                else if (x3>x2)
        {
              printf("B(%f,%f,%f)<C(%f,%f,%f)<A(%f,%f,%f)\n",x2,y2,z2,x3,y3,z3,x1,y1,z1);

                }else if (x3==x2)
        {
            if (y2>y3)
            {
                printf("C(%f,%f,%f)<B(%f,%f,%f)<A(%f,%f,%f)\n",x3,y3,z3,x2,y2,z2,x1,y1,z1);
            }
            else if (y3>y2)
            {
                printf("B(%f,%f,%f)<C(%f,%f,%f)<A(%f,%f,%f)\n",x2,y2,z2,x3,y3,z3,x1,y1,z1);
            }
            else if (y3==y2)
            {
                if (z2>z3)
                {
                printf("C(%f,%f,%f)<B(%f,%f,%f)<A(%f,%f,%f)\n",x3,y3,z3,x2,y2,z2,x1,y1,z1);
                }
                else if (z3>z2)
                {
                printf("B(%f,%f,%f)<C(%f,%f,%f)<A(%f,%f,%f)\n",x2,y2,z2,x3,y3,z3,x1,y1,z1);
                }
            }
            }
        }
        if (x2>x1 && x2>x3){
                if (x1>x3)
        {
            printf("C(%f,%f,%f)<A(%f,%f,%f)<B(%f,%f,%f)\n",x2,y2,z2,x1,y1,z1,x2,y2,z2);
        }
                else if (x3>x1)
        {
             printf("A(%f,%f,%f)<C(%f,%f,%f)<B(%f,%f,%f)\n",x2,y2,z2,x3,y3,z3,x1,y1,z1);
        }
                else if (x3==x1)
        {
            if (y1>y3)
            {
                printf("C(%f,%f,%f)<A(%f,%f,%f)<B(%f,%f,%f)\n",x2,y2,z2,x1,y1,z1,x3,y3,z3);
            }
            else if (y3>y1)
            {
                printf("A(%f,%f,%f)<C(%f,%f,%f)<B(%f,%f,%f)\n",x2,y2,z2,x3,y3,z3,x1,y1,z1);
            }
            else if (y3==y1)
            {
                if (z3>z1)
                {
                printf("A(%f,%f,%f)<C(%f,%f,%f)<B(%f,%f,%f)\n",x2,y2,z2,x3,y3,z3,x1,y1,z1);
                }
                else if (z1>z3)
                {
                printf("C(%f,%f,%f)<A(%f,%f,%f)<B(%f,%f,%f)\n",x2,y2,z2,x3,y3,z3,x1,y1,z1);
                }
            }
            }
            }
            if (x3>x1 && x3>x2){
                if (x1>x2)
        {
            printf("B(%f,%f,%f)<A(%f,%f,%f)<C(%f,%f,%f)\n",x2,y2,z2,x1,y1,z1,x3,y3,3);
        }
                else if (x2>x1)
        {
             printf("A(%f,%f,%f)<B(%f,%f,%f)<C(%f,%f,%f)\n",x1,y1,z1,x2,y2,z2,x3,y3,z3);
        }
                else if (x2==x1)
        {
            if (y2>y1)
            {
               printf("A(%f,%f,%f)<B(%f,%f,%f)<C(%f,%f,%f)\n",x1,y1,z1,x2,y2,z2,x3,y3,z3);
            }
            else if (y1>y2)
            {
                printf("B(%f,%f,%f)<A(%f,%f,%f)<C(%f,%f,%f)\n",x2,y2,z2,x1,y1,z1,x3,y3,z3);
            }
            else if (y1==y2)
            {
                if (z1>z2)
                {
                printf("B(%f,%f,%f)<A(%f,%f,%f)<C(%f,%f,%f)\n",x2,y2,z2,x1,y1,z1,x3,y3,z3);
                }
                else if (z2>z1)
                {
                printf("A(f,%f,%f)<B(%f,%f,%f)<C(%f,%f,%f)\n",x1,y1,z1,x2,y2,z2,x3,y3,z3);
                }
            }
            }
        }

        }














