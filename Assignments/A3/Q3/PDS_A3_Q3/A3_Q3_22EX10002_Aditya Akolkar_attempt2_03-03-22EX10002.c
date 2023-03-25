#include <stdio.h>
int main()
{
    double x1, x2, x3, y1, y2, y3, z1, z2, z3; //coordinates are declared as double to get point values we can declare them as float as well

    //Program to read user input
    printf("Enter x coordinate of point A: \n");
    scanf("%lf", &x1);
    printf("Enter y coordinate of point A: \n");
    scanf("%lf", &y1);
    printf("Enter z coordinate of point A: \n");
    scanf("%lf", &z1);
    printf("Enter x coordinate of point B: \n");
    scanf("%lf", &x2);
    printf("Enter y coordinate of point B: \n");
    scanf("%lf", &y2);
    printf("Enter z coordinate of point B: \n");
    scanf("%lf", &z2);
    printf("Enter x coordinate of point C: \n");
    scanf("%lf", &x3);
    printf("Enter y coordinate of point C: \n");
    scanf("%lf", &y3);
    printf("Enter z coordinate of point C: \n");
    scanf("%lf", &z3);

    //Program to print user input as coordinates
    printf("A(x1,y1,z1) : (%0.2lf,%0.2lf,%0.2lf) \n", x1, y1, z1);
    printf("B(x2,y2,z2) : (%0.2lf,%0.2lf,%0.2lf) \n", x2, y2, z2);
    printf("C(x3,y3,z3) : (%0.2lf,%0.2lf,%0.2lf) \n\n", x3, y3, z3);

    //program to check if given points are collinear (Done by formula of area of Triangle)
    if(0.5*((x1*((y2 * z3)-(z2 * y3))) - (y1*((x2 * z3)-(z2 * x3))) + (z1*((x2 * y3)-(y2 * x3)))) == 0)
    {
        printf("The give three points are Collinear\n\n");
    }
    else{
        printf("The given three points are not collinear\n\n");
    }

    //program to print coordinates in collating sequence as specified in question
    if((x1<x2 && x2<x3)){
        printf("A(%0.2lf,%0.2lf,%0.2lf) < B(%0.2lf,%0.2lf,%0.2lf) < C(%0.2lf,%0.2lf,%0.2lf)\n", x1, y1, z1, x2, y2, z2, x3, y3, z3);
    }
    else if((x1<x3 && x3<x2)){
        printf("A(%0.2lf,%0.2lf,%0.2lf) < C(%0.2lf,%0.2lf,%0.2lf) < B(%0.2lf,%0.2lf,%0.2lf)\n", x1, y1, z1, x3, y3, z3, x2, y2, z2);
    }
    else if((x2<x1 && x1<x3)){
        printf("B(%0.2lf,%0.2lf,%0.2lf) < A(%0.2lf,%0.2lf,%0.2lf) < C(%0.2lf,%0.2lf,%0.2lf)\n", x2, y2, z2, x1, y1, z1, x3, y3, z3);
    }
    else if((x2<x3 && x3<x1)){
        printf("B(%0.2lf,%0.2lf,%0.2lf) < C(%0.2lf,%0.2lf,%0.2lf) < A(%0.2lf,%0.2lf,%0.2lf)\n", x2, y2, z2, x3, y3, z3, x1, y1, z1);
    }
    else if((x3<x1 && x1<x2)){
        printf("C(%0.2lf,%0.2lf,%0.2lf) < A(%0.2lf,%0.2lf,%0.2lf) < B(%0.2lf,%0.2lf,%0.2lf)\n", x3, y3, z3, x1, y1, z1, x2, y2, z2);
    }
    else if((x3<x2 && x2<x1)){
        printf("C(%0.2lf,%0.2lf,%0.2lf) < B(%0.2lf,%0.2lf,%0.2lf) < A(%0.2lf,%0.2lf,%0.2lf)\n", x3, y3, z3, x2, y2, z2, x1, y1, z1);
    }//Y sequence comparing code
    else if(x1 == x2 && x2 == x3){
            if((y1<y2 && y2<y3)){
        printf("A(%0.2lf,%0.2lf,%0.2lf) < B(%0.2lf,%0.2lf,%0.2lf) < C(%0.2lf,%0.2lf,%0.2lf)\n", x1, y1, z1, x2, y2, z2, x3, y3, z3);
    }
    else if((y1<y3 && y3<y2)){
        printf("A(%0.2lf,%0.2lf,%0.2lf) < C(%0.2lf,%0.2lf,%0.2lf) < B(%0.2lf,%0.2lf,%0.2lf)\n", x1, y1, z1, x3, y3, z3, x2, y2, z2);
    }
    else if((y2<y1  && y1<y3)){
        printf("B(%0.2lf,%0.2lf,%0.2lf) < A(%0.2lf,%0.2lf,%0.2lf) < C(%0.2lf,%0.2lf,%0.2lf)\n", x2, y2, z2, x1, y1, z1, x3, y3, z3);
    }
    else if((y2<y3 && y3<y1)){
        printf("B(%0.2lf,%0.2lf,%0.2lf) < C(%0.2lf,%0.2lf,%0.2lf) < A(%0.2lf,%0.2lf,%0.2lf)\n", x2, y2, z2, x3, y3, z3, x1, y1, z1);
    }
    else if((y3<y1 && y1<y2)){
        printf("C(%0.2lf,%0.2lf,%0.2lf) < A(%0.2lf,%0.2lf,%0.2lf) < B(%0.2lf,%0.2lf,%0.2lf)\n", x3, y3, z3, x1, y1, z1, x2, y2, z2);
    }
    else if((y3<y2 && y2<y1)){
        printf("C(%0.2lf,%0.2lf,%0.2lf) < B(%0.2lf,%0.2lf,%0.2lf) < A(%0.2lf,%0.2lf,%0.2lf)\n", x3, y3, z3, x2, y2, z2, x1, y1, z1);

    }
    else if(y1 == y2 && y2 == y3){
            if((z1<z2 && z2<z3)){
        printf("A(%0.2lf,%0.2lf,%0.2lf) < B(%0.2lf,%0.2lf,%0.2lf) < C(%0.2lf,%0.2lf,%0.2lf)\n", x1, y1, z1, x2, y2, z2, x3, y3, z3);
    }
    else if((z1<z3 && z3<z2)){
        printf("A(%0.2lf,%0.2lf,%0.2lf) < C(%0.2lf,%0.2lf,%0.2lf) < B(%0.2lf,%0.2lf,%0.2lf)\n", x1, y1, z1, x3, y3, z3, x2, y2, z2);
    }
    else if((z2<z1 && z1<z3)){
        printf("B(%0.2lf,%0.2lf,%0.2lf) < A(%0.2lf,%0.2lf,%0.2lf) < C(%0.2lf,%0.2lf,%0.2lf)\n", x2, y2, z2, x1, y1, z1, x3, y3, z3);
    }
    else if((z2<z3&& z3<z1)){
        printf("B(%0.2lf,%0.2lf,%0.2lf) < C(%0.2lf,%0.2lf,%0.2lf) < A(%0.2lf,%0.2lf,%0.2lf)\n", x2, y2, z2, x3, y3, z3, x1, y1, z1);
    }
    else if((z3<z1 && z1<z2)){
        printf("C(%0.2lf,%0.2lf,%0.2lf) < A(%0.2lf,%0.2lf,%0.2lf) < B(%0.2lf,%0.2lf,%0.2lf)\n", x3, y3, z3, x1, y1, z1, x2, y2, z2);
    }
    else if((z3<z2 && z2<z1)){
        printf("C(%0.2lf,%0.2lf,%0.2lf) < B(%0.2lf,%0.2lf,%0.2lf) < A(%0.2lf,%0.2lf,%0.2lf)\n", x3, y3, z3, x2, y2, z2, x1, y1, z1);

    }
    }
    }
    else{
        printf("A(%0.2lf,%0.2lf,%0.2lf) < B(%0.2lf,%0.2lf,%0.2lf) < C(%0.2lf,%0.2lf,%0.2lf)\n", x1, y1, z1, x2, y2, z2, x3, y3, z3);
    }
    return 0;
}
