/*Name - Modi Meet
Roll No-22ME10053
LAB - 9 Q2)
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct vector{
    int dim;
    int x[20];
};
struct vector A,B;

void call(){
    int i;
    printf("Enter the dimension of vector :");
    scanf("%d",&(A.dim));
    printf("\nEnter the components of vector : ");
    for(i=0;i<(A.dim);i++){
        scanf("%d",&(A.x[i]));
    }
    printf("Enter the dimension of vector :");
    scanf("%d",&(B.dim));
    printf("\nEnter the components of vector : ");
    for(i=0;i<(B.dim);i++){
        scanf("%d",&(B.x[i]));
    }
    if(A.dim != B.dim) exit(1);
}

int dotprod(){
    int i,j;
    int prod = 0;
    for(i=0;i<(A.dim);i++){
        prod += (A.x[i])*(B.x[i]);
    }
    return prod;
}

int ortho(){
    int m = dotprod();
    if(m==0) return 1;
    else return 0;
}

int similar(){
    int m = dotprod();
    int n = m*m;
    int i,j;
    int mag1,mag2;
    for(i=0;i<(A.dim);i++){
        mag1 = (A.x[i])*(A.x[i]);
    }
    for(i=0;i<(B.dim);i++){
        mag2 = (B.x[i])*(B.x[i]);
    }
    float y = (A.x[0])/(B.x[0]);
    for(i=1;i<(A.dim);i++){
        if(y != (A.x[i])/(B.x[i])) return 0;
    }
    return 1;
}

int main(){
    int i,j,k;
    call();
    int p = ortho();
    int q = similar();
    if(p==1) printf("Orthogonal Vectors");
    else if(q==1) printf("Identical Vectors");
    else if(p==0 && q==0) printf("Vectors are neither similar nor orthogonal");




    return 0;
}
