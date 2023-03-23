#include <stdio.h>
int main()
{
     float xi,yi,a,u,theta,t;//initializing all the variables

     scanf("%f%f%f%f%f%f",&xi,&yi,&theta,&u,&a,&t);        //taking the values from the user

     theta=theta*(3.14152/180);      //converting theta to radian

     float ux=u*cos(theta);      //storing the x component of initial speed in ux
     float uy=u*sin(theta);      //storing the y component of initial speed in uy
     float ax=a*cos(theta);      //storing the x component of initial acceleration in ax
     float ay=a*sin(theta);      //storing the y component of initial acceleration in ay

     float xf=ux*t+0.5*ax*t*t; //calulating the distance advanced in x direction
     float yf=uy*t+0.5*ay*t*t; //calulating the distance advanced in y direction

     xf=xi+ xf;                //the final postion in x
     yf=yi+ yf;                //the final postion in y

     printf("Qx %f Qy %f",xf,yf); //the output

     return 0;
}
