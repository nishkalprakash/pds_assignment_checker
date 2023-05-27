/*
*Section 2
*Roll no- 22AE10042
*Name- Ullash Chandra Modi
*Assignment no- 1
*Description-structure with dynamic memory allocation
*/
#include <stdio.h>
#include <math.h>

int main()
{
    int m,n,p,q,i,j;
    printf("enter the number of rows of matrix A : ");
    scanf("%d",&m);
    printf("enter the number of columns of matrix A : ");
    scanf("%d",&n);
    printf("enter the number of rows of matrix B : ");
    scanf("%d",&p);
    printf("enter the number of columns of matrix B : ");
    scanf("%d",&q);


    typedef struct matrixa{
    int c[m][n];
    }A;

    typedef struct matrixb{
    int d[p][q];
    }B;

    A **a;
    B **b;


    a=(int **)malloc(m*sizeof(int *));
    for (i=0;i<m;i++)
    {
        a[i]=(int *)malloc(n*sizeof(int));
    }

    b=(int **)malloc(p*sizeof(int *));
    for (i=0;i<p;i++)
    {
        b[i]=(int *)malloc(q*sizeof(int));
    }

    printf("\nEnter array A of order %d*%d\n",m,n);
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf("%d",&(*(a+i)+j)->c[i][j]);
        }
    }

    printf("\nEnter array B of order %d*%d\n",p,q);
    for (i=0;i<p;i++)
    {
        for (j=0;j<q;j++)
        {
            scanf("%d",&(*(b+i)+j)->d[i][j]);
        }
    }

    printf("\nMatrix A\n");
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("%d ",((*(a+i)+j)->c[i][j]));
        }
        printf("\n");
    }

    printf("\nMatrix B\n");
    for (i=0;i<p;i++)
    {
        for (j=0;j<q;j++)
        {
            printf("%d ",((*(b+i)+j)->d[i][j]));
        }
        printf("\n");
    }

    return 0;
}
