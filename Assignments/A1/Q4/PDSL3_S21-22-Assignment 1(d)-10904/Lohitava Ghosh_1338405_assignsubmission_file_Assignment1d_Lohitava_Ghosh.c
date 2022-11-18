/*
Name:Lohitava Ghosh
Roll no.:21AE10023
Department:Aerospace Engg Btech.
Package:code blocks
Operating system: Windows
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float x1,x2,x3,y1,y2,y3,a,b,c,max;
    printf("Enter the three coordinates: ");
    scanf("(%f,%f),(%f,%f),(%f,%f)",&x1,&y1,&x2,&y2,&x3,&y3);
    a=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    b=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
    c=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
    max=a;
    if((a+b>c) && (a+c>b) && (c+b>a))
    {
        printf("This is a valid triangle\n");
        if(b>max)
        {
            max=b;
        }
        else if(c>max)
        {
            max=c;
        }
        if(max==a)
        {
            if(round(a*a)==b*b+c*c)
            {
                printf("This is a right angled triangle");
            }
            else if(a*a<b*b+c*c)
            {
                printf("This is an acute angled triangle");
            }
            else
            {
                printf("This is an obtuse angled triangle");
            }
        }
        else if(max==b)
        {
            if(round(b*b)==a*a+c*c)
            {
                printf("This is a right angled triangle");
            }
            else if(b*b<a*a+c*c)
            {
                printf("This is an acute angled triangle");
            }
            else
            {
                printf("This is an obtuse angled triangle");
            }
        }
        else
        {
            if(round(c*c)==b*b+a*a)
            {
                printf("This is a right angled triangle");
            }
            else if(c*c<b*b+a*a)
            {
                printf("This is an acute angled triangle");
            }
            else
            {
                printf("This is an obtuse angled triangle");
            }
        }
    }

    return 0;
}
