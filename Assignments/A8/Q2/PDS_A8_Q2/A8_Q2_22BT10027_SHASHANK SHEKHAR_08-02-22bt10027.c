#include<stdio.h>
#include<stdlib.h>
int main()
{
    int m,n,p,q;
    printf("enter the number of rows for matrix A");
    scanf("%d",m);
    printf("enter the number of columns for matrix A");
    scanf("%d",n);
    printf("enter the number of rows for matrix B");
    scanf("%d",p);
    printf("enter the number of columns for matrix B");
    scanf("%d",q);
    int **A,**B,**C;
    *A = (int**)malloc(m*sizeof(int*));
    for(int i =0;i<m;i++)
    {
        A[i] = (int*)malloc(n*sizeof(int));
    }
    B = (int **)calloc(p,sizeof(int *));
    for(int i=0;i<p;i++)
    {
        B[i] = (int *)calloc(q,sizeof(int));

    }
    C = (int **)calloc(m,sizeof(int *));
    for(int i=0;i<m;i++)
    {
        C[i] = (int *)calloc(q,sizeof(int));
    }
    printf("Enter the numbers A\n");
    for(int i =0;i<m;i++)
    {
        for(int j = 0;j<n;j++)
        {
            scanf("%d",(*(A+i)+j));
        }
    }
    printf("Enter the numbers B\n");
    for(int i =0;i<p;i++)
    {
        for(int j = 0;j<q;j++)
        {
            scanf("%d",(*(B+i)+j));
        }
    }
    printf("Matrices before multiplication \n");
    printf("Matrix A \n");
    for(int i =0;i<m;i++)
    {
        for(int j = 0;j<n;j++)
        {
            printf("%d ",(**(A+i)+j));
        }
        printf("\n");
    }
    printf("Matrix B \n");
    for(int i =0;i<p;i++)
    {
        for(int j = 0;j<q;j++)
        {
            printf("%d ",(**(B+i)+j));
        }
        printf("\n");
    }
    printf("Matrices after multiplication \n");
    printf("Matrix A \n");
    for(int i =0;i<m;i++)
    {
        for(int j = 0;j<n;j++)
        {
            printf("%d ",(**(A+i)+j));
        }
        printf("\n");
    }
    printf("Matrix B \n");
    for(int i =0;i<p;i++)
    {
        for(int j = 0;j<q;j++)
        {
            printf("%d ",(**(B+i)+j));
        }
        printf("\n");
    }
    if(n==p)
    {
        printf("Matrices after multiplication \n");
    printf("Matrix A \n");
    for(int i =0;i<m;i++)
    {
        for(int j = 0;j<n;j++)
        {
            printf("%d ",(**(A+i)+j));
        }
        printf("\n");
    }
    printf("Matrix B \n");
    for(int i =0;i<p;i++)
    {
        for(int j = 0;j<q;j++)
        {
            printf("%d ",(**(B+i)+j));
        }
        printf("\n");
    }
        for(int i=0;i<m;i++)
    {
        for(int j=0;j<q;j++)
        {
            int pro = 0;
            for(int k=0;k<n;k++)
            {
                pro = pro+(*(*(A+i)+k))*(*(*(B+k)+j));
            }
            *(*(C+i)+j) = pro;
        }
    }
    printf("Resultant Matrix \n");
    for(int i =0;i<m;i++)
    {
        for(int j = 0;j<q;j++)
        {
            printf("%d ",(**(C+i)+j));
        }
        printf("\n");
    }
    }
    else
        printf("Invalid matrix size for multiplication");
}
