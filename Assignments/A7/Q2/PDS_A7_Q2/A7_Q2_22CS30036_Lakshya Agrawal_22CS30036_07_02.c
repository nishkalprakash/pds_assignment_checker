/*
Section 2
Roll No : 22CS30036
Name : Lakshya Agrawal
Assignment No : 7
Description : Matrix Swapping and Matrix Multiplication
*/

#include<stdio.h>
#include<stdlib.h>

int R_C_prdt(int**A,int**B,int row,int col,int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
        sum+=(A[row][i])*(B[i][col]);
    return sum;
}

int** MATRIX_PRD(int**A,int**B,int**C,int m,int n,int p)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<p;j++)
          C[i][j] = R_C_prdt(A,B,i,j,n);
    }
}

void MATRIX_print(int **A,int m,int n)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            printf("%-3d ",A[i][j]);
        printf("\n");
    }
}

void MATRIX_swap(int **A,int **B,int m,int n,int p)
{
    int t;
    for(int i=0;i<m;i++)
    {
        if(i<n)
        {
          for(int j=0;j<n;j++)
           {
              t = A[i][j];
              A[i][j] = B[i][j];
              B[i][j] = t;
           }
        }
        else
            break;
    }
}

int main(){
    int n,m,p;
    scanf("%d%d%d",&m,&n,&p);
    printf("\n");

    int **A,**B,**C;

    A = (int**)calloc(m,sizeof(int*));
    for(int i=0;i<m;i++)
        A[i] = (int*)calloc(n,sizeof(int));

    B = (int**)calloc(n,sizeof(int*));
    for(int i=0;i<n;i++)
        B[i] = (int*)calloc(p,sizeof(int));

    C = (int**)calloc(m,sizeof(int*));
    for(int i=0;i<m;i++)
        C[i] = (int*)calloc(p,sizeof(int));

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            scanf("%d",&A[i][j]);
    }

    printf("\n");

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<p;j++)
            scanf("%d",&B[i][j]);
    }

    MATRIX_swap(A,B,m,n,p);

    printf("\nMatrix A:-\n");
    MATRIX_print(A,m,n);

    printf("\nMatrix B:-\n");
    MATRIX_print(B,n,p);

    MATRIX_PRD(A,B,C,m,n,p);
    printf("\nMatrix C:-\n");
    MATRIX_print(C,m,p);

    return 0;
}

