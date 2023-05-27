/*Shreya Vadhavkar
22ME10091
Lab 8
Section 2
question 2*/
#include<stdio.h>
#include<malloc.h>
struct mat
{
    int m;
    int n;
    int **p;
};
int main()
{
    struct mat a,b,c;
    printf("Enter the number of rows for matrix A:");
    scanf("%d", &a.m);
    printf("Enter the number of columns for matrix A:");
    scanf("%d", &a.n);
    printf("Enter the number of rows for matrix B:");
    scanf("%d", &b.m);
    printf("Enter the number of columns for matrix B:");
    scanf("%d", &b.n);
    a.p = (int **)malloc(a.m*sizeof(int *));
    int i;
    for(i=0;i<a.m;++i)
    {
        a.p[i]=(int*)malloc(a.n*sizeof(int));
    }
    b.p = (int **)malloc(b.m*sizeof(int *));
    for(i=0;i<b.m;++i)
    {
        b.p[i]=(int*)malloc(b.n*sizeof(int));
    }
    printf("Enter the values for matrix A:\n");
    int j;
    for(i=0;i<a.m;++i)
    {
        for(j=0;j<a.n;++j)
        {
            scanf("%d", &a.p[i][j]);
        }
    }
    printf("Enter the values for matrix B:\n");
    for(i=0;i<b.m;++i)
    {
        for(j=0;j<b.n;++j)
        {
            scanf("%d", &b.p[i][j]);
        }
    }
    printf("Matrices before multiplication:\nMatrix A:\n");
    for(i=0;i<a.m;++i)
    {
        for(j=0;j<a.n;++j)
        {
            printf("%d ",a.p[i][j]);
        }
        printf("\n");
    }
    printf("Matrix B:\n");
    for(i=0;i<b.m;++i)
    {
        for(j=0;j<b.n;++j)
        {
            printf("%d ",b.p[i][j]);
        }
        printf("\n");
    }
    c.m=a.m;
    c.n=b.n;
    int k,l;
    c.p = (int **)calloc(c.m,sizeof(int *));
    for(i=0;i<c.m;++i)
    {
        c.p[i]=(int*)calloc(c.n,sizeof(int));
    }
    if(a.n==b.m)
    {
        for(i=0;i<c.m;++i)
        {
            for(j=0,k=0,l=0;j<c.n;++j,++l,++k)
            {
                for(k=0,l=0;(k<a.n)&&(l<a.n);++k,++l)
                {
                    c.p[i][j]=c.p[i][j]+(a.p[i][k]*b.p[l][j]);
                }

            }
        }
        printf("Resultant Matrix:\n");
        for(i=0;i<c.m;++i)
        {
            for(j=0;j<c.n;++j)
            {
                printf("%d ",c.p[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Error: Invalid matrix sizes for multiplication!");
    }
    return 0;
}

