//Aryan Kubal
//21MT30012
//ASSIGNMENT1a
#include <stdio.h>

int main() {
    // insert code here...
    float a,u,alpha,t; // u=initial speed, alpha=accelaration
    printf("enter the value of a,u and alpha:");
    scanf("%f%f%f",&a,&u,&alpha); // input a,u and alpha
    printf("\nenter the time: ");
    scanf("%f",&t);
    float distance= a+ u*t+ .5*alpha*t*t; // calculating distance
    printf("\ndistance=%f",distance);
    return 0;
}