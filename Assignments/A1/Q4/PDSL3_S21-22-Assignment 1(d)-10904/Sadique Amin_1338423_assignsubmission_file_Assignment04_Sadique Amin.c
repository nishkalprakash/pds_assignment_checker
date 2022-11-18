/*
Name: Sadique Amin
Roll Number: 21CE30027
Department: Civil Engineering
Package used: <math.h>,<stdio.h>
Assignment Class: 6
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float x1, x2, x3, y1, y2, y3, d, e, f;
    printf("Enter the first coordinates: ");
    scanf("%f%f",&x1,&y1);
    printf("Enter the second coordinates: ");
    scanf("%f%f",&x2,&y2);
    printf("Enter the third coordinates: ");
    scanf("%f%f",&x3,&y3);

    float a=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
    float b=sqrt(pow((x2-x3),2)+pow((y2-y3),2));
    float c=sqrt(pow((x3-x1),2)+pow((y3-y1),2));

    if(a<=b && a<=c)
    {
        d=a;
        e=fmin(b,c);
        f=fmax(b,c);
    }
    else if(b<=a && b<=c)
    {
        d=b;
        e=fmin(a,c);
        f=fmax(a,c);
    }
    else
    {
        d=c;
        e=fmin(a,b);
        f=fmax(a,b);
    }

    if(d+e>f)
    {
        printf("This is a valid triangle\n");
    }
    else
    {
        printf("This is a invalid triangle\n");
    }

    if(f*f==(d*d+e*e))
    {
        printf("This is a right-angled triangle");
    }
    else if(f*f>(d*d+e*e))
    {
        printf("This is a obtuse-angled triangle");
    }
    else
    {
        printf("This is a acute-angled triangle");
    }
    return 0;
}