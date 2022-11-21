#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
        double u,E;  //declaring variables
        scanf("%lf %lf",&u,&E); //taking input

          //calculating speed of light
        printf("speed of light is : %f",1/(sqrt(u*E)));  //printing speed of light
}
