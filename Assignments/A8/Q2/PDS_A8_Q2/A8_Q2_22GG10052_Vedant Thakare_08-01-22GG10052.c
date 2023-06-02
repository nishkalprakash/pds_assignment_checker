#include<stdio.h>
typedef struct matrix{
int m;
int n;
}matrix;
int main()
{
    int m1,n1,m2,n2,k;
    printf("Enter the number of rows for matrix A:\n");
    scanf("%d",&m1);
    printf("Enter the number of columns for matrix A:\n");
    scanf("%d",&n1);
    printf("Enter the number of rows for matrix B:\n");
    scanf("%d",&m2);
    printf("Enter the number of columns for matrix B:\n");
    scanf("%d",&n2);
    if(n1!=m2)
    {
        printf("Invalid input");
    }
    else{
    int **A,**B,**C;
    A = (int **) calloc(m1, sizeof(int*));
    for(int i = 0; i < m1; i++)
    A[i] = (int *) calloc(n1, sizeof(int));
    B = (int **) calloc(m2, sizeof(int*));
    for(int i = 0; i < m2; i++)
    B[i] = (int *) calloc(n2, sizeof(int));
    C= (int **) calloc(m1, sizeof(int*));
    for(int i = 0; i < m1; i++)
    C[i] = (int *) calloc(n2, sizeof(int));

    printf("Enter the elements of matrix A :");
    printf("\n");
    int i,j;
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n1;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter the elements of matrix B :");
    printf("\n");
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n2;j++)
        {
            for(k=0;k<n1;k++)
                C[i][j]+=A[i][k]*B[k][j];
        }
    }
    printf("Matrix C :");
    printf("\n");
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n2;j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }}
    return 0;
}