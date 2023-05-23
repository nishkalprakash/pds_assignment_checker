/*
* Section 2
* Roll no : 22GG10052
* Name : Vedant Thakare
* Assignment : 7
* Description : Matrix multiplication
*/
#include<stdio.h>
int swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    int i,j,m,n,k,p;
    printf("Enter the values of rows and columns of matrices A and B\n");
    scanf("%d %d %d",&m,&n,&p);
    //allocating memory to the matrices
    int **A,**B,**C;
    A = (int **) calloc(m, sizeof(int*));
    for(int i = 0; i < m; i++)
    A[i] = (int *) calloc(n, sizeof(int));
    B = (int **) calloc(n, sizeof(int*));
    for(int i = 0; i < n; i++)
    B[i] = (int *) calloc(p, sizeof(int));
    C = (int **) calloc(m, sizeof(int*));
    for(int i = 0; i < m; i++)
    C[i] = (int *) calloc(p, sizeof(int));
    printf("Enter the elements of matrix A :");
    printf("\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter the elements of matrix B :");
    printf("\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<p;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
          swap(&A[i][j],&B[i][j]);
        }
    }
    printf("Matrix A after swapping:");
    printf("\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    printf("Matrix B after swapping:");
    printf("\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<p;j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<p;j++)
        {
            for(k=0;k<n;k++)
                C[i][j]+=A[i][k]*B[k][j];
        }
    }
    printf("Matrix C :");
    printf("\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<p;j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
    return 0;


}
