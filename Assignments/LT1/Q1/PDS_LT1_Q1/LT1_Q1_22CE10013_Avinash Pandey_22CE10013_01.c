#include<stdio.h>

int main(){

float x1, x2, x3, x4, y1, y2, y3, y4 ;                                                                                     //  declaration of variables to store coordinates of points.




printf("enter the coordinates of points in this order : x1, x2, x3, x4, y1, y2, y3, y4") ;

scanf("%f,%f %f,%f %f,%f %f,%f", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4) ;                                                   // take the input from user

float A1, A2, A3, A4 ;




A1 = 0.5* (  x2*(y3 - y4) + x3*(y4 - y2) + x4*(y2 - y3)  ) ;                                                                  // calculation of area of triangles which can be formed using four points

A2 = 0.5* (  x1*(y3 - y4) + x3*(y4 - y1) + x4*(y1 - y3)  ) ;

A3 = 0.5* (  x1*(y2 - y4) + x2*(y4 - y1) + x4*(y1 - y2)  ) ;

A4 = 0.5* (  x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2)  ) ;




if ( A1 < 0) A1 = (-1)*(A1) ;                                     // make area positive.

if ( A2 < 0) A2 = (-1)*(A2) ;

if ( A3 < 0) A3 = (-1)*(A3) ;

if ( A4 < 0) A4 = (-1)*(A4) ;



if ( A1<=A2 && A1<=A3 && A1<=A4 ){                                                                                    // check if A1 is the smallest area

    printf("points having minimum area : (%f,%f), (%f,%f), (%f,%f) \n", x2, y2, x3, y3, x4, y4 ) ;                    // print the points corresponding to minimum area

    printf("Area = %f", A1) ;                                                                                         // print the minimum area

}


else if ( A2<=A1 && A2<=A3 && A2<=A4 ){

    printf("points having minimum area : (%f,%f), (%f,%f), (%f,%f) \n", x1, y1, x3, y3, x4, y4 ) ;

    printf("Area = %f", A2) ;

}


else if ( A3<=A2 && A3<=A1 && A3<=A4 ){

    printf("points having minimum area : (%f,%f), (%f,%f), (%f,%f) \n", x2, y2, x1, y1, x4, y4 ) ;

    printf("Area = %f", A3) ;

}


else if ( A4<=A2 && A4<=A3 && A4<=A1 ){

    printf("points having minimum area : (%f,%f), (%f,%f), (%f,%f) \n", x2, y2, x3, y3, x1, y1 ) ;

    printf("Area = %f", A4) ;

}




return 0;





}
