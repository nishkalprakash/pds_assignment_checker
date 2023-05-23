#include<stdio.h>
#include<stdlib.h>
int main()
{
    int **a,**b,i,j,m,n,p,k,l,t;
    printf("Enter No. of rows, columns of matrix A and no. of coloumns for matrix B: ");
    scanf("%d %d %d",&m,&n,&p);
    a=(int**)calloc(m,sizeof(int*));
    for(i=0;i<m;i++)
    {
         a[i]=(int*)calloc(n,sizeof(int));
    }
    b=(int**)calloc(n,sizeof(int*));
    for(i=0;i<n;i++)
    {
         b[i]=(int*)calloc(p,sizeof(int));
    }
    printf("matrix A:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
     printf("\n");
    }
     printf("matrix B:\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<p;j++)
            {
                scanf("%d",&b[i][j]);
            }
     printf("\n");
    }
    for(i=0;i<m;i++)
    {
        for(l=0;l<n;l++)
        {
            for(k=0,j=0;k<p,j<n;k++,j++)
            {
               t= a[i][j];
               a[i][j]=b[l][k];
               b[l][k]=t;
            }
        }
    }
     for(i=0;i<n;i++)
    {
        for(j=0;j<p;j++)
            {
                printf("%d ",b[i][j]);
            }
     printf("\n");
    }
    return 0;
}



