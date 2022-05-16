// S N Bibhudutta
// 21EC30043
// E&ECE Department 
// Package: Codeblocks
// Assignment 1

#include<stdio.h>

#include<math.h>

int main()
{
    float x1,y1,x2,y2,x3,y3;

    printf("The coordinates of first point are:\n");
    scanf("%f,%f", &x1,&y1);

    printf("The coordinates of second point are:\n");
    scanf("%f,%f", &x2,&y2);

    printf("The coordinates of third point are:\n");
    scanf("%f,%f", &x3,&y3);

    float a = sqrt(pow((x1-x2),2.0) + pow((y1-y2),2.0));
    float b = sqrt(pow((x2-x3),2.0) + pow((y2-y3),2.0));
    float c = sqrt(pow((x3-x1),2.0) + pow((y3-y1),2.0));

    if ((a>b)&&(a>c))
    {
        if (a<b+c)
        {
            printf("This is a valid triangle");
            if (pow(b,2)+pow(c,2)>pow(a,2))
                printf("The triangle is acute angled triangle");
            else if (pow(b,2)+pow(c,2)==pow(a,2))
                printf("The triangle is right angled triangle");
            else if (pow(b,2)+pow(c,2)<pow(a,2))
                printf("The triangle is obtuse angled triangle");
        }
        else 
            printf("The triangle is not valid");
    }
    else if ((c>b)&&(c>a))
    {
        if (c<b+a)
        {
            printf("This is a valid triangle");
            if (pow(b,2)+pow(a,2)>pow(c,2))
                printf("The triangle is acute angled triangle");
            else if (pow(b,2)+pow(a,2)==pow(c,2))
                printf("The triangle is right angled triangle");
            else if (pow(b,2)+pow(a,2)<pow(c,2))
                printf("The triangle is obtuse angled triangle");
        }
        else 
            printf("The triangle is not valid");
    }
    else if ((b>a)&&(b>c))
    
        if (b<c+a)
        {
            printf("This is a valid triangle");
            if (pow(a,2)+pow(c,2)>pow(b,2))
                printf("The triangle is acute angled triangle");
            else if (pow(a,2)+pow(c,2)==pow(b,2))
                printf("The triangle is right angled triangle");
            else if (pow(a,2)+pow(c,2)<pow(b,2))
                printf("The triangle is obtuse angled triangle");
        }
        else 
            printf("The triangle is not valid");

    return 0;
    
}