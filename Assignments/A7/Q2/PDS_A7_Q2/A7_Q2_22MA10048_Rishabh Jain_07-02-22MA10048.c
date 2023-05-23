#include <stdio.h>
#include <stdlib.h>
void swap (int *x, int *y)
{
int t;
t = *x; *x = *y; *y = t;
}

int main()
{
    int **A,**B,**C;
    int m,n,p,sum;
    scanf("%d %d %d" ,&m,&n,&p);
    A = (int **) calloc(m, sizeof(int*));
    for (int i = 0; i < m; i++)
    {
      A[i] = (int *) calloc(n, sizeof(int));
    }

    B = (int **) calloc(n, sizeof(int*));
    for (int i = 0; i < n; i++)
    {
      B[i] = (int *) calloc(p, sizeof(int));
    }

    C = (int **) calloc(m, sizeof(int*));
    for (int i = 0; i < m; i++)
    {
      C[i] = (int *) calloc(p, sizeof(int));
    }


    for (int k=0; k<m; k++)
    {
        for (int q=0; q<n; q++)
            {
                scanf ("%d", &A[k][q]);
            }
    }
    for (int k=0; k<n; k++)
    {
        for (int q=0; q<p; q++)
            {
                scanf ("%d", &B[k][q]);
            }
    }




    if((n>m) && (n>p))
    {
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<p;j++)
            {
                swap(&A[i][j],&B[i][j]);
            }
        }
    }

    else if((n<m) && (n<p))
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                swap(&A[i][j],&B[i][j]);
            }
        }
    }
    else
    {
        if(m>=p)
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<p;j++)
                {
                    swap(&A[i][j],&B[i][j]);
                }
            }
        }
        else if(m<=p)
        {
            for(int i=0;i<m;i++)
            {
                for(int j=0;j<n;j++)
                {
                    swap(&A[i][j],&B[i][j]);
                }
            }
        }
    }
    printf ("Matrix A is:- \n");

    for (int l=0; l<m; l++)
    {
        for (int q=0; q<n; q++)
            {
                printf ("%d ", A[l][q]);
            }
        printf("\n");
    }
    printf ("Matrix B is:- \n");
    for (int l=0; l<n; l++)
    {
        for (int q=0; q<p; q++)
            {

                printf ("%d ", B[l][q]);

            }
        printf ("\n");
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<p;j++)
        {
            sum=0;
            for(int k=0;k<n;k++)
            {
                sum+=A[i][k]*B[k][j];
            }
            C[i][j]=sum;
        }
    }

    printf ("Matrix C is:- \n");
    for (int l=0; l<m; l++)
    {
        for (int q=0; q<p; q++)
            {

                printf ("%d ", C[l][q]);

            }
        printf ("\n");
    }




    free (A);
    free (B);
    free (C);

}
