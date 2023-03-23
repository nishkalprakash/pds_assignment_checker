#include<stdio.h>
#include<math.h>

int main(){
    float u,theta,alpha,t,x0,y0;   //declaring all the variables to be used
    printf("Enter the value of u:");     //prompting the user to enter the variables
    scanf("%f",&u);                         //scanning the values
    printf("\nEnter the value of theta:");
    scanf("%f",&theta);
    printf("\nEnter the value of accelaration:");
    scanf("%f",&alpha);
    printf("\nEnter the coordinates of the starting position(x0,y0):");
    scanf("%f %f",&x0,&y0);
    printf("\nEnter time taken:");
    scanf("%f",&t);

    float ux=u*cos((3.14*theta)/180.0);                 // taking components of velocity
    float uy=u*sin((3.14*theta)/180.0);

    float ax=alpha*cos((3.14*theta)/180.0);                 //taking components of accelaration
    float ay=alpha*sin((3.14*theta)/180.0);

    float xt=x0+ux*t+(ax*t*t)/2.0;              //finding coordinates of final position
    float yt=y0+uy*t+(ay*t*t)/2.0;

    printf("final coordinates of the particle is (%f,%f)",xt,yt);   //printing coordinates of the final position


    return 0;




}
