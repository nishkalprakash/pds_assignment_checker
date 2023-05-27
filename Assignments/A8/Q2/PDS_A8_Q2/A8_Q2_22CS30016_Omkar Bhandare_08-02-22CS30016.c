/*
Section 2
Roll No. - 22CS30016
Name - Omkar Vijay Bhandare
Assignment No. - 08
Description - Matrices and Structure
*/
#include<stdio.h>
#include<stdlib.h>

struct matrix
{
    int **ptr
}a,b,c;

void readMatrix(int a[][10], int m, int n)
{
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}

void printMatrix(int a[][10], int m, int n)
{
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d   ", a[i][j]);
        }
        printf("\n");
    }
}

void matrixMultiplication(int a[][10], int b[][10], int c[][10], int m, int n, int p)
{
    int sum = 0;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<p; j++)
        {
            for(int k=0; k<n; k++)
            {
                sum = sum + a[i][k]*b[k][j];
            }
            c[i][j] = sum;
            sum = 0;
        }
    }
}
int main()
{
    int arow,acol,brow,bcol;
    printf("Enter number of rows for matrix A : ");
    scanf("%d", &arow);
    printf("Enter number of columns for matrix A : ");
    scanf("%d", &acol);
    printf("Enter number of rows for matrix B : ");
    scanf("%d", &brow);
    printf("Enter number of columns for matrix B : ");
    scanf("%d", &bcol);

    a.ptr = (int **)malloc(arow*sizeof(int *));
    for(int i=0; i<arow; i++)
    {
        a.ptr[i] = (int *)malloc(acol*sizeof(int));
    }
    printf("Enter the values for Matrix A : \n");
    readMatrix(a.ptr,arow,acol);

    b.ptr = (int **)malloc(brow*sizeof(int *));
    for(int i=0; i<brow; i++)
    {
        b.ptr[i] = (int *)malloc(bcol*sizeof(int));
    }
    printf("Enter the values for Matrix B : \n");
    readMatrix(b.ptr,brow,bcol);

    printf("Matrices before multiplication : \n");
    printf("Matrix A : \n");
    printMatrix(a.ptr,arow,acol);
    printf("\n");
    printf("Matrix B : \n");
    printMatrix(b.ptr,brow,bcol);
    printf("\n");

    if(acol!=brow)
    {
        printf("Error : Invalid matrix sizes for multiplication!");
    }
    else
    {

        c.ptr = (int **)malloc(arow*sizeof(int *));
        for(int i=0; i<arow; i++)
        {
            c.ptr[i] = (int *)malloc(bcol*sizeof(int));
        }
        matrixMultiplication(a.ptr,b.ptr,c.ptr,arow,acol,bcol);

        printf("Matrices after multiplication : \n");
        printf("Matrix A : \n");
        printMatrix(a.ptr,arow,acol);
        printf("\n");
        printf("Matrix B : \n");
        printMatrix(b.ptr,brow,bcol);
        printf("\n");
        printf("Resultant Matrix : \n");
        printMatrix(c.ptr,arow,bcol);
        printf("\n");
    }

    return 0;
}
