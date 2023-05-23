#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <limits.h>

void swap(int* a,int* b)
{
    int z=*b;
    *b=*a;
    *a=z;

}
int main()
{
    int m,n,p;
    scanf("%d%d%d",&m,&n,&p);
    printf("\n\n");

    int** a = (int **) calloc(m, sizeof(int*));

    for (int i = 0; i < m; i++)
    {
         a[i] = (int *) calloc(n, sizeof(int));
    }

    int** b = (int **) calloc(n, sizeof(int*));
    for (int i = 0; i < m; i++)
    {
         b[i] = (int *) calloc(p, sizeof(int));
    }

    int** c = (int **) calloc(m, sizeof(int*));
    for (int i = 0; i < m; i++)
    {
         c[i] = (int *) calloc(p, sizeof(int));
    }

    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            scanf ("%d", &a[i][j]);
        }
    }

    printf("\n\n");

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<p; j++)
        {
            scanf ("%d", &b[i][j]);
        }
    }

    int x,y;
    if (m<=n)
    {
        x=m;
    }
    else
    {x=n;}
    if (n<=p)
    {
        y=n;
    }
    else {y=p;}
    printf("\n%d\n%d",x,y);

    for(int i=0; i<x; i++)
    {
        for (int j=0; j<y; j++)
        {
            swap(&a[i][j],&b[i][j]);
        }
    }
    printf("\n\n");
    printf("Matrix A:-\n\n");

    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            printf ("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");
    printf("Matrix B:-\n\n");

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<p; j++)
        {
            printf ("%d ", b[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");

    for (int i=0;i<m;i++)
    {
        for(int j=0;j<p;j++)
        {
            c[i][j]=0;
            for(int f=0;f<n;f++)
            {
                c[i][j]+=a[i][f]*b[f][j];
            }
        }
    }

    printf("Matrix C:-\n\n");

    for (int i=0; i<m; i++)
    {
        for (int j=0; j<p; j++)
        {
            printf ("%d ", c[i][j]);
        }
        printf("\n");
    }




}
