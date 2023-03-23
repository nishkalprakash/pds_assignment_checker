#include<stdio.h>
#include<math.h>
int main(){
    float x0,y0,u,theta,t,s,a,xt,yt,r;
    //a is alpha(acceleration)
    //s is distance travelled by the particle in the time t
    // r is in radians for the value of theta
    printf("give the value of x0,y0,theta,u,a,t : ");
    scanf("%f%f%f%f%f%f" , &x0 , &y0 , &theta , &u , &a , &t);
    r=(M_PI*theta)/180;
    s=u*t+a*t*t/2;

    xt=x0+s*cos(r);
     yt=y0+s*sin(r);
    printf("the coordinates of the points after time t is %f %f" , xt,yt);

}
