#include <stdio.h>
#include <stdlib.h>
typedef struct matrix{
    int row;
    int col;
}matrix;

mul(int **a,int**b,int **c,int m,int n,int p)
{
    int i,j,k;
    for(i=0;i<m;i++)
    {
        for(k=0;k<p;k++)
        {
            for(j=0;j<n;j++)
            {
                c[i][k]+=a[i][j]*b[j][k];        //product
            }
        }
    }
    printf("\n Multiplied Array  : \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<p;j++)
        {
            printf("%d  ",c[i][j]);
        }
        printf("\n");
    }

}


void main()
{
    int **a,**b,**c;
    int m,n,p,i,j;
    matrix A,B,C;

    printf("enter rows and col of A:  \n");
    scanf("%d%d",&A.row,&A.col);
    printf("enter rows and col of B:  \n");
    scanf("%d%d",&B.row,&B.col);

    a = (int **) calloc(m, sizeof(int*));      //dynamic memory allocation
    for (int i = 0; i < m; i++)
        a[i] = (int *) calloc(n, sizeof(int));

    b = (int **) calloc(n, sizeof(int*));      //dynamic memory allocation
    for (int i = 0; i < n; i++)
        b[i] = (int *) calloc(p, sizeof(int));

    c = (int **) calloc(m, sizeof(int*));      //dynamic memory allocation
    for (int i = 0; i < m; i++)
        c[i] = (int *) calloc(p, sizeof(int));

    printf("Enter %d elements: ",(A.row * A.col));
    for(i=0;i<A.row;i++)
    {
        for(j=0;j<A.col;j++)
            scanf("%d",&a[i][j]);       //values entered in A
    }
    printf("Enter %d elements: ",(B.row * B.col));
    for(i=0;i<B.row;i++)
    {
        for(j=0;j<B.col;j++)
            scanf("%d",&b[i][j]);       //Values entered in B
    }
    printf("\n Array A entered: \n");
    for(i=0;i< A.row;i++)
    {
        for(j=0;j< A.col;j++)
            printf("%d  ",a[i][j]);
        printf("\n");
    }
    printf("\n Array B entered: \n");
    for(i=0;i< B.row;i++)
    {
        for(j=0;j< B.col;j++)
            printf("%d  ",b[i][j]);
        printf("\n");
    }

    if(A.col==B.row)
    {
        m=A.row;
        n=A.col;
        p=B.col;

        mul(a,b,c,m,n,p);       // function call
        printf("Matrices after multiplication: ");
        printf("\n Array A  :\n");
    for(i=0;i< A.row;i++)
    {
        for(j=0;j< A.col;j++)
            printf("%d  ",a[i][j]);
        printf("\n");
    }
    printf("\n Array B : \n");
    for(i=0;i< B.row;i++)
    {
        for(j=0;j< B.col;j++)
            printf("%d  ",b[i][j]);
        printf("\n");
    }
    }
    else
    {
        printf("\n multiplication not possible\n ");
    }
}
