/*
Section 2
Roll No. - 22CS30016
Name - Omkar Vijay Bhandare
Assignment No. - 07
Description - Matrices
*/
#include<stdio.h>

//Program to read a matrix
void readMatrix(int a[][10], int m,int n)
{
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}

//Program to print a matrix
void printMatrix(int a[][10], int m, int n)
{
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d     ", a[i][j]);
        }
        printf("\n");
    }
}

//Program to multiply two matrices
void mulMatrix(int a[][10], int b[][10], int c[][10], int m, int n, int p)
{
    int sum = 0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<p;j++)
        {
            for(int k=0;k<n;k++)
            {
                sum = sum + (a[i][k]*b[k][j]);
            }
            c[i][j] = sum;
            sum =0;
        }
    }
}

//Program to swap the elements as instructed
void swapMul(int a[][10], int b[][10], int m, int n, int p)
{
    int temp;
    for(int i=0;i<m&&i<n;i++)
    {
        for(int j=0;j<n&&j<p;j++)
        {
            temp = a[i][j];
            a[i][j] = b[i][j];
            b[i][j] = temp;
        }
    }
}

int main()
{
    int m,n,p;
    scanf("%d%d%d", &m,&n,&p);
    printf("\n");

    //Dynamically allot matrix A
    int **arr1;
    arr1 = (int **)malloc(m*sizeof(int*));
    for(int i=0; i<m; ++i)
    {
        arr1[i] = (int *)malloc(n*sizeof(int));
    }
    readMatrix(arr1,m,n);
    printf("\n");

    //Dynamically allot matrix B
    int **arr2;
    arr2 = (int **)malloc(n*sizeof(int*));
    for(int i=0; i<n; i++)
    {
        arr2[i] = (int *)malloc(p*sizeof(int));
    }
    readMatrix(arr2,n,p);
    printf("\n");

    swapMul(arr1,arr2,m,n,p);

    //Matrix for multiplication
    int **arrmul;
    arrmul = (int **)malloc(m*sizeof(int));
    for(int i=0;i<m;i++)
    {
        arrmul[i] = (int *)malloc(p*sizeof(int));
    }
    mulMatrix(arr1,arr2,arrmul,m,n,p);

    //Print all the output
    printf("Matrix A :- \n");
    printMatrix(arr1,m,n);
    printf("Matrix B :- \n");
    printMatrix(arr2,n,p);
    printf("Matrix C : - \n");
    printMatrix(arrmul,m,p);

    return 0;
}
