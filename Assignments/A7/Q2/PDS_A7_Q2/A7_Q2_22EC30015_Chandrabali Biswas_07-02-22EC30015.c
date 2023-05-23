/*
Name:Chandrabali Biswas
Roll No:22EC30015
Section:2
Problem 2
Description: Matrix Multiplication
*/
#include <stdio.h>      //Header files
#include <alloca.h>
int main()    //main function
{
    int m, n, p, s, min_row, min_col, temp;
    int** A;int** B;int** C;
    printf("Enter m,n,p:");
    scanf("%d%d%d",&m,&n,&p);   //takes input from user (indices)

    A = (int**)calloc(m,sizeof(int*));  //allocating memory for A,B and C

    for(int i=0;i<m;i++)
        A[i]=(int*)calloc(n,sizeof(int));

    B = (int**)calloc(n,sizeof(int*));

    for(int i=0;i<n;i++)
        B[i]=(int*)calloc(p,sizeof(int));

    C = (int**)calloc(m,sizeof(int*));

    for(int i=0;i<m;i++)
        C[i]=(int*)calloc(p,sizeof(int));

    printf("Enter elements of A:"); //taking input values in matrix A
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter elements of B:"); //taking input values in matrix B
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<p;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    min_row = (m<=n)?m:n;
    min_col = (n<=p)?n:p;

    for(int i=0;i<min_row;i++)  //swaps the respective elements
    {
        for(int j=0;j<min_col;j++)
        {
           temp=A[i][j];
           A[i][j] = B[i][j];
           B[i][j] = temp;
        }
    }

    for(int i=0;i<m;i++)    //matrix multiplication
    {

        for(int j=0;j<p;j++)
        {
            s=0;
            for(int k=0;k<n;k++)
            {
                s = s+ (A[i][k]*B[k][j]);
            }
            C[i][j] = s;
        }
    }

    printf("Matrix A:\n");

    for(int i=0;i<m;i++)    //printing matrix A
    {
        for(int j=0;j<n;j++)
        {
            printf("%d  ",A[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix B:\n");

    for(int i=0;i<n;i++)   //printing matrix B
    {
        for(int j=0;j<p;j++)
        {
            printf("%d  ",B[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix C:\n");

    for(int i=0;i<m;i++)   //printing matrix C
    {
        for(int j=0;j<p;j++)
        {
            printf("%d  ",C[i][j]);
        }
        printf("\n");
    }
    free(A);
    free(B);
    free(C);

    return 0;  //end
}
