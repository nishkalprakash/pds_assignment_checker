/*
Section 2
Roll no. 22EE30015
Name : Keshav Prajapati
Assignment No. 8
Description :
*/

#include<stdio.h>

typedef struct Matrixdim {
    int row;
    int column;
} matd;

matd multiplication(matd a, matd b);

int main()
{
    int m, n, o, p;

    printf("Enter  number of rows of matrix A : ");
    scanf("%d", &m);
    printf("Enter  number of columns of matrix A : ");
    scanf("%d", &n);

    printf("Enter  number of rows of matrix B : ");
    scanf("%d", &o);
    printf("Enter  number of columns of matrix B : ");
    scanf("%d", &p);

    //Alocating memory
    int **mat_a;

    mat_a = (int **) calloc(m, sizeof(int*));

    for (int i = 0; i < m; i++)
        {
            mat_a[i] = (int *) calloc(n, sizeof(int));
        }

    //Taking input of matrix A
    printf("Enter Matrix A : \n");

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &mat_a[i][j] );
        }
    }

    //Allocating memory
    int **mat_b;

    mat_b = (int **) calloc(o, sizeof(int*));

    for (int i = 0; i < n; i++)
        {
            mat_b[i] = (int *) calloc(p, sizeof(int));
        }

    //Taking input of matrix B
    printf("Enter Matrix B : \n");

    for(int i = 0; i < o; i++)
    {
        for(int j = 0; j < p; j++)
        {
            scanf("%d", &mat_b[i][j] );
        }
    }

    if(n = o)
    {
        //Multiplying Matrix

        //Alocating memory
        int **mat_c;

        mat_c = (int **) calloc(m, sizeof(int*));

        for (int i = 0; i < m; i++)
            {
                mat_c[i] = (int *) calloc(p, sizeof(int));
            }

        //Inputting element in Matrix C
        printf("\n");

        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < p; j++)
            {
                for(int k = 0; k < n; k++)
                {
                    mat_c[i][j] += (mat_a[i][k])*(mat_b[k][j]);
                }
            }
        }

        printf("\n");

        //Matrix A
        printf("Matrix A %d x %d: \n", m, n);

        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                printf("%d ", mat_a[i][j]);
            }
            printf("\n");
        }


        //Matrix B
        printf("\nMatrix B %d x %d: \n", n, o);

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < o; j++)
            {
                printf("%d ", mat_b[i][j]);
            }
            printf("\n");
        }

        //Printing Matrix C
        printf("Matrix C %d x %d: \n", m, o);

        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < o; j++)
            {
                printf("%d ", mat_c[i][j]);
            }
            printf("\n");
        }
    }

    else
        printf("\nError invalid matrix size for multiplication \n");

    return 0;
}

