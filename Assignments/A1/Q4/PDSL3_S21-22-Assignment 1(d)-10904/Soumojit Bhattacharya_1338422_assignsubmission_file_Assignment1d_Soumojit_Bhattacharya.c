/*Soumojit Bhattacharya 
21EC10071 
macos visual studio code*/
#include <stdio.h>
#include <math.h>

int main()
{
    double x1,y1,x2,y2,x3,y3;
    double a,b,c,temp;
    //input coordinates
    printf("enter the coordinates of the first point");
    scanf("%lf%lf", &x1, &y1);
    printf("enter the coordinates of the second point");
    scanf("%lf%lf", &x2, &y2);
    printf("enter the coordinates of the third point");
    scanf("%lf%lf", &x3, &y3);
    //
    a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    b=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
    c=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
    //find biggest side out of a,b,c and store it in a using swapping 
    //temp is used to swap
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
    //if a is greater than equal to b+c triangle is invalid
    if(a>=b+c)
    printf("This is a invalid triangle");
    //else triangle is valid
    else
    {
        printf("This is a valid triangle\n");
        //a^2=b^2+c^2+2*b*c*cos(theta)
        //using relational operators the sign of cos(theta) is computed(indirectly)
        //theta is the biggest angle since it is opposite to a which is the biggest side
        //so using theta the type of triangle is computed
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