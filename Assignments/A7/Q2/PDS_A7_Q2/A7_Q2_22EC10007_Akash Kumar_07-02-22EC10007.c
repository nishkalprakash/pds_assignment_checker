/*
* Section 2
* Roll number : 22EC10007
* Name : Akash Kumar
* Assignment : 7
* Question : 2
* Description :
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("The matrices are [A]mxn and [B]nxp\n");
    int m, n, p;
    printf("Enter the numbers m, n and p\n");
    scanf("%d %d %d", &m, &n, &p);

    int A[m][n];
    int B[n][p];

    int i = 0, j = 0;

    printf("Enter the elements for matrix A\n");
    while (i < m)
    {
        while(j < n)
        {
            scanf("%d", &A[i][j]);
            j++;
        }
        j = 0;
        i++;
    }

    i = 0;
    j = 0;


    printf("Enter the elements for matrix B\n");
    while (i<n)
    {
        while (j<p)
        {
            scanf("%d", &B[i][j]);
            j++;
        }
        j = 0;
        i++;
    }

    // for largest submatrix


    int lessrow, lesscol;
    if (m<=n)
        lessrow = m;
    else lessrow = n;
    if (n<=p)
        lesscol = n;
    else lesscol = p;

    int C[lessrow][lesscol];
    int D[lessrow][lesscol];



    // sub-matrix C
    i = 0;
    j = 0;
    while (i<lessrow)
    {
        while (j<lesscol)
        {
            C[i][j] = B[i][j];
            j++;
        }
        j = 0;
        i++;
    }

    // sub-matrix D
    i = 0;
    j = 0;
    while (i<lessrow)
    {
        while (j<lesscol)
        {
            D[i][j] = A[i][j];
            j++;
        }
        j = 0;
        i++;
    }







    i = 0;
    j = 0;

    printf("Matrix A : \n");
    while (i < lessrow)
    {
        while(j < lesscol)
        {
            printf("%d  ", C[i][j]);
            j++;
        }

        while (j<n)
        {
            printf("%d  ", A[i][j]);
            j++;
        }
        printf("\n");
        j = 0;
        i++;
    }

    while (i < m)
    {
        while (j<n)
        {
            printf("%d  ", A[i][j]);
            j++;
        }
        printf("\n");
        j = 0;
        i++;
    }






    i = 0;
    j = 0;
    printf("Matrix B : \n");
    while (i<lessrow)
    {
        while (j<lesscol)
        {
            printf("%d  ", D[i][j]);
            j++;
        }
        while (j<p)
        {
            printf("%d  ", B[i][j]);
            j++;
        }
        printf("\n");
        j = 0;
        i++;
    }
    while (i<n)
    {
        while (j<p)
        {
            printf("%d  ", B[i][j]);
            j++;
        }
        printf("\n");
        j = 0;
        i++;
    }













 /*   int **ptrA;
    **ptrA = &A;
    ptrA = (int **) calloc(m, sizeof(int*));
    for (int i = 0; i < m; i++)
    {

        ptrA[i] = (int *) calloc(n, sizeof(int));
    }

    int **ptrB;
    **ptrB = &B;
    ptrB = (int **) calloc(n, sizeof(int*));
    for (int i = 0; i < n; i++)
    {
        ptrB[i] = (int *) calloc(p, sizeof(int));
    }


    int i = 0, j = 0;
    printf("Input for matrix A\n");
    for (i = 0; i<m; i++)
    {
        for (j = 0; j<n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Input for matrix B\n");
    for (i = 0; i<n; i++)
    {
        for (j = 0; j<p; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }










*/
    return 0;
}
