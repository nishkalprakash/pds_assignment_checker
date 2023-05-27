



#include <stdio.h>
#include <stdlib.h>

typedef struct Matrix {
    int rows;
    int columns;
    int** data;
} matrix;


matrix createMatrix(int rows, int columns) {
    matrix matx;
    matx.rows = rows;
    matx.columns = columns;


    matx.data = (int**)malloc(rows * sizeof(int));
    for (int i = 0; i < rows; i++) {

        matx.data[i] = (int*)malloc(columns * sizeof(int));

    }

    return matx;
}


void readMatrix(matrix* matx) {
    printf("Enter the values for the matrix:\n");
    for (int i = 0; i < matx->rows; i++) {
        for (int j = 0; j < matx->columns; j++) {
            scanf("%d", &(matx->data[i][j]));
        }
    }
}


void printMatrix(matrix matx) {
    for (int i = 0; i < matx.rows; i++) {
        for (int j = 0; j < matx.columns; j++) {
            printf("%d ", matx.data[i][j]);
        }
        printf("\n");
    }
}

matrix matrixMultiplication(matrix matx1, matrix matx2) {
    if (matx1.columns != matx2.rows) {
        printf("Error: Invalid matrix sizes for multiplication!\n");
        exit(1);
    }

    matrix result = createMatrix(matx1.rows, matx2.columns);

    for (int i = 0; i < matx1.rows; i++) {
        for (int j = 0; j < matx2.columns; j++) {
            result.data[i][j] = 0;
            for (int k = 0; k < matx1.columns; k++) {
                result.data[i][j] += matx1.data[i][k] * matx2.data[k][j];
            }
        }
    }

    return result;
}

void deallocateMatrix(matrix* matx) {
    for (int i = 0; i < matx->rows; i++) {
        free(matx->data[i]);
    }
    free(matx->data);
}

int main() {
    int rowsA, columnsA, rowsB, columnsB;

    printf("Enter the number of rows for matrix A: ");
    scanf("%d", &rowsA);
    printf("Enter the number of columns for matrix A: ");
    scanf("%d", &columnsA);

    printf("Enter the number of rows for matrix B: ");
    scanf("%d", &rowsB);
    printf("Enter the number of columns for matrix B: ");
    scanf("%d", &columnsB);


    matrix matxA = createMatrix(rowsA, columnsA);
    matrix matxB = createMatrix(rowsB, columnsB);


    printf("Matrix A:\n");
    readMatrix(&matxA);
    printf("Matrix B:\n");
    readMatrix(&matxB);


    printf("Matrices before multiplication:\n");
    printf("Matrix A:\n");
    printMatrix(matxA);
    printf("Matrix B:\n");
    printMatrix(matxB);


    matrix result = matrixMultiplication(matxA, matxB);


    printf("Matrices after multiplication:\n");
    printf("Matrix A:\n");
    printMatrix(matxA);
    printf("Matrix B:\n");
    printMatrix(matxB);
    printf("Resultant Matrix:\n");
    printMatrix(result);

    deallocateMatrix(&matxA);
    deallocateMatrix(&matxB);
    deallocateMatrix(&result);

    return 0;
}

