/*
Name : S L Maanas
Roll No : 21CH10055
Department : Chemical Engineering
Package : VS Code
Assignment : Assignment 1(d)
*/

#include <stdio.h>
#include <math.h>
int main()
{
    float x1, y1, x2, y2, x3, y3 ;
    printf("Enter the three coordinates: ");
    scanf("(%f, %f), (%f, %f), (%f, %f)", &x1, &y1, &x2, &y2, &x3, &y3);
    float dist1, dist2, dist3 ;
    dist1 = sqrt(((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1))) ;
    dist2 = sqrt(((x3-x2)*(x3-x2)) + ((y3-y2)*(y3-y2))) ;
    dist3 = sqrt(((x3-x1)*(x3-x1)) + ((y3-y1)*(y3-y1))) ;
    if (dist1 >= dist2 && dist1 >= dist3)
    {
        if ((dist2 + dist3) > (dist1) )
        {
            printf("It is a valid triangle\n");
        }
        if ((dist1)*(dist1) < (dist2)*(dist2) + (dist3)*(dist3))
        {
            printf("It is an acute angeled triangle.\n");
        }
        if ((dist1)*(dist1) > (dist2)*(dist2) + (dist3)*(dist3))
        {
            printf("It is an obtuse angeled triangle.\n");
        }
        if ((dist1)*(dist1) == (dist2)*(dist2) + (dist3)*(dist3))
        {
            printf("It is a right angeled triangle.\n");
        }
    }
    if (dist2 >= dist1 && dist2 >= dist3)
    {
        if ((dist1 + dist3) > (dist2) )
        {
            printf("It is a valid triangle\n");
        }
        if ((dist2)*(dist2) < (dist1)*(dist1) + (dist3)*(dist3))
        {
            printf("It is an acute angeled triangle.\n");
        }
        if ((dist2)*(dist2) > (dist1)*(dist1) + (dist3)*(dist3))
        {
            printf("It is an obtuse angeled triangle.\n");
        }
        if ((dist2)*(dist2) == (dist1)*(dist1) + (dist3)*(dist3))
        {
            printf("It is a right angeled triangle.\n");
        }
    }
    if (dist3 >= dist2 && dist3 >= dist1)
    {
        if ((dist2 + dist1) > dist3)
        {
            printf("It is a valid triangle\n");
        }
        if ((dist3)*(dist3) < (dist1)*(dist1) + (dist2)*(dist2))
        {
            printf("It is an acute angeled triangle.\n");
        }
        if ((dist3)*(dist3) > (dist1)*(dist1) + (dist2)*(dist2))
        {
            printf("It is an obtuse angeled triangle.\n");
        }
        if ((dist3)*(dist3) == (dist1)*(dist1) + (dist2)*(dist2))
        {
            printf("It is a right angeled triangle.\n");
        }
    }
    return 0;
}