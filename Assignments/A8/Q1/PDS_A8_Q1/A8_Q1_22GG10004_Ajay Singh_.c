#include <stdio.h>
void transpose_matrix(int **matrix, int rows, int cols) {
    int i, j;
    int temp;
    for (i = 0; i < rows; i++) {
        for (j = i+1; j < cols; j++) {
            temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
}
void print_matrix(int **matrix, int rows, int cols) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int i, j;
    int rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int **matrix = (int **) malloc(sizeof(int *) * rows);
    for (i = 0; i < rows; i++) {
        matrix[i] = (int *) malloc(sizeof(int) * cols);
    }
    printf("Enter the matrix elements (row-major order):\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Original Matrix: \n");
    print_matrix(matrix, rows, cols);

    transpose_matrix(matrix, rows, cols);
    printf("Transposed Matrix (Column-major order): \n");
    print_matrix(matrix, cols, rows);

    for (i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
    return 0;
}