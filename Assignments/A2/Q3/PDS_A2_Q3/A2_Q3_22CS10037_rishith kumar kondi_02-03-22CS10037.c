#include<stdio.h>
#include<math.h>
int main()
{
    float x0,y0,u,thetha,a,t,xt,yt;
    printf("enter the coordinates(x0,y0),speed,angle thetha in radians ,accelaration,time");
    scanf("%f,%f,%f,%f,%f,%f",&x0,&y0,&u,&thetha,&a,&t);
    thetha=(thetha*22)/(7*180);
    xt=x0+u*cos(thetha)*t+a*t*t*cos(thetha)/2.0;
    yt=y0+u*sin(thetha)*t+a*t*t*sin(thetha)/2.0;
    printf("(%.2f,%.2f)are the final coordinates",xt,yt);
}