/*  Name: Ratan Kumar
Roll no.: 22EC10067
section: 2
Problem no. 2*/
#include<stdio.h>
int main()
{
    int m,n,p;
    scanf("%d%d%d",&m,&n,&p);
    printf("\n");
    int **A;
    int **B;
    A = (int **) calloc(m, sizeof(int*));

    for (int i = 0; i < m; i++)

        A[i] = (int *) calloc(n, sizeof(int));

    B = (int **) calloc(m, sizeof(int*));

    for (int i = 0; i < m; i++)

        B[i] = (int *) calloc(n, sizeof(int));

    int arr[m][n],brr[n][p],trr[m][p],temp[m][n];
    printf("Matrix: A\n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
     for(int i=0; i<m-1; i++)
    {
        for(int j=0; j<n-1; j++)
        {
              temp[i][j]= arr[i][j];
        }
    }

    printf("Matrix: B\n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<p; j++)
        {
            scanf("%d",&brr[i][j]);
        }
        printf("\n");

    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<p; j++)
        {
            arr[i][j]=brr[i][j];

        }
    }
    printf("Matrix A:-\n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0; i<m-1; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            brr[i][j]=temp[i][j];
        }

    }
    printf("\n");

    printf("Matrix B:-\n");

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<p; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<p; j++)
        {
            trr[i][j] = arr[i][j] * brr[j][i];
        }
    }
    printf("\n");

    printf("Matrix C:-\n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<p; j++)
        {
            printf("%d ",trr[i][j]);
        }
        printf("\n");
    }

    return 0;
}