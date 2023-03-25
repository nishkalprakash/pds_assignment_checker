#include<stdio.h>
#include<math.h>
int main()
{
    float x1, x2, x3 ,y1 ,y2 ,y3 ,z1,z2 ,z3 , slope1 , slope2,dist1 ,dist2,x,y,z,a,b,c,disto1, disto2, disto3;
    printf("enter the cordinates A : ");
        scanf("%f %f %f", &x1,&y1,&z1);
    printf("enter the cordinates B : ");
        scanf("%f %f %f", &x2,&y2,&z2);
    printf("enter the cordinates C : ");
        scanf("%f %f %f", &x3,&y3,&z3);
    printf("A (x1,y1,z1) : (%4.2f,%4.2f,%4.2f) \nB (x2,y2,z2) : (%4.2f,%4.2f,%4.2f) \nC (x3,y3,z3) : (%4.2f,%4.2f,%4.2f) ",x1,y1,z1,x2,y2,z2,x3,y3,z3);

    dist1=sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1) + (z2-z1)*(z2-z1)) ;
    dist2=sqrt((x3-x1)*(x3-x1) + (y3-y1)*(y3-y1) + (z3-z1)*(z3-z1)) ;
    x= (x2-x1)/dist1 ;
    y= (y2-y1)/dist1 ;
    z= (z2-z1)/dist1 ;
    a= (x3-x1)/dist2 ;
    b= (y3-y1)/dist2 ;
    c= (z3-z1)/dist2 ;
    if (x==a && y==b && z==c)
        printf("\nThe given three points are collinear");

    disto1 = sqrt(x1*x1 + y1*y1 + z1*z1) ;
    disto2 = sqrt(x2*x2 + y2*y2 + z2*z2) ;
    disto3 = sqrt(x3*x3 + y3*y3 + z3*z3) ;

    if
    return 0 ;

}
