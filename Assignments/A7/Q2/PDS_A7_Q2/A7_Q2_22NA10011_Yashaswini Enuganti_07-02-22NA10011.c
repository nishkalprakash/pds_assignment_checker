#include<stdio.h>
int main()
{
    int **A,**B,i,j,p,n,m;
     printf("enter the size of row: ");
    scanf("%d",&m);
    printf("%d",m);
    printf("enter the size of column: ");
    scanf("%d",&n);
    printf("%d\n",n);

    A=(int **)calloc(m,sizeof(int *));
    for(int i=0;i<m;i++)
        A[i]=(int *)calloc(n,sizeof(int));
   
    for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&A[i][j]);
            }

    }
    for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%d",A[i][j]);

            }
            printf("\n");

    }B=(int **)calloc(n,sizeof(int *));
    for(int i=0;i<p;i++)
        A[i]=(int *)calloc(n,sizeof(int));
   
    for(i=0;i<n;i++)
        {
            for(j=0;j<p;j++)
            {
                scanf("%d",&A[i][j]);
            }

    }
    for(i=0;i<n;i++)
        {
            for(j=0;j<p;j++)
            {
                printf("%d",A[i][j]);

            }
            printf("\n");

    }
    C=(int **)calloc(m,sizeof(int *));
    for(int i=0;i<m;i++)
        A[i]=(int *)calloc(p,sizeof(int));
   
    for(i=0;i<m;i++)
        {
            for(j=0;j<p;j++)
            {
                scanf("%d",&A[i][j]);
            }

    }
    for(i=0;i<m;i++)
        {
            for(j=0;j<p;j++)
            {
                printf("%d",A[i][j]*B[i][j]);

            }
            printf("\n");

    }

}
