# include <stdio.h>
# include <stdlib.h>
int main()
{
    int **A;
    int **B;
    int **C;
    int m,n,p;


    printf("Enter the size of A: ");
    scanf("%d" "%d",&m,&n);
    A = (int **) calloc(m, sizeof(int*));
    for (int i = 0; i < m; i++)
    {
        A[i] = (int *) calloc(n, sizeof(int));
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }


    printf("Enter the size of B: ");
    scanf("%d" "%d",&n,&p);
    B=(int **) calloc(n, sizeof(int*));
    for (int i = 0; i < m; i++)
    {
        B[i] = (int *) calloc(p, sizeof(int));
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<p;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }

        int x,y;
    if(m<=n) x=m;
    else x=n;
    if(n<=p) y=n;
    else y=p;
    for(int i=o;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
             swap(&A[i][j],&B[i][j]);
        }

    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<p;j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
    printf("\n");





    C=(int **) calloc(m, sizeof(int*));
    for (int i = 0; i < m; i++)
    {
        C[i] = (int *) calloc(p, sizeof(int));
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<p;j++)
        {
            //int sum=0;
            for(int k=0;k<n;k++)
            {
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<p;j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }









    return 0;

}
