/*
Section 14
Name: Nived Shah
Roll No: 22CS10049
Assignment No. : 11
Description: Matrix Multiplication
*/
#include <stdio.h>
#include <stdlib.h>
typedef struct{
    int n;
    int **m;
}Matrix;

void initMat(Matrix *M,int N){
       M->n=N;
       M->m = (int**)malloc(M->n * sizeof(int*));
       for (int i = 0; i < M->n; i++)
        M->m[i] = (int*)malloc(M->n * sizeof(int));
       return;
}

void getMat(Matrix *M,int N){
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++)
            scanf("%d", &M->m[i][j]);
    }
}

void printMat(Matrix *M,int N){
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            printf("%d ", M->m[i][j]);
        }
        printf("\n");
    }
}

void multMat(Matrix *m1, Matrix *m2, Matrix *m3, int N){
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            m3->m[i][j]=0;
        }
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            for(int k=0; k<N; k++){
                m3->m[i][j]+=(m1->m[i][k]*m2->m[k][j]);
            }
        }
        printf("\n");
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            printf("%d ", m3->m[i][j]);
        }
        printf("\n");
    }
}

int main(){
    Matrix M1, M2;
    int N;
    printf("Enter order of square Matrixes M1 and M2 = ");
    scanf("%d", &N);
    initMat(&M1, N);
    initMat(&M2, N);

    printf("Enter 4 numbers for M1: ");
    getMat(&M1, N);
    printf("Enter 4 numbers for M2: ");
    getMat(&M2, N);

    printf("M1 is: \n");
    printMat(&M1, N);
    printf("M2 is: \n");
    printMat(&M2, N);

    Matrix M3;
    initMat(&M3, N);
    printf("The Matrix M1*M2 is: \n");
    multMat(&M1, &M2, &M3, N);

    return (0);
}