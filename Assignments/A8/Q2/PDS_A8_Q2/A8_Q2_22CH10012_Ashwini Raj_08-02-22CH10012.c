#include <stdio.h>
#include <stdlib.h>
//2D matrix structure definition
int **allocate_array(int m, int n)
{   //declared pointer a
    int **a;
    a = (int **)malloc(m * sizeof(int *));
    for (int i = 0; i < m; i++)
    {
        a[i] = (int *)malloc(n * sizeof(int));
    }
    return a;
}

int **read_array(int m, int n)
{
    int **a;
    //allocating memory
    a = (int **)malloc(m * sizeof(int *));
    for (int i = 0; i < m; i++)
    {
        a[i] = (int *)malloc(n * sizeof(int));
    }
    for (int i = 0; i < m; i++)
    {   //printing rows value
        printf("Enter row %d: ", i + 1);
        for (int j = 0; j < n; j++)
        {
            int x;
            scanf("%d", &x);
            a[i][j] = x;
        }
    }
    return a;
}
//declared function
void print_array(int **a, int m, int n)
{   //printing column values
    for (int i = 0; i < m; i++)
    {
        printf("|");
        for (int j = 0; j < n; j++)
        {
            printf("%10d", a[i][j]);
        }
        printf(" |\n");
    }
}
//declared function
void free_array(int **a, int m)
{
    for (int i = 0; i < m; i++)
    {
        free(a[i]);
    }
    free(a);
}
//computing multiplication of matrices
int **multiply_matrices(int **a, int **b, int m, int n, int x, int y)
{

    if (n == x)
    {
        int **c;
        c = (int **)malloc(m * sizeof(int *));
        for (int i = 0; i < m; i++)
        {
            c[i] = (int *)malloc(y * sizeof(int));
        }
        int cvalue;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < y; j++)
            {
                cvalue = 0;
                for (int k = 0; k < n; k++)
                {
                    cvalue += a[i][k] * b[k][j];
                }
                c[i][j] = cvalue;
            }
        }
        return c;
    }
    else
        return NULL;
}

int if_multiply(int m, int n, int x, int y)
{
    if (n == x)
        return 1;
    else
        return 0;
}

int main()
{
    int **a;
    int **b;
    int m, n, x, y;
    //input order of matrices
    printf("Enter dimensions for matrix 1: ");
    scanf("%d%d", &m, &n);
    a = allocate_array(m, n);
    printf("Enter dimensions for matrix 2: ");
    scanf("%d%d", &x, &y);
    b = allocate_array(x, y);
    printf("Enter values for matrix 1: \n");
    a = read_array(m, n);
    printf("Enter values for matrix 2: \n");
    b = read_array(x, y);
    //printing matrices
    printf("Matrix 1: \n");
    print_array(a, m, n);
    printf("Matrix 2: \n");
    print_array(b, x, y);
    int **c;
    //printing multiplication if possible
    if (if_multiply(m, n, x, y))
    {
        int **c;
        c = multiply_matrices(a, b, m, n, x, y);
        printf("Matrix 1 * Matrix 2: \n");
        print_array(c, m, y);
    }
    else
        printf("Matrix Multiplication not possible.");
    return 0;
}
