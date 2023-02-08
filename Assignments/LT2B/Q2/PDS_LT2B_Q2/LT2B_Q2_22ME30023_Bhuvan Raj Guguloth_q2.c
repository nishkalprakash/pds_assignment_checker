#include<stdio.h>
#include <stdlib.h>

 /*NAME:Guguloth Bhuvan Raj
  rollno:22me30023 
  section:14 */

typedef struct {
    int n;
    int** m;
} Matrix;

void initMat(Matrix* A, int N) {
    A->n = N;
    A->m = (int**)malloc(A->n * sizeof(int*));
    for (int i = 0; i < A->n; i++) {
        A->m[i] = (int*)malloc(A->n * sizeof(int));
    }
}

void getMat(Matrix* A) {
    printf("Enter 4 numbers for M1: ");
    for (int i = 0; i < A->n; i++) {
        for (int j = 0; j < A->n; j++) {
            scanf("%d", &A->m[i][j]);
        }
    }
}

void printMat(Matrix* A) {
    for (int i = 0; i < A->n; i++) {
        for (int j = 0; j < A->n; j++) {
            printf("%d ", A->m[i][j]);
        }
        printf("\n");
    }
}


void zeroMat(Matrix* A) {
    for (int i = 0; i < A->n; i++) {
        for (int j = 0; j < A->n; j++) {
            A->m[i][j] = 0;
        }
    }
}


int main() {
    Matrix A;
    int M;
    int N;  
    printf("Enter M: ");
    scanf("%d",&M);
    printf("Enter N: ");
    scanf("%d", &N);
    initMat(&A, N);
    getMat(&A);
    printMat(&A);

    return 0;

}



