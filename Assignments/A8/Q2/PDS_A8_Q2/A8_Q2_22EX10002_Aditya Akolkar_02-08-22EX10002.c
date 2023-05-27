#include<stdio.h>
#include<stdlib.h>


int main()
{
    int i, j, **a, **b, **c;
    int m, n, o, p, k;

    printf("Enter number of rows for matrix A:");
    scanf("%d", &m);
    printf("Enter number of columns for matrix A:");
    scanf("%d", &n);
    printf("Enter number of rows for matrix B:");
    scanf("%d", &o);
    printf("Enter number of columns for matrix B:");
    scanf("%d", &p);

    a= (int **) malloc(m*sizeof(int*));
    for (int i = 0; i < m; i++)
        a[i] = (int *) malloc(n*sizeof(int));

    b = (int **) malloc(o* sizeof(int*));
    for (int i = 0; i < m; i++)
        b[i] = (int *) malloc(p*sizeof(int));

    c = (int **) malloc(m*sizeof(int*));
    for (int i = 0; i < m; i++)
        a[i] = (int *) malloc(p*sizeof(int));

    printf("Enter value for matrix A");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter value for matrix B");
    for(i=0; i<o; i++)
    {
        for(j=0; j<p ; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }


    printf("Matrix before Multiplication:");
    printf("Matrix A:\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("Matrix B:\n");
    for(i=0; i<o; i++)
    {
        for(j=0; j<p; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    if(n != o)
    {
        printf("Error: Invalid matrix sizes for multiplication!");
    }

    else
    {
        printf("Matrices after multiplication:");
        printf("Matrix A:\n");
        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }

        printf("Matrix B:\n");
        for(i=0; i<o; i++)
        {
            for(j=0; j<p; j++)
            {
                printf("%d ", b[i][j]);
            }
            printf("\n");
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<p;j++)
            {
                for(k=0;k<n;k++)
                {
                    c[i][j] = a[i][k] * b[k][j];
                }
            }
        }
                printf("Matrix B:\n");
        for(i=0; i<m; i++)
        {
            for(j=0; j<p; j++)
            {
                printf("%d ", c[j][i]);
            }
            printf("\n");
        }
    }

}
