/*
You have to write a C-program to multiply two matrices Am*n and Bn*p where m*n and n*p denotes the size of the matrices in usual notation. Do the following.
Define the structure which would appropriately store all information of a matrix. Assume that your matrix will store integer values only. Also include a method create() in the structure to initialize values reading from the keyboard.
Write a function matrixMultiplication(), where you should pass two matrices Am*n and Bn*p, and it will return a matrix Cm*p=Am*n X Bn*p. Here, X denotes the matrix multiplication.

(NOTE: Extra 20 marks will be given for writing sufficient comments in your programs)

*/
// Code Creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
// Code to multiply two matrices
#include <stdio.h>
#include <stdlib.h>

// Structure to store matrix
struct Matrix {
    int row, col;
    int **matrix;
};

// Method to create matrix
void create(struct Matrix *m) {
    printf("Matrix (%dx%d):\n", m->row, m->col);
    m->matrix = (int **)malloc(m->row * sizeof(int *));
    for (int i = 0; i < m->row; i++) {
        m->matrix[i] = (int *)malloc(m->col * sizeof(int));
        for (int j = 0; j < m->col; j++) {
            scanf("%d", &m->matrix[i][j]);
        }
    }
}

// Function to multiply two matrices
struct Matrix matrixMultiplication(struct Matrix a, struct Matrix b) {
    struct Matrix c;
    c.row = a.row;
    c.col = b.col;
    // Allocate memory for matrix c
    c.matrix = (int **)malloc(c.row * sizeof(int *));
    for (int i = 0; i < c.row; i++) {
        c.matrix[i] = (int *)malloc(c.col * sizeof(int));
        for (int j = 0; j < c.col; j++) {
            c.matrix[i][j] = 0;
            for (int k = 0; k < a.col; k++) {
                c.matrix[i][j] += a.matrix[i][k] * b.matrix[k][j];
            }
        }
    }
    return c;
}

// Main method
int main() {
    struct Matrix a, b, c;
    printf("Enter the size of matrix A (row col): ");
    scanf("%d %d", &a.row, &a.col);
    // Create matrix a
    create(&a);
    printf("Enter the size of matrix B (row col): ");
    scanf("%d %d", &b.row, &b.col);
    // Create matrix b
    create(&b);
    // Check if matrix multiplication is possible
    if (a.col != b.row) {
        printf("Matrix multiplication is not possible\n");
        return 0;
    }
    // Multiply matrix a and b
    c = matrixMultiplication(a, b);
    // Print matrix c
    printf("Matrix C (%dx%d):\n", c.row, c.col);
    for (int i = 0; i < c.row; i++) {
        for (int j = 0; j < c.col; j++) {
            printf("%d ", c.matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}