#include<stdio.h>
int main()
{
    double a,b,c,x1,y1,x2,y2,x3,y3;
    printf("enter the coordinates (x1,y1) in the given order\n");
    scanf("%lf%lf",&x1,&y1);
    printf("enter the coordinates (x2,y2) in the given order\n");
    scanf("%lf%lf",&x2,&y2);
    printf("enter the coordinates (x3,y3) in the given order\n");
    scanf("%lf%lf",&x3,&y3);
    a=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    b=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
    c=sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
    if (a+b>c&&b+c>a&&a+c>b)
    {
        printf("THIS IS A VALID TRIANGLE\n");

    }
    else
        {printf("THIS IS NOT VALID TRIANGLE");

        }
    if(a>b&&a>c)
    {
        if(a*a==(b*b+c*c))
        {
            printf("this is right triangle");
        }
        if(a*a>b*b+c*c)
        {
            printf("this is an obtuse-angled triangle");
        }
        if(a*a<b*b+c*c)
        {
            printf("this is an acute angled-triangle");
        }
    }
    if(b>a&&b>c)
    {
        if(b*b==(a*a+c*c))
        {
            printf("this is right triangle");
        }
        if(b*b>a*a+c*c)
        {
            printf("this is an obtuse-angled triangle");
        }
        if(b*b<a*a+c*c)
        {
            printf("this is an acute angled-triangle");
        }
    }
    if(c>b&&c>a)
    {
        if(c*c==(b*b+a*a))
        {
            printf("this is right triangle");
        }
        if(c*c>b*b+a*a)
        {
            printf("this is an obtuse-angled triangle");
        }
        if(c*c<b*b+a*a)
        {
            printf("this is an acute angled-triangle");
        }
    }
    if(a==b&&a==c)
    {
        printf("this is acute angled triangle");
    }
    if(c==b&&a!=c)
    {
        if(a*a==(b*b+c*c))
        {
            printf("this is right triangle");
        }
        if(a*a>b*b+c*c)
        {
            printf("this is an obtuse-angled triangle");
        }
        if(a*a<b*b+c*c)
        {
            printf("this is an acute angled-triangle");
        }
    }
     if(a==b&&a!=c)
    {
        if(c*c==(b*b+a*a))
        {
            printf("this is right triangle");
        }
        if(c*c>b*b+a*a)
        {
            printf("this is an obtuse-angled triangle");
        }
        if(c*c<b*b+a*a)
        {
            printf("this is an acute angled-triangle");
        }
    }
     if(c==a&&a!=b)
    {
        if(b*b==(a*a+c*c))
        {
            printf("this is right triangle");
        }
        if(b*b>a*a+c*c)
        {
            printf("this is an obtuse-angled triangle");
        }
        if(b*b<a*a+c*c)
        {
            printf("this is an acute angled-triangle");
        }
    }
    getch();
    return 0;

}
