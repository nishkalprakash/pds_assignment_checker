#include<stdio.h> //input output header file
#include<math.h>  //math header file
#define PI 3.14
int main()
{

    float x0,y0,theta,u,a,t,xt,yt; // declaring vvariables
    printf("Enter initial position P as(x0,y0)\n");
    scanf("%f%f",&x0,&y0); //entering values for them
    printf("Enter value for theta\n");
    scanf("%f",&theta);
    printf("Enter initial speed u\n");
    scanf("%f",&u);
    printf("Enter value for uniform acceleration\n");
    scanf("%f",&a);
    printf("Time taken t\n");
    scanf("%f",&t);
    xt=(u*cos(theta*PI/180)*t)+(0.5*a*cos(theta*PI/180)*t*t)+x0; //computing the xt value using sin cos function
    yt=(u*sin(theta*PI/180)*t)+(0.5*a*sin(theta*PI/180)*t*t)+y0;
    printf("Position Q(xt,yt)=(%f,%f)",xt,yt);
    return 0;
}
