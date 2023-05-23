/*
22ME10034
Hindvee Rajesh Vispute
Section 2
Lab-07
Assignment 2
*/

#include<stdio.h>

int main()
{
    int m, n, p;
    int i, j, f;
    int a, b;

    scanf("%d %d %d", &m, &n, &p);

    int **A;
    int **B;
    int **C;



    A = (int **)calloc(m, sizeof(int*));
    for(i = 0; i<m; i++)
    {
        A[i] = (int *)calloc(n, sizeof(int));
    }



    B = (int **)calloc(n, sizeof(int*));
    for(i = 0; i<n; i++)
    {
        B[i] = (int *)calloc(p, sizeof(int));
    }


    C = (int **)calloc(m, sizeof(int*));
    for(i = 0; i<m; i++)
    {
        C[i] = (int *)calloc(p, sizeof(int));
    }


    //reading values for A
    for(i = 0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    //reading values for B
    for(i = 0; i<n; i++)
    {
        for(j=0; j<p; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    //getting dimensions of array of only the overlapped part
    if(m<n)
        a=m;
    else
        a=n;


    if(n<p)
        b=n;
    else
        b=p;

    int t;

    //swapping values
    for(i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
        {
            t = A[i][j];
            A[i][j] = B[i][j];
            B[i][j] = t;

        }
    }

    //printing matrices
    printf("\nMatrix A:-\n");
    for(i = 0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }


    printf("\nMatrix B:-\n");
    for(i = 0; i<n; i++)
    {
        for(j=0; j<p; j++)
        {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }



    //Matrix Multiplication
    for(i=0; i<m; i++)
    {
        for(j=0; j<p; j++)
        {
            for(f=0; f<n; f++)
            {
                C[i][j] += A[i][f]*B[f][j];
            }
        }
    }


    printf("\nMatrix C:-\n");
    for(i = 0; i<m; i++)
    {
        for(j=0; j<p; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;

}

