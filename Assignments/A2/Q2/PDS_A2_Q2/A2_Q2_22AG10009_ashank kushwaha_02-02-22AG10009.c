#include <stdio.h>  //importing input output header file
#include <math.h>   //importing math library
int main(){
    double alpha,sigma,radius,Ts,D,tp; //input of predefined values
    alpha=0.306;
    sigma=1.2;
    radius=6.96e8;
    Ts=1.3654e-11;
    D=1.496e11;

    //solving with predefined values
    tp=(Ts*(sqrt(radius*sqrt((1-alpha)/sigma)/(2*D))));
    printf("output from predefined values is %le\n",tp);

    //taking input from user to compute value
    printf("enter alpha,sigma,radius,ts,D,tp");
    scanf("%lf%lf%le%le%le",&alpha,&sigma,&radius,&Ts,&D,&tp);             //input from user
    tp=(Ts*(sqrt(radius*sqrt((1-alpha)/sigma)/(2*D))));
    printf("output from value entered by user %le\n",tp);                  //output of computed value

    //findings and observations
    //values printed from predefined values and from user input values are coming out to be the same
    //output is in order of -13
    return 0;
}
