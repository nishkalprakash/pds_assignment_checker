#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    float x1,x2,x3,y1,y2,y3,z1,z2,z3;
    printf("Write the coordinates of point A");
    scanf("%f/n",&x1);
    scanf("%f/n",&y1);
    scanf("%f/n",&z1);
    printf("Write the coordinates of point B");
    scanf("%f/n",&x2);
    scanf("%f/n",&y2);
    scanf("%f/n",&z2);
    printf("Write the coordinates of point A");
    scanf("%f/n",&x3);
    scanf("%f/n",&y3);
    scanf("%f/n",&z3);
    printf("The coordinates of A are (\%f\,\%f\,\%f\)",x1,y1,z1);
    printf("The coordinates of B are (\%f\,\%f\,\%f\)",x2,y2,z2);
    printf("The coordinates of C are (\%f\,\%f\,\%f\) \n",x3,y3,z3);
    float lena, lenb, lenc;
    lena = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)+(z1-z2)*(z1-z2));
    lenb = sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3)+(z2-z3)*(z2-z3));
    lenc = sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3)+(z1-z3)*(z1-z3));
    if (lena + lenb == lenc)
    {
        printf("A, B, C are collinear\n");
    }
    else
        printf("They are not collinear\n");

    if (x1<x2)
    {
        if (x2<x3)
            printf("A < B < C");
        else if (x2>x3)
        {
            if (x1>x3)
                printf("C < A < B");
            else if (x1 < x3)
                printf("A < C < B");
        }
        if (x1>x2)
        {
            if (x2>x3)
                printf("C < B < A");
            else if(x2<x3)
            {
                if (x1>x3)
                    printf("B < C < A");
                else if (x3 > x1)
                    printf("B < A < C");



            }

        }

        if (x1 == x2 && x2 == x3)
        {
            if (y1<y2)
            {
                if (y2<y3)
                    printf("A < B < C");
                else if (y2>y3)
                {
                    if (y1>y3)
                        printf("C < A < B");
                    else if (y1 < y3)
                        printf("A < C < B");
                }
                if (y1>y2)
                {
                    if (y2>y3)
                        printf("C < B < A");
                    else if(y2<y3)
                    {
                        if (y1>y3)
                            printf("B < C < A");
                        else if (y3 > y1)
                            printf("B < A < C");



                    }






                }




            }


            return 0;
        }
    }
}








#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    float x1,x2,x3,y1,y2,y3,z1,z2,z3;
    printf("Write the coordinates of point A");
    scanf("%f/n",&x1);
    scanf("%f/n",&y1);
    scanf("%f/n",&z1);
    printf("Write the coordinates of point B");
    scanf("%f/n",&x2);
    scanf("%f/n",&y2);
    scanf("%f/n",&z2);
    printf("Write the coordinates of point A");
    scanf("%f/n",&x3);
    scanf("%f/n",&y3);
    scanf("%f/n",&z3);
    printf("The coordinates of A are (\%f\,\%f\,\%f\)",x1,y1,z1);
    printf("The coordinates of B are (\%f\,\%f\,\%f\)",x2,y2,z2);
    printf("The coordinates of C are (\%f\,\%f\,\%f\) \n",x3,y3,z3);
    float lena, lenb, lenc;
    lena = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)+(z1-z2)*(z1-z2));
    lenb = sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3)+(z2-z3)*(z2-z3));
    lenc = sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3)+(z1-z3)*(z1-z3));
    if (lena + lenb == lenc)
    {
        printf("A, B, C are collinear\n");
    }
    else
        printf("They are not collinear\n");

    if (x1<x2)
    {
        if (x2<x3)
            printf("A < B < C");
        else if (x2>x3)
        {
            if (x1>x3)
                printf("C < A < B");
            else if (x1 < x3)
                printf("A < C < B");
        }
        if (x1>x2)
        {
            if (x2>x3)
                printf("C < B < A");
            else if(x2<x3)
            {
                if (x1>x3)
                    printf("B < C < A");
                else if (x3 > x1)
                    printf("B < A < C");



            }

        }

        if (x1 == x2 && x2 == x3)
        {
            if (y1<y2)
            {
                if (y2<y3)
                    printf("A < B < C");
                else if (y2>y3)
                {
                    if (y1>y3)
                        printf("C < A < B");
                    else if (y1 < y3)
                        printf("A < C < B");
                }
                if (y1>y2)
                {
                    if (y2>y3)
                        printf("C < B < A");
                    else if(y2<y3)
                    {
                        if (y1>y3)
                            printf("B < C < A");
                        else if (y3 > y1)
                            printf("B < A < C");



                    }






                }




            }


            return 0;
        }
    }
}