#include <stdio.h>                                     //including the standard input output library
#include <math.h>                                      //including the math library

int main()
{
    double Y,dis;                                      //declaring the variables Y and dis
    int n;                                             //declaring the variable n
    scanf("%lf%d",&Y,&n);                              //taking Y and n as input
    dis = Y + Y*(((0.5)*(pow(0.25,n-1)-1))/(-0.75));   //evaluating the total distance covered by the ball
    printf("%lf",dis);                                 //printing the total distance covered
    return 0;                                          //the int main() will return 0
}
