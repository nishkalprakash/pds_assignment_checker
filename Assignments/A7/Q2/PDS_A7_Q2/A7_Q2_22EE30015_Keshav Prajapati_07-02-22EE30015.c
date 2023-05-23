/*
Section 2
Roll no. 22EE30015
Name : Keshav Prajapati
Assignment No. 7
Description :
*/

#include<stdio.h>
#include<stdlib.h>

//To swap to integers with there values
void swap (int *p, int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}

int main()
{
    int m, n, o;
    printf("-----Format of entry : m n o-----\n");
    printf("Enter the size of matrices(mxn and nxo) to be created : ");
    scanf("%d %d %d", &m, &n, &o);
    printf("\n");


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

    mat_b = (int **) calloc(n, sizeof(int*));

    for (int i = 0; i < n; i++)
        {
            mat_b[i] = (int *) calloc(o, sizeof(int));
        }

    //Taking input of matrix B
    printf("Enter Matrix B : \n");

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < o; j++)
        {
            scanf("%d", &mat_b[i][j] );
        }
    }

    //Swapping the old elements

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            swap(&mat_a[i][j], &mat_b[i][j]);
        }
    }


    //Printing Matrix A and Matrix B

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

    printf("\n");

    //Multiplying Matrix

    //Alocating memory
    int **mat_c;

    mat_c = (int **) calloc(m, sizeof(int*));

    for (int i = 0; i < m; i++)
        {
            mat_c[i] = (int *) calloc(o, sizeof(int));
        }

    //Inputting element in Matrix C
    printf("\n");

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < o; j++)
        {
            for(int k = 0; k < n; k++)
            {
                mat_c[i][j] += (mat_a[i][k])*(mat_b[k][j]);
            }
        }
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

    return 0;
}
