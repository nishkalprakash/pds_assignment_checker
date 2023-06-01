#include <stdio.h>
#include <stdlib.h>
int **defineMatrix(int m, int n)
{
    int **matrix;
    matrix = (int **)calloc(m, sizeof(int *));
    for (int i = 0; i < m; i++)
    {
        matrix[i] = (int *)calloc(n, sizeof(int));
    }
    return matrix;
}
void readMatrix(int **matrix, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}
void printMatrix(int **matrix, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}
int **multiply_matrix(int **matrix_a, int **matrix_b, int m, int n, int p)
{
    int **matrix, i = 0, j = 0, k = 0;
    matrix = defineMatrix(m, p);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < p; j++)
        {
            matrix[i][j] = 0;
            for (k = 0; k < n; k++)
            {
                matrix[i][j] += matrix_a[i][k] * matrix_b[k][j];
            }
        }
    }
    return matrix;
}
int main()
{
    int m = 0, n = 0, p = 0;
    scanf("%d%d%d", &m, &n, &p);
    int **matrix_a, **matrix_b, **matrix_c;
    matrix_a = defineMatrix(m, n);
    matrix_b = defineMatrix(n, p);
    readMatrix(matrix_a, m, n);
    readMatrix(matrix_b, n, p);
    matrix_c = multiply_matrix(matrix_a, matrix_b, m, n, p);
    printf("Matrix A:-\n");
    printMatrix(matrix_a, m, n);
    printf("\n");
    printf("Matrix B:-\n");
    printMatrix(matrix_b, n, p);
    printf("\n");
    printf("Matrix C:-\n");
    printMatrix(matrix_c, m, p);
    printf("\n");
    free(matrix_a);
    free(matrix_b);
    free(matrix_c);
    return 0;
}
