#include <stdio.h>
#include <math.h>

 int main () {
float x1 , x2, x3 , y1, y2, y3 , z1 ,z2 ,z3 , d1 ,d2, s1, s2, s3, f1, f2, f3;


    printf( " enter coordinate A") ;
    scanf ("%f %f %f" , &x1 , &y1 , &z1);
      printf( " enter coordinate B");
    scanf ( "%f %f %f", &x2 , &y2 , &z2);
     printf( " enter coordinate C");
    scanf ( "%f %f %f" , &x3 , &y3 , &z3);
    printf ("A is (%f ,%f,%f) and B is (%f ,%f,%f) and C is (%f ,%f,%f)" , x1 ,x2 ,x3 , y1 , y2 ,y3 , z1 , z2 ,z3);
    d1=sqrt(pow(x1-x2,2) + pow(y1-y2,2) + pow(z1-z2,2));
    d2=sqrt(pow(x1-x3,2) + pow(y1-y3,2) + pow(z1-z3,2));
    s1= (x1-x2)/d1;
    s2= (y1-y2)/d1;
    s3= (z1-z2)/d1;
    f1= (x1-x3)/d2;
    f2= (y1-y3)/d2;
    f3= (z1-z3)/d2;
    if((s1==f1)&&(s2==f2) &&(s3==f3)) {
        printf ("the points are collinear");
    }
    else {
        printf ("the points are not collinear");
    }





    return 0;
 }
