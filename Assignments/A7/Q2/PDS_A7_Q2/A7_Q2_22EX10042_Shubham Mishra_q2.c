        #include<stdio.h>
        #include<stdlib.h>
        #include<alloca.h>
        int main(){
        int m,n,p;
        printf("enter the value of m ");
        scanf("%d",&m);
        printf("enter the value of n ");
        scanf("%d",&n);
        printf("enter the value of p ");
        scanf("%d",&p);
        int A[m][n];
        int B[n][p];
        int C[m][p];
        int **ptra = (int **) calloc(m, sizeof(int*));


        for (int i = 0; i < m; i++)
        {


             ptra[i] = (int *) calloc(n, sizeof(int));
        }
        int **ptrb = (int **) calloc(n, sizeof(int*));

        for (int i = 0; i < n; i++)
        {


             ptrb[i] = (int *) calloc(p, sizeof(int));
        }
        int **ptrc = (int **) calloc(m, sizeof(int*));

        for (int i = 0; i < p; i++)
        {


             ptrc[i] = (int *) calloc(p, sizeof(int));
        }
         /*for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                printf("%d ", A[i][j]);

            }
            printf("\n");

        }*/
        printf("enter the elements of A ");
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                scanf("%d ", &A[i][j]);

            }


        }
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                printf("%d ", A[i][j]);

            }
            printf("\n");

        }
        printf("enter the elements of B ");
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=p;j++)
            {
                scanf("%d ", &B[i][j]);

            }

        }

        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=p;j++)
            {
                printf("%d ", B[i][j]);

            }
            printf("\n");

        }

for(int i=1;i<=m;i++)
{
    int sum=0;
    for(int j=1;j<=p;j++)
    {
        for(int j=1;j<=p;j++)
        {


           sum=A[i][j]*B[j][i]+sum;
        }
        C[i][j]=sum;
        sum=0;
    }
}
      for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=p;j++)
            {
                printf("%d ", C[i][j]);

            }
            printf("\n");

        }
}






