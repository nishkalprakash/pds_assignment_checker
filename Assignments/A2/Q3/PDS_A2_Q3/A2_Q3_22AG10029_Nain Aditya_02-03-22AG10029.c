#include<stdio.h>
#include<math.h>
int main(){


    float x0 , y0 , u , theta , time , xt , yt,a ;
    printf ("enter the initial x and y coordinates \n");
    scanf ("%f%f", &x0 , &y0 );
    printf ("enter the initial velocity and acceleration\n");
    scanf ("%f%f", &u,&a );
    printf ("enter the angle in degrees\n" );
    scanf ("%f", &theta);
    printf ("enter the time\n ");
    scanf ("%f", &time);

    yt =  x0 + (u*sin(theta*(M_PI/180))*time + (1/2)*a*sin(theta*(M_PI/180))*time*time);
    xt =  y0 + (u*cos(theta*(M_PI/180))*time + (1/2)*a*cos(theta*(M_PI/180))*time*time);
    printf ("final x and y coordinates are %f %f", xt , yt);
    return 0;

}

