#include<stdio.h>
#include<math.h>

void main(){
    double x,y,u,theta,a,t;
    double xt,yt;
    printf("Enter the following values:\n");  //taking input from the user

    printf("x:");       //initial x coordinate
    scanf("%lf",&x);

    printf("y:");       //initial y coordinate
    scanf("%lf",&y);

    printf("theta:");   //taking theta in degrees
    scanf("%lf",&theta);

    printf("u:");       //initial velocity
    scanf("%lf",&u);

    printf("a:");       //acceleration
    scanf("%lf",&a);

    printf("t:");       //time
    scanf("%lf",&t);


    double rad_theta=(theta*M_PI)/180.0;      //converting degree to radian
    double displacement;

    displacement=(u*t)+(a*t*t)/2;           //calculating displacement of object in time t

    xt=x+(displacement*cos(rad_theta));     //calculating new x coordinate of the object
    yt=y+(displacement*sin(rad_theta));     //calculating new y coordinate of the object

    printf("Q(xt,yt) = Q(%lf,%lf)",xt,yt);  //printing the new position of the object.
}
