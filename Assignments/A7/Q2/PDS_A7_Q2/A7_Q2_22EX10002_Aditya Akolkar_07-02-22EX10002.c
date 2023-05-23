#include<stdio.h>
#include<stdlib.h>

void swap (int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}

int main()
{
    int i, **a, **b, **c;
    int m, n, p;
    int j, k, I, J, K;


    scanf("%d %d %d", &m,&n,&p);





    a= (int **) calloc(m, sizeof(int*));
    for (int i = 0; i < m; i++)
        a[i] = (int *) calloc(n, sizeof(int));

    b = (int **) calloc(n, sizeof(int*));
    for (int i = 0; i < m; i++)
        b[i] = (int *) calloc(p, sizeof(int));

    c = (int **) calloc(m, sizeof(int*));
    for (int i = 0; i < m; i++)
        c[i] = (int *) calloc(p, sizeof(int));

    for(j=0; j<n; j++)
    {
        for(k=0; k<m; k++)
        {
            scanf("%d", &a[k][j]);
        }
    }

      for(j=0; j<p; j++)
    {
        for(k=0; k<n; k++)
        {
            scanf("%d", &b[k][j]);
        }
    }


    for(I=0;I<m;I++)
    {
        for(J=0;J<p;J++)
        {
            for(K=0;K<n;K++)
            {
                c[I][J] += a[I][K]* b[K][J];
            }
        }
    }


    if(m<=n && n<=p)
    {
        for(j=0; j<m; j++)
        {
            for(k=0; k<n; k++)
            {
                swap(&a[k][j], &b[k][j]);
            }
        }
    }

    else if(m>n && n>p)
    {
        for(j=0; j<m; j++)
        {
            for(k=0; k<p; k++)
            {
                swap(&a[k][j], &b[k][j]);
            }
        }
    }

    else if(m>n && n<=p)
    {
        for(j=0; j<n; j++)
        {
            for(k=0; k<n; k++)
            {
                swap(&a[k][j], &b[k][j]);
            }
        }
    }

    else if(m<=n && n>p)
    {
        for(j=0; j<m; j++)
        {
            for(k=0; k<p; k++)
            {
                swap(&a[k][j], &b[k][j]);
            }
        }
    }


    printf("Matrix A:\n");
    for(j=0; j<m; j++)
    {
        for(k=0; k<n; k++)
        {
            printf("%d ", a[k][j]);
        }
        printf("\n");
    }

   printf("Matrix B:\n");
    for(j=0; j<n; j++)
    {
        for(k=0; k<p; k++)
        {
            printf("%d ", a[k][j]);
        }
        printf("\n");
    }

    printf("Matrix C:\n");
    for(j=0; j<m; j++)
    {
        for(k=0; k<p; k++)
        {
            printf("%d ", c[k][j]);
        }
        printf("\n");
    }

    free(a);
    free(b);
    free(c);
}
