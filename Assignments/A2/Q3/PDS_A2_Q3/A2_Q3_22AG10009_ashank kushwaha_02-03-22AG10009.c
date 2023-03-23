#include <stdio.h>
#include <math.h>
int main(){
    double x0,y0,u,theta,dist,t,acc,pi,xp,yp;  //theta:angle wrt to x axis ,dist:distance travelled along line , acc:acceleration
    printf("enter values for x0,y0,theta,u,acc,t with one space in between respective values");
    scanf("%lf%lf%lf%lf%lf%lf",&x0,&y0,&theta,&u,&acc,&t);  //getting input from user

    //calculating distance
    dist=(u*t)+((0.5*acc)*pow(t,2));

    pi=M_PI;//pi variable to store value of pi
    theta=theta*(pi/180);      //changing degrees into radians

    //final coordinates
    xp=x0+(dist*(cos(theta)));
    yp=y0+(dist*(sin(theta)));

    //printing of final result
    printf("final coordinate of x is %lf\n",xp);
    printf("final coordinate of y is %lf\n",yp);

    return 0;
}
