/*
Name: R S Thiruvignesh
Roll no.:21BT10022
Department: Biotechnology 4yr
Package: Code blocks
Operating system: Windows 10 */

#include <stdio.h>
#include <math.h>

void main(){
    float x0,e,x1;
    int maxit;
    int i;
    float err=INFINITY;

    printf("x0=");
    scanf("%f",&x0);
    printf("e=");
    scanf("%f",&e);
    printf("Max iterations=");
    scanf("%d",&maxit);

    for (i=1;i<=maxit;i++){
        if (err<e) break;
        x1=x0-(pow(x0,3)-25.0)/(3.0*pow(x0,2));
        err=x0-x1;
        printf("%d \t %f \t %f \t %f\n",i,x0,x1,err);
        x0=x1;
    }
    printf("The square root is %f",x1);


}
