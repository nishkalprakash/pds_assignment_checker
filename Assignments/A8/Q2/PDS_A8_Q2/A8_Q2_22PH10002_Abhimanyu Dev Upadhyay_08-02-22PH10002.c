/*
* Section 2
* Roll No : 22PH1002
* Name : Abhimanyu Dev Upadhyay
* Assignment No : 2
* Description : Matrix Structure
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int **data;
    int m;
    int n;
} matrix;

void printMat(matrix m)
{
    int i,j;
    for(i=0; i<m.m; i++)
    {
        printf("\n");
        for(j=0; j<m.n; j++)
        {
            printf("%d ", m.data[i][j]);
        }
    }
}

matrix multMat(matrix p,matrix q)
{
    matrix r;
    //Case when invalid multiplication
    if(p.n != q.m)
    {
        r.m = 0;
        r.n = 0;
    }
    else
    {
        int i,j,k;
        //Setting  matrix size
        r.m = p.m;
        r.n = q.n;

        //Allocating memory
        r.data = (int**)malloc(r.m*sizeof(int*));
        for(i = 0; i <r.m; i++)
            r.data[i] = (int*)malloc(r.n*sizeof(int));

        //Multiplying matrices
        for(i=0; i<r.m; i++)
        {
            for(j=0; j<r.n; j++)
            {
                r.data[i][j] = 0;
                for(k=0; k<p.m; k++)
                {
                    r.data[i][j] += p.data[i][k]*q.data[k][j];
                }
            }
        }
    }
    return r;
}

int main()
{
    matrix a,b;
    int i,j;

    //Getting number of rows
    printf("Number of rows for Matrix A: ");
    scanf("%d", &a.m);
    printf("\nNumber of columns for Matrix A: ");
    scanf("%d", &a.n);
    printf("\nNumber of rows for Matrix B: ");
    scanf("%d", &b.m);
    printf("\nNumber of columns for Matrix B: ");
    scanf("%d", &b.n);

    //Allocating memory
    a.data = (int**)malloc(a.m*sizeof(int*));
    for(i = 0; i <a.m; i++)
        a.data[i] = (int*)malloc(a.n*sizeof(int));

    b.data = (int**)malloc(b.m*sizeof(int*));
    for(i = 0; i <b.m; i++)
        b.data[i] = (int*)malloc(b.n*sizeof(int));


    //Scanning data
    printf("\nEnter values for Matrix A: \n");
    for(i=0; i<a.m; i++)
    {
        for(j =0; j<a.n;j++)
        {
            scanf("%d", &a.data[i][j]);
        }
    }
    printf("\nEnter values for Matrix B: \n");
    for(i=0; i<b.m; i++)
    {
        for(j =0; j<b.n;j++)
        {
            scanf("%d", &b.data[i][j]);
        }
    }

    //Before Multiplication
    printf("\nMatrices before multiplication");
    printf("\nMatrix A: ");
    printMat(a);
    printf("\nMatrix B: ");
    printMat(b);

    //Calling multiplication function and taking output and printing
    matrix r;
    r = multMat(a,b);
    if(r.m == 0)
    {
        printf("\nERROR: Invalid Matrix sizes for Multiplication");
        return 0;
    }
    else
    {
        printf("\nMatrices after Multiplication: ");
        printf("\nMatrix A: ");
        printMat(a);
        printf("\nMatrix B: ");
        printMat(b);
        printf("\nResultant Matrix: ");
        printMat(r);
    }

    free(a.data);
    free(b.data);
    free(r.data);
    return 0;
}
