/*
*Section 2
*Name: Sagarneel Ghoshal
*Roll No.:22PH10040
*Assignment-9
*Description- Fibonacci Number
*/


#include<stdio.h>
#include<stdlib.h>


struct n_vector{
    float *vector;
};

void vectorinput(struct n_vector *X, int n){
    int i=0;
    while(i<n){
        printf("\nEnter element: ");
        scanf("%f",&X->vector[i]);
        i++;
    }
}

int vectoridentical(struct n_vector X,struct n_vector Y,int n){
    int i=0;
    while(i<n){
        if(((*(X.vector+i)/(*(Y.vector+i))!=((*(X.vector+(i+1))/(*(Y.vector+(i+1)))))))){
            break;
        }
        i++;
    }
    if(i==n) return 1;
    else return 0;

}

int vectororthogonal(struct n_vector X,struct n_vector Y,int n){
    float sum=0;
    int i=0;
    while(i<n){
        sum+=*(X.vector+i)*(*(Y.vector+i));
        i++;
    }
    if(sum==0) return 1;
    else return 0;
}


int main(){
    int n;
    struct n_vector X1,X2;
    printf("Enter the no. of elements: ");
    scanf("%d",&n);




    X1.vector=(float*)malloc(n*sizeof(struct n_vector));
    X2.vector=(float*)malloc(n*sizeof(struct n_vector));

    printf("\nEnter values for vector X1: ");
    vectorinput(&X1,n);

    printf("\nEnter values for vector X2: ");
    vectorinput(&X2,n);

    int i=0;
    while(i<n){
        printf("\n");
        printf("%f",*(X1.vector+i));
        i++;
    }

    int vi=vectoridentical(X1,X2,n);
    int vo=vectororthogonal(X1,X2,n);

    printf("\nv1=%d",vi);
    printf("\nvo=%d",vo);

    if(vi==1) printf("\nIdentical vectors ");
    else if(vo==1) printf("\nVectors are orthogonal ");
    else printf("The vectors are neither similar nor orthogonal");

    return 0;

}
