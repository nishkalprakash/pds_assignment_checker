/*
* Section 2
* Roll No : 22MA10067
* Name : Utkarsh
* Assignment No : 8
* Description : Program to read matrix and multiply
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef struct MATRIX {
     int **arr;
}matrix;


int main()
{
    int m,n1,n2,p;
    matrix A,B;
    printf("Enter the number of rows for matrix A: ");
    scanf("%d",&m);
    printf("Enter the number of columns for matrix A: ");
    scanf("%d",&n1);
    printf("Enter the number of rows for matrix B: ");
    scanf("%d",&n2);
    printf("Enter the number of columns for matrix B: ");
    scanf("%d",&p);
    printf("Enter the value for matrix A (%d*%d):",m,n1);
    A.arr=(int **)malloc(m*sizeof(int *));
    for (int i=0;i<m;i++){
        printf("Row %d: ",i+1);
        A.arr[i]=(int *)malloc(n1*sizeof(int));
        for (int j=0;j<n1;j++){
            scanf("%d",&A.arr[i][j]);
        }

    }
    printf("Enter the value for matrix A (%d*%d):",n2,p);
    B.arr=(int **)malloc(n2*sizeof(int *));
    for (int i=0;i<n2;i++){
        printf("Row %d: ",i+1);
        B.arr[i]=(int *)malloc(p*sizeof(int));
        for (int j=0;j<p;j++){
            scanf("%d",&B.arr[i][j]);
        }

    }

    printf("Matrix before multiplication:\n");
    printf("Matrix A:\n");
    for (int i=0;i<m;i++){
        for (int j=0;j<n1;j++){
            printf("%d ",A.arr[i][j]);
        }
        printf("\n");
    }

    printf("Matrix before multiplication:\n");
    printf("Matrix B:\n");
    for (int i=0;i<n2;i++){
        for (int j=0;j<p;j++){
            printf("%d ",A.arr[i][j]);
        }
        printf("\n");
    }

    if(n1 != n2) printf("\nError: Invalid matrix sizes for multiplication!\n");
    else {
        printf("\nMatrix after multiplication:\n");
        printf("Matrix A:\n");
    for (int i=0;i<m;i++){
        for (int j=0;j<n1;j++){
            printf("%d ",A.arr[i][j]);
        }
        printf("\n");
    }

    printf("Matrix before multiplication:\n");
    printf("Matrix B:\n");
    for (int i=0;i<n2;i++){
        for (int j=0;j<p;j++){
            printf("%d ",B.arr[i][j]);
        }
        printf("\n");
    }
    }
    return 0;

}

