#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Section 2
Roll No: 22HS10018
Name: Dilip Kumar Rewar
Assignment No: 6
Description: Checking for Fibonacchi number
*/
typedef struct vec{
    int *component;
}Vector;

void value(Vector X,int n){
    for(int i=0;i<n;i++){
    scanf("%d",(X.component+i));
}
}

int main(){
    Vector X,Y;
    int n1,n2,sum1=0,sum2=0,mult=0;
    float cosx,mod_X=0,mod_Y=0;

    printf("Dimensions of vector X: ");
    scanf("%d",&n1);
    X.component = (int*) malloc(n1*sizeof(int));
    printf("\nComponents of vector X:");
    value(X,n1);

    printf("Dimensions of vector Y: ");
    scanf("%d",&n2);
    Y.component = (int*) malloc(n2*sizeof(int));
    printf("\nComponents of vector Y:");
    value(Y,n2);

    for(int i=0;i<n1;i++){
            mult += *(X.component+i)* *(Y.component+i);
    }
    for(int i=0;i<n1;i++){
        sum1+=(*(X.component+i)* *(X.component+i));
    }
    mod_X = sqrt(sum1);
    for(int i=0;i<n2;i++){
        sum2+=(*(Y.component+i)* *(Y.component+i));
    }
    mod_Y = sqrt(sum2);
    printf("\n|X| = %.2f",mod_X);
    printf("\n|Y| = %.2f",mod_Y);

    cosx += (mult)/(mod_X * mod_Y);
    printf("\ncosx = %f",cosx);

    if(cosx==1){
        printf("Identical Vectors");
    }
    if(abs(cosx)<=0.001){
        printf("Orthogonal Vectors");
    }
    return 0;
}
