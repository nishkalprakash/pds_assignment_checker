/*
*Section 2
*Roll no- 22AE10042
*Name- Ullash Chandra Modi
*Assignment no- 2
*Description-
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int **a,**b,**c;
    int m,n,p,i,j,d,e,f,q,r;

    printf("enter m n p :");
    scanf("%d %d %d",&m,&n,&p);

    a=(int **)calloc(m,sizeof(int *));
    for (i=0;i<m;i++)
    {
        a[i]=(int *)calloc(n,sizeof(int));
    }

    b=(int **)calloc(n,sizeof(int *));
    for (i=0;i<n;i++)
    {
        b[i]=(int *)calloc(p,sizeof(int));
    }
    c=(int **)calloc(m,sizeof(int *));
    for (i=0;i<m;i++)
    {
        c[i]=(int *)calloc(p,sizeof(int));
    }

    printf("Enter array A of order %d*%d\n",m,n);
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf("%d",(*(a+i)+j));
        }
    }

    printf("Enter array B of order %d*%d\n",n,p);
    for (i=0;i<n;i++)
    {
        for (j=0;j<p;j++)
        {
            scanf("%d",(*(b+i)+j));
        }
    }

    e=(n<m)?n:m;
    d=(n<p)?n:p;

    for (i=0;i<e;i++)
    {
        for (j=0;j<d;j++)
        {
            f=*(*(a+i)+j);
            *(*(a+i)+j)=*(*(b+i)+j);
            *(*(b+i)+j)=f;
        }
    }

    printf("\nMatrix A\n");
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("%d ",*(*(a+i)+j));
        }
        printf("\n");
    }

    printf("\nMatrix B\n");
    for (i=0;i<n;i++)
    {
        for (j=0;j<p;j++)
        {
            printf("%d ",*(*(b+i)+j));
        }
        printf("\n");
    }

    for (i=0;i<m;i++)
    {
        for (j=0;j<p;j++)
        {
            q=0;
            for (r=0;r<n;r++)
            {
                q=q+(*(*(a+i)+r))*(*(*(b+r)+j));
            }
            *(*(c+i)+j)=q;
        }
    }

    printf("\nMatrix C\n");
    for (i=0;i<n;i++)
    {
        for (j=0;j<p;j++)
        {
            printf("%d ",*(*(c+i)+j));
        }
        printf("\n");
    }

    free(a);
    free(b);
    free(c);


    return 0;
}
