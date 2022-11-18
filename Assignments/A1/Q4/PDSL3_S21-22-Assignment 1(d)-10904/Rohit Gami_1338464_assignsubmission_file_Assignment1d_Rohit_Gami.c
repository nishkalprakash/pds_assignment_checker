#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int x1,y1,x2,y2,x3,y3;
    float a,b,c;
    printf("Enter the coordinates of first point\n");
    scanf("%d%d",&x1,&y1);
    printf("Enter the coordinates of second point\n");
    scanf("%d%d",&x2,&y3);
    printf("Enter the coordinates of third point\n");
    scanf("%d%d",&x3,&y3);
    a= sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    b= sqrt(pow(x3-x2,2)+pow(y3-y2,2));
    c= sqrt(pow(x1-x3,2)+pow(y1-y3,2));
    if(a> b+c)
    {
        printf("invalid triangle\n");
    }
    else if(b> c+a)
    {
        printf("invalid triangle\n");
    }
    else if(c> a+b)
    {
        printf("invalid triangle\n");
    }
    else
    {
        printf("valid triangle\n");
    }
    if(a>b)
    {
        if(a>c)
        {
            if(pow(a,2)> pow(b,2)+pow(c,2))
            {
                printf("This is obtuse angle triangle\n");
            }
            else if (pow(a,2)==pow(b,2)+pow(c,2))
            {
                printf("this is right angle triangle\n");
            }
            else
            {
                printf("This is acute angle triangle\n");
            }
        }
        else
        {
            if(pow(c,2)> pow(b,2)+pow(a,2))
            {
                printf("This is obtuse angle triangle\n");
            }
            else if (pow(c,2)== pow(b,2)+pow(a,2))
            {
                printf("this is right angle triangle\n");
            }
            else
            {
                printf("This is acute angle triangle\n");
            }
        }
    }
    else
    {
        if(b>c)
        {
            if(pow(b,2)> pow(a,2)+pow(c,2))
            {
                printf("This is obtuse angle triangle\n");
            }
            else if (pow(b,2)== pow(a,2)+pow(c,2))
            {
                printf("this is right angle triangle\n");
            }
            else
            {
                printf("This is acute angle triangle\n");
            }
        }
        else
        {
            if(pow(c,2)> pow(b,2)+pow(a,2))
            {
                printf("This is obtuse angle triangle\n");
            }
            else if (pow(c,2)== pow(b,2)+pow(a,2))
            {
                printf("this is right angle triangle\n");
            }
            else
            {
                printf("This is acute angle triangle\n");
            }
        }
    }
    return 0;
}
