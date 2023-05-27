/*
Name:Chandrabali Biswas
Roll No:22EC30015
Section:2
Problem 2
Description: Matrix Multiplication
*/
#include <stdio.h>  //Header files
typedef struct matrix{   //defining matrix data type
    int** ptr;
    int row;
    int column;
}matrix;

int main()  //main function
{
    matrix A,B,R;
    int s;
    printf("Enter the number of rows for matrix A:"); //takes input of rows and columns
    scanf("%d",&A.row);
    printf("Enter the number of columns for matrix A:");
    scanf("%d",&A.column);
    printf("Enter the number of rows for matrix B:");
    scanf("%d",&B.row);
    printf("Enter the number of columns for matrix B:");
    scanf("%d",&B.column);

    A.ptr = (int **)malloc(A.row*sizeof(int*));  //dynamically allocates memory for matrix A
    for(int i=0;i<A.row;i++)
        A.ptr[i] = (int *)malloc(A.column*sizeof(int));


    B.ptr = (int **)malloc(B.row*sizeof(int*));  //dynamically allocates memory for matrix B
    for(int i=0;i<B.row;i++)
        B.ptr[i] = (int *)malloc(B.column*sizeof(int));

    printf("Enter the values for matrix A:");  //takes input values for matrix A
    for(int i=0;i<A.row;i++)
    {
        for(int j=0;j<A.column;j++)
        {
            scanf("%d",&A.ptr[i][j]);
        }
    }
    printf("Enter the values for matrix B:");  //takes input values for matrix B
    for(int i=0;i<B.row;i++)
    {
        for(int j=0;j<B.column;j++)
        {
            scanf("%d",&B.ptr[i][j]);
        }
    }

    printf("Matrices before multiplication:\nMatrixA:\n"); //prints matrices
    for(int i=0;i<A.row;i++)
    {
        for(int j=0;j<A.column;j++)
            printf("%d ",A.ptr[i][j]);
        printf("\n");
    }
    printf("Matrix B:\n");
    for(int i=0;i<B.row;i++)
    {
        for(int j=0;j<B.column;j++)
            printf("%d ",B.ptr[i][j]);
        printf("\n");
    }
    if(A.column!=B.row)   //checks for error
        printf("Error:Invalid matrix sizes for multiplication!");
    else
    {
        R.ptr = (int **)malloc(A.row*sizeof(int*));
    for(int i=0;i<A.row;i++)
        R.ptr[i] = (int *)malloc(B.column*sizeof(int));

    for(int i=0;i<A.row;i++)    //matrix multiplication
    {

        for(int j=0;j<B.column;j++)
        {
            s=0;
            for(int k=0;k<A.column;k++)
            {
                s = s+ (A.ptr[i][k]*B.ptr[k][j]);
            }
            R.ptr[i][j] = s;
        }
    }
    printf("Matrices after multiplication:\nMatrixA:\n");  //prints matrices A and B
    for(int i=0;i<A.row;i++)
    {
        for(int j=0;j<A.column;j++)
            printf("%d ",A.ptr[i][j]);
        printf("\n");
    }
    printf("Matrix B:\n");
    for(int i=0;i<B.row;i++)
    {
        for(int j=0;j<B.column;j++)
            printf("%d ",B.ptr[i][j]);
        printf("\n");
    }
    printf("Resultant Matrix:\n");
    for(int i=0;i<A.row;i++)    //prints the resultant matrix
    {
        for(int j=0;j<B.column;j++)
        {
            printf("%d ",R.ptr[i][j]);
        }
        printf("\n");
    }

    }

  return 0;  //end

}
