#include <stdio.h>
#include <stdlib.h>
// Structure definition for a 2D matrix
typedef struct {
    int **data;  // Pointer to the matrix data
    int rows;    // Number of rows
    int columns; // Number of columns
} Matrix;

// Function for matrix multiplication
Matrix matrixMultiplication(Matrix matrix1, Matrix matrix2) {
    Matrix result;
    // Check if the matrices can be multiplied
    if (matrix1.columns != matrix2.rows) {
        printf("Error: Invalid matrix sizes for multiplication!\n");
        result.rows = 0;
        result.columns = 0;
        return result;
    }

    // Create the result matrix
    result.rows = matrix1.rows;
    result.columns = matrix2.columns;
    result.data = (int **)malloc(result.rows * sizeof(int *));
    for (int i = 0; i < result.rows; i++)
        result.data[i] = (int *)malloc(result.columns * sizeof(int));

    // Perform matrix multiplication
    for (int i = 0; i < matrix1.rows; i++) {
        for (int j = 0; j < matrix2.columns; j++) {
            int sum = 0;
            for (int k = 0; k < matrix1.columns; k++) {
                sum += matrix1.data[i][k] * matrix2.data[k][j];
            }
            result.data[i][j] = sum;
        }
    }
    return result;
}

// Function to print a matrix
void printMatrix(Matrix matrix) {
    for (int i = 0; i < matrix.rows; i++) {
        for (int j = 0; j < matrix.columns; j++) {
            printf("%d ", matrix.data[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int m, n,n1, p;

    // Read the number of rows and columns for the matrices
    printf("Enter the number of rows for matrix A: ");
    scanf("%d", &m);
    printf("Enter the number of columns for matrix A: ");
    scanf("%d", &n);
    printf("Enter the number of rows for matrix B: ");
    scanf("%d", &n1);
    printf("Enter the number of columns for matrix B: ");
    scanf("%d", &p);

    // Create matrix A
    Matrix matrixA;
    matrixA.rows = m;
    matrixA.columns = n;
    matrixA.data = (int **)malloc(matrixA.rows * sizeof(int *));
    for (int i = 0; i < matrixA.rows; i++)
        matrixA.data[i] = (int *)malloc(matrixA.columns * sizeof(int));

    // Read values for matrix A
    printf("Enter the values for matrix A:\n");
    for (int i = 0; i < matrixA.rows; i++) {
        for (int j = 0; j < matrixA.columns; j++) {
            scanf("%d", &matrixA.data[i][j]);
        }
    }

    // Create matrix B
    Matrix matrixB;
    matrixB.rows = n1;
    matrixB.columns = p;
    matrixB.data = (int **)malloc(matrixB.rows * sizeof(int *));
    for (int i = 0; i < matrixB.rows; i++)
        matrixB.data[i] = (int *)malloc(matrixB.columns * sizeof(int));

    // Read values for matrix B
    printf("Enter the values for matrix B:\n");
    for (int i = 0; i < matrixB.rows; i++) {
        for (int j = 0; j < matrixB.columns; j++) {
            scanf("%d", &matrixB.data[i][j]);
        }
    }
    printf("Matrices before multiplication:\n");
    printf("Matrix A:\n");
    printMatrix(matrixA);

        // Print matrix B
    printf("Matrix B:\n");
    printMatrix(matrixB);
    // Perform matrix multiplication
    Matrix resultMatrix = matrixMultiplication(matrixA, matrixB);
    printf("Matrices after multiplication:\n");
    printf("Matrix A:\n");
    printMatrix(matrixA);

        // Print matrix B
    printf("Matrix B:\n");
    printMatrix(matrixB);
    // Print the result matrix if multiplication was successful
    if (resultMatrix.rows != 0 && resultMatrix.columns != 0) {
        printf("Resultant Matrix:\n");
        for (int i = 0; i < resultMatrix.rows; i++) {
            for (int j = 0; j < resultMatrix.columns; j++) {
                printf("%d ", resultMatrix.data[i][j]);
            }
            printf("\n");
        }
    }

    // Free the memory allocated for the matrices
    for (int i = 0; i < matrixA.rows; i++)
        free(matrixA.data[i]);
    free(matrixA.data);
    for (int i = 0; i < matrixB.rows; i++)
        free(matrixB.data[i]);
    free(matrixB.data);
    for (int i = 0; i < resultMatrix.rows; i++)
        free(resultMatrix.data[i]);
    free(resultMatrix.data);

    return 0;
}
