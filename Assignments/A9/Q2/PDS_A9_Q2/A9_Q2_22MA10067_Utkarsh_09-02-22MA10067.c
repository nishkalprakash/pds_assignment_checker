
/*
* Section 2
* Roll No : 22MA10067
* Name : Utkarsh
* Assignment No : 9
* Description : Program to read vectors.
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
typedef struct Vector{
    int n;
    int *p;
}vector;

void readVector(vector *a){
    printf("Enter the dimension: ");
    scanf("%d",&(*a).n);
    printf("Enter %d elements: ",(*a).n);
    (*a).p = (int *)calloc(((*a).n),sizeof(int));
    for (int i=0;i< (*a).n;i++){
        scanf("%d",&(*a).p[i]);
    }

}




float magn(vector a){
    float sum=0;
    for (int i=0;i<a.n;i++){
        sum+=pow((a.p[i]),2);
    }
    return sqrt(sum);

}


int dot(vector a,vector b){
    int prod=0;
    for (int i=0;i<a.n;i++){
        prod+= (a).p[i] * (b).p[i];

    }
    return prod;

}

void check_vect(vector a,vector b){
    if (a.n != b.n){
        printf("Error: The dimensions of given vectors are not matching");
    }
    else {
        float eps=0.000001;
        float cos=dot(a,b)/(magn(a)*magn(b));
        if (cos<0) cos=-1*cos;
        //printf("\n**%d**%f*%f**%f**\n",dot(a,b),magn(a),magn(b),cos);
        if (cos == 0) printf("Orthogonal Vectors");
        else if (cos >= 1-eps && cos <= 1+eps) printf("Identical Vector");
        else printf("The vectors are neither orthogonal nor identical");
    }
}

int main()
{
     vector a,b;
     readVector(&a);
     readVector(&b);
     check_vect(a,b);
     return 0;
}
