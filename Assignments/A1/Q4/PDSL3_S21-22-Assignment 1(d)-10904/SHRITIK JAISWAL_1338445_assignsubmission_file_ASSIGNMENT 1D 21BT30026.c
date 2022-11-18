/*Shritik jaiswal
21BT30026
macos visual studio code*/
#include <stdio.h>
#include <math.h>

int main()
{
    double x1,y1,x2,y2,x3,y3;
    double a,b,c,temp;
    printf("enter the coordinates of the first point");
    scanf("%lf%lf", &x1, &y1);
    printf("enter the coordinates of the second point");
    scanf("%lf%lf", &x2, &y2);
    printf("enter the coordinates of the third point");
    scanf("%lf%lf", &x3, &y3);
    a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    b=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
    c=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
    if(b>a)
    {
        temp=a;
        a=b;
        b=temp;
    }
    if(c>a)
    {
        temp=a;
        a=c;
        c=temp;
    }
    if(a>=b+c)
    printf("This is a invalid triangle");
    else
    {
        printf("This is a valid triangle\n"); 
        if(a*a==b*b+c*c)
        printf("This is a right angled triangle");
        else
        if(a*a>b*b+c*c)
        printf("This is a obtuse angled triangle");
        else
        if(a*a<b*b+c*c)
        printf("This is a acute angled triangle");
    }
return 0;
}