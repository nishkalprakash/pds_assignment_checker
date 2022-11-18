#include <stdio.h>
#include <math.h>
int main()
{
    int x1, x2, x3, y1, y2, y3;
    printf("Enter the three co-ordinates: ");
    scanf("%d%d%d%d%d%d", &x1, &y1, &x2,&y2, &x3, &y3);
    float a,b,c;
    a = sqrt((x1 - x2)*(x1-x2) + (y1-y2)*(y1-y2));
    b = sqrt((x3 - x2)*(x3-x2) + (y3-y2)*(y3-y2));
    c = sqrt((x1 - x3)*(x1-x3) + (y1-y3)*(y1-y3));
    if(a>b && a>c)
    {
        if(a< (b+c))
        {
            printf("This is a valid triangle\n");
            if( a*a == ( c*c + b*b)) {printf("This is a right-angled triangle");}
            else if ( a*a < ( c*c + b*b)) {printf("This is a acute-angled triangle ");}
            else if ( a*a > ( c*c + b*b)) {printf("This is a obtuse-angled triangle ");}
        }
        else {printf("This is an invalid triangle");}
    }

    if(b>a && b>c)
    {
        if(b < (a+c))
        {
            printf("This is a valid triangle\n");
            if( b*b == ( c*c + a*a)) {printf("This is a right-angled triangle");}
            else if ( b*b < ( c*c + a*a)) {printf("This is a acute-angled triangle ");}
            else if ( b*b > ( c*c + a*a)) {printf("This is a obtuse-angled triangle ");}
        }
        else {printf("This is an invalid triangle");}
    }

    if(c>b && c>a)
    {
        if(c < (a+b))
        {
            printf("This is a valid triangle\n");
            if( c*c == ( a*a + b*b)) {printf("This is a right-angled triangle");}
            else if ( c*c < ( a*a + b*b)) {printf("This is a acute-angled triangle ");}
            else if ( c*c > ( a*a + b*b)) {printf("This is a obtuse-angled triangle ");}
        }
        else {printf("This is an invalid triangle");}
    }
}