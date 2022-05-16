/* Name   : Pasupulety Chethan Krishna Venkat
   Dept   : Computer science
   Roll no: 21CS30036
   Package: Code blocks
   Os     : windows
*/

#include <math.h>
#include <stdio.h>

int main()
{
    int x1,y1,x2,y2,x3,y3;

    printf("Enter coordinates of first point: \n");
    scanf("%d%d", &x1, &y1);

    printf("Enter coordinates of second point: \n");
    scanf("%d%d", &x2, &y2);

    printf("Enter coordinates of third point: \n");
    scanf("%d%d", &x3, &y3);

    double a,b,c;
    a = sqrt( (x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1) );
    b = sqrt( (x2 - x3)*(x2 - x3) + (y2 - y3)*(y2 - y3) );
    c = sqrt( (x3 - x1)*(x3 - x1) + (y3 - y1)*(y3 - y1) );

    if((a+b>c)&&(b+c>a)&&(a+c>b)){
        printf("this is a valid triangle\n");

        if (a >= b && a >= c){
            if (a*a==b*b+c*c){
                printf("this is a right angled triangle");
            } else if (a*a>b*b+c*c){
                printf("this is an obtuse angled triangle");

            } else printf("this is an acute angled triangle");
        }
        if (b >= a && b >= c){
            if ((b*b)==a*a+c*c){
                printf("this is a right angled triangle");
            } else if (b*b>a*a+c*c){
                printf("this is an obtuse angled triangle");

            } else printf("this is an acute angled triangle");
        }
        if (c >= b && c >= a){
            if ((c*c)==b*b+a*a){
                printf("this is a right angled triangle");
            } else if (c*c>b*b+a*a){
                printf("this is an obtuse angled triangle");

            } else printf("this is an acute angled triangle");
        }





    } else{
        printf("this is an invalid triangle");
    }





    return 0;
}
