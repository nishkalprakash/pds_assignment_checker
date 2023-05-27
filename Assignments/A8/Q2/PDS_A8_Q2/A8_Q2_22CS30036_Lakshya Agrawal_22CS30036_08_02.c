/*
Section 2
Roll No : 22CS30036
Name : Lakshya Agrawal
Assignment No : 8
Description : Matrix Multiplication
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct MATRIX{
   int **ptr;
}MATRIX;

MATRIX allocate_memory(int rows,int cols)
{
    MATRIX X;
    X.ptr = (int**)malloc(rows*sizeof(int*));
    for(int i=0;i<rows;i++)
        X.ptr[i] = (int*) malloc(cols*sizeof(int));
    return X;
}

void read_values(MATRIX *X,int rows,int cols)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
            scanf("%d",&((*X).ptr)[i][j]);
    }
}

void display_values(MATRIX X,int rows,int cols)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
            printf("%d ",(X.ptr)[i][j]);
        printf("\n");
    }
}

void multiplication(MATRIX A,MATRIX B,MATRIX *C,int rows1,int cols1,int rows2,int cols2)
{
    int sum=0;
    for(int i=0;i<rows1;i++)
    {
        for(int j=0;j<cols2;j++)
        {
            sum = 0;
            for(int k=0;k<cols1;k++)
               sum+= (A.ptr)[i][k] * (B.ptr)[k][j];
            ((*C).ptr)[i][j] = sum;
        }
    }
}

int main()
{
    int r1,c1,r2,c2;
    printf("Enter the number of rows for matrix A: ");
    scanf("%d",&r1);
    printf("Enter the number of columns for matrix A: ");
    scanf("%d",&c1);
    printf("Enter the number of rows for matrix B: ");
    scanf("%d",&r2);
    printf("Enter the number of columns for matrix B: ");
    scanf("%d",&c2);

    MATRIX A = allocate_memory(r1,c1);
    printf("\nEnter the values for matrix A:\n");
    read_values(&A,r1,c1);

    MATRIX B = allocate_memory(r2,c2);
    printf("\nEnter the values for matrix B:\n");
    read_values(&B,r2,c2);

    printf("\nMatrices before multiplication:\n");
    printf("\nMatrix A:\n");
    display_values(A,r1,c1);
    printf("Matrix B:\n");
    display_values(B,r2,c2);

    if(c1==r2)
    {
      MATRIX C = allocate_memory(r1,c2);
      printf("\nMatrices after multiplication:\n");
      printf("\nMatrix A:\n");
      display_values(A,r1,c1);
      printf("Matrix B:\n");
      display_values(B,r2,c2);
      printf("Resultant Matrix:\n");
      multiplication(A,B,&C,r1,c1,r2,c2);
      display_values(C,r1,c2);
    }
    else
    {
        printf("\nError: Invalid matrix sizes for multiplication!\n");
    }

    return 0;
}
