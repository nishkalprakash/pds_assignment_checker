#include <stdio.h>
#include <math.h>

int main()
{
 int a, b, c, d, x1, y1, x2, y2, p, q;
 printf(" enter the coordinates of bottom left corner");
 scanf("%d%d", &a , &b);
 printf( "enter the coordinates of top right corner");
 scanf("%d%d", &c , &d);

(sqrt( ( pow (x1-a,2))+(pow (y1-b,2) )))+(sqrt( ( pow (x1-c,2))+(pow (y1-d,2) )) )
 ==(sqrt( ( pow (a-c,2))+(pow (b-d,2) )));

 (y1-b)*(y1-d)==(a-x1)*(x1-c);

 x2 == a + c - x1;
 y2 == b + d - y1;

 printf("the four corners of the rectangle are (%d,%d),(%d,%d),(%d,%d),(%d,%d)",a, b, x1, y1, c, d, x2, y2);

 printf("enter the point to be checked");
 scanf("%d%d", p,q);

 if
    {(

    (((( p-c)*(d-b) - (a-c)*(q-d))*(( x1-c)*(d-b) - (a-c)*(y1-d))) <= 0) && ((( p-c)*(d-b) - (a-c)*(q-d))(( x2-c)*(d-b) - (a-c)*(y2-d))) >= 0
    &&
    (( x1-a)*(q-y1) - (y1-b)*(p-x1))*(( x1-a)*(d-y1) - (y1-b)*(c-x1)) <=0 &&  (( x1-a)*(q-y1) - (y1-b)*(p-x1))*(( x1-a)*(y2-y1) - (y1-b)*(x2-x1)) <=0;

    printf("the point (%d,%d) is inside the rectangle", p, q);
 else
    printf("the point (%d,%d) is outside the rectangle", p, q);
   )}
}

