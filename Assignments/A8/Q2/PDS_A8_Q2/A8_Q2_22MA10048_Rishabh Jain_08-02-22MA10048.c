#include <stdio.h>

typedef struct Matrix{
    int rows;
    int cols;
    int **ptr;

}matrix;

matrix mul(matrix A, matrix B)
{
    matrix C;
    int sum;
    C.rows=A.rows;
    C.cols=B.cols;
    C.ptr = (int **) malloc(C.rows* sizeof(int*));
    for (int i = 0; i < C.rows; i++)
    {
      C.ptr[i] = (int *) malloc(C.cols* sizeof(int));
    }
    for(int i=0;i<A.rows;i++)
    {
        for(int j=0;j<B.cols;j++)
        {
            sum=0;
            for(int k=0;k<A.cols;k++)
            {
                sum+=(A.ptr[i][k])*(B.ptr[k][j]);
            }
            C.ptr[i][j]=sum;
        }
     }
     return C;
}


int main()
{
    matrix A,B,C;
    printf("Enter the number of rows for matrix A: ");
    scanf("%d" ,&A.rows);
    printf("Enter the number of columns for matrix A: ");
    scanf("%d" ,&A.cols);
    printf("Enter the number of rows for matrix B: ");
    scanf("%d" ,&B.rows);
    printf("Enter the number of columns for matrix B: ");
    scanf("%d" ,&B.cols);
    A.ptr = (int **) malloc(A.rows* sizeof(int*));
    for (int i = 0; i < A.rows; i++)
    {
      A.ptr[i] = (int *) malloc(A.cols* sizeof(int));
    }
    B.ptr = (int **) malloc(B.rows* sizeof(int*));
    for (int i = 0; i < B.rows; i++)
    {
      B.ptr[i] = (int *) malloc(B.cols* sizeof(int));
    }


    /*Scanning the matrices from user*/
    printf("Enter the Values for Matrix A:\n");
    for (int k=0; k<A.rows; k++)
    {
        for (int j=0; j<A.cols; j++)
            {
                scanf ("%d", &A.ptr[k][j]);
            }
    }

    printf("Enter the Values for Matrix B:\n");
    for (int k=0; k<B.rows; k++)
    {
        for (int j=0; j<B.cols; j++)
            {
                scanf ("%d", &B.ptr[k][j]);
            }
    }

    /*Printing the original matrices*/
    printf("Matrices before multiplication:\n");
    printf("Matrix A: \n");
    for (int l=0; l<A.rows; l++)
    {
        for (int j=0; j<A.cols; j++)
            {
                printf ("%d ", A.ptr[l][j]);
            }
        printf("\n");
    }
    printf("Matrix B: \n");
    for (int l=0; l<B.rows; l++)
    {
        for (int j=0; j<B.cols; j++)
            {
                printf ("%d ", B.ptr[l][j]);
            }
        printf("\n");
    }

    /*After Multiplication*/
    if(A.cols!=B.rows)
    {
        printf("Error: Invalid matrix sizes for multiplication!");
    }
    else
    {
        C=mul(A,B);
        printf("Matrices after multiplication:\n");
        printf("Matrix A: \n");
        for (int l=0; l<A.rows; l++)
        {
            for (int j=0; j<A.cols; j++)
                {
                    printf ("%d ", A.ptr[l][j]);
                }
            printf("\n");
        }
        printf("Matrix B: \n");
        for (int l=0; l<B.rows; l++)
        {
            for (int j=0; j<B.cols; j++)
                {
                    printf ("%d ", B.ptr[l][j]);
                }
            printf("\n");
        }
        printf("Matrix C: \n");
        for (int l=0; l<C.rows; l++)
        {
            for (int j=0; j<C.cols; j++)
                {
                    printf ("%d ", C.ptr[l][j]);
                }
            printf("\n");
        }
    }



}

