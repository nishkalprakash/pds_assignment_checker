#include <stdio.h>
#include <math.h>
int main(){
    //declaration of variables
    int x0, y0, th, a, t, s;
    double u,sy,sx,th1;
    //taking inputs from the user
    printf("Enter x0\n");
    scanf("%d",&x0);
    printf("Enter y0\n");
    scanf("%d",&y0);
    printf("Enter theta\n");
    scanf("%d",&th);
    printf("Enter a:\n");
    scanf("%d",&a);
    printf("Enter t:\n");
    scanf("%d",&t);
    printf("Enter u:\n");
    scanf("%lf",&u);
    th1 = th*(2*M_PI/360);
    sx = x0 + (u*cos(th1)*t) + (0.5*a*cos(th1)*t*t); // calculation of x coordinate
    sy = y0 + (u*sin(th1)*t) + (0.5*a*sin(th1)*t*t); //calculation of y coordinate
    printf("The new position is (xt,yt):(%If,%If)",sx,sy); //printing the result
    return 0;



}
