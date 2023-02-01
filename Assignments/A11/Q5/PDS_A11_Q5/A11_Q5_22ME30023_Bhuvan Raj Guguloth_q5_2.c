#include<stdio.h>
#include <stdlib.h>

 /*NAME:Guguloth Bhuvan Raj
  rollno:22me30023
  section:14 */

typedef struct {
    int n;
    int** m;
            \\ here we will define the 2d array using malloc in main function

} Matrix;

void initMat(Matrix* M, int N) {
    M->n = N;
    M->m = (int**)malloc(M->n * sizeof(int*));
    for (int i = 0; i < M->n; i++) {
        M->m[i] = (int*)malloc(M->n * sizeof(int));
    }
}

void getMat(Matrix* M) {
    printf("Enter 4 numbers for M1: ");
    for (int i = 0; i < M->n; i++) {
        for (int j = 0; j < M->n; j++) {
            scanf("%d", &M->m[i][j]);
        }
    }
}

void printMat(Matrix* M) {
    for (int i = 0; i < M->n; i++) {
        for (int j = 0; j < M->n; j++) {
            printf("%d ", M->m[i][j]);
        }
        printf("\n");
    }
}


void zeroMat(Matrix* M) {
    for (int i = 0; i < M->n; i++) {
        for (int j = 0; j < M->n; j++) {
            M->m[i][j] = 0;
        }
    }
}


void multMat(Matrix* M1, Matrix* M2, Matrix* M3) {
    zeroMat(M3);
    for (int i = 0; i < M1->n; i++) {
        for (int j = 0; j < M2->n; j++) {
            for (int k = 0; k < M1->n; k++) {
                M3->m[i][j] += M1->m[i][k] * M2->m[k][j];
            }
        }
    }
}


int main() {
    Matrix M1, M2, M3;
    int N;
 
    printf("Enter N: ");

    scanf("%d", &N);
    initMat(&M1, N);
    initMat(&M2, N);
    initMat(&M3, N);
    getMat(&M1);
    getMat(&M2);
    multMat(&M1, &M2, &M3);
    printMat(&M3);

    return 0;

}




