#include<stdio.h>
#include<stdlib.h>
int main()
{
    int m,n,p,q,i,j,k,**a,**b,**c;
    printf("enter the rows of matrix,A:");
    scanf("%d",&m);
    printf("enter the coloumns of matrix,A:");
    scanf("%d",&n);
    printf("enter the rows of matrix,B");
    scanf("%d",&p);
    printf("enter the columns of ,matrix ,B");
    scanf("%d",&q);
    a=(int **)malloc(m*sizeof(int*));
    for(i=0;i<m;i++)
    {
        a[i]=(int *)malloc(n*sizeof(int));
    }
     b=(int **)malloc(p*sizeof(int*));
    for(i=0;i<p;i++)
    {
        b[i]=(int *)malloc(q*sizeof(int));
    }
    c=(int **)malloc(m*sizeof(int*));
    for(i=0;i<m;i++)
    {
        c[i]=(int *)malloc(q*sizeof(int));
    }
     printf("enter the values of matrix A");
     for(i=0;i<m;i++)
     {
         for(j=0;j<n;j++)
         {
             scanf("%d",&a[i][j]);
         }
     }
     printf("enter the values of matrix B");
     for(i=0;i<p;i++)
     {
         for(j=0;j<q;j++)
         {
             scanf("%d",&b[i][j]);
         }
     }
     printf("the matrix A before multiplication:\n");
     for(i=0;i<m;i++)
         {
             for(j=0;j<n;j++)
             {
                 printf("%d ",a[i][j]);
             }
             printf("\n");
         }
      printf("the matrix B before multiplication:\n");
    for(i=0;i<p;i++)
         {
             for(j=0;j<q;j++)
             {
                 printf("%d ",b[i][j]);
             }
             printf("\n");
         }
     if(n==p)
     {
         for(i=0;i<m;i++)
         {
             for(j=0;j<q;j++)
             {
                 for(k=0;k<n;k++)
                 {
                     c[i][j]+=a[i][k]*b[k][j];
                 }
             }
         }
         printf("the resultant matrix is:\n");
         for(i=0;i<m;i++)
         {
             for(j=0;j<q;j++)
             {
                 printf("%d ",c[i][j]);
             }
             printf("\n");
         }
     }
     else printf("invalid sizes for multiplication");
    printf("the matrix A after multiplication:\n");
     for(i=0;i<m;i++)
         {
             for(j=0;j<n;j++)
             {
                 printf("%d ",a[i][j]);
             }
             printf("\n");
         }
     printf("the matrix B after multiplication:");
     for(i=0;i<p;i++)
         {
             for(j=0;j<q;j++)
             {
                 printf("%d",b[i][j]);
             }
             printf("\n");
         }
}