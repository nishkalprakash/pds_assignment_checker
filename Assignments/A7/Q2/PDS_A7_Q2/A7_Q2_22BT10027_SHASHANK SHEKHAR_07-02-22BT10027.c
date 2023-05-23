#include<stdio.h>
#include<stdlib.h>
int main()
{
    int **A,**B,**C;
    int m,n,p;
    printf("Enter the size of the array \n");
    scanf("%d %d %d",&m,&n,&p);
    printf("Enter the numbers A\n");
    A = (int **)calloc(m,sizeof(int *));
    for(int i=0;i<m;i++)
    {
        A[i] = (int *)calloc(n,sizeof(int));

    }
    B = (int **)calloc(n,sizeof(int *));
    for(int i=0;i<n;i++)
    {
        B[i] = (int *)calloc(p,sizeof(int));

    }
    C = (int **)calloc(m,sizeof(int *));
    for(int i=0;i<m;i++)
    {
        C[i] = (int *)calloc(p,sizeof(int));
    }
    for(int i =0;i<m;i++)
    {
        for(int j = 0;j<n;j++)
        {
            scanf("%d",(*(A+i)+j));
        }
    }
    printf("Enter the numbers B\n");
    for(int i =0;i<n;i++)
    {
        for(int j = 0;j<p;j++)
        {
            scanf("%d",(*(B+i)+j));
        }
    }
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
    for(int i =0;i<n;i++)
    {
        for(int j = 0;j<p;j++)
        {
            printf("%d ",(**(B+i)+j));
        }
        printf("\n");
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<p;j++)
        {
            if(i<m&&i<n&&j<n&&j<p)
            {
                int t = *(*(B+i)+j);
                *(*(B+i)+j) = *(*(A+i)+j);
                *(*(A+i)+j) = t;
            }
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<p;j++)
        {
            int pro = 0;
            for(int k=0;k<n;k++)
            {
                pro = pro+(*(*(A+i)+k))*(*(*(B+k)+j));
            }
            *(*(C+i)+j) = pro;
        }
    }
    printf("New Matrix A \n");
    for(int i =0;i<m;i++)
    {
        for(int j = 0;j<n;j++)
        {
            printf("%d ",(**(A+i)+j));
        }
        printf("\n");
    }
    printf("New Matrix B \n");
    for(int i =0;i<n;i++)
    {
        for(int j = 0;j<p;j++)
        {
            printf("%d ",(**(B+i)+j));
        }
        printf("\n");
    }

    printf("Matrix C \n");
    for(int i =0;i<m;i++)
    {
        for(int j = 0;j<p;j++)
        {
            printf("%d ",(**(C+i)+j));
        }
        printf("\n");
    }
}
