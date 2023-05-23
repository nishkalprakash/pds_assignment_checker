#include<stdio.h>
#include<stdlib.h>
int m,n,p;
int min(int a,int b)
{
    if(a<b)
        return a;
    else
        return b;
}
int swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int swap_arr(int **a,int **b)
{
    int i,j,t,u;
    t=min(m,n);
    u=min(n,p);
    printf("b");
    printf("t=%d",t);
    for(i=0;i<t;i++)
    {
        for(j=0;j<u;j++)
        {
            swap(&a[i][j],&b[i][j]);
        }
    }
    printf("b");
}
void read(int **c,int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&c[i][j]);
        }
    }
}
int mult(int **pt,int **pt1,int **d)
{
    int i,j,k;
    for(i=0;i<m;i++)
    {
        for(j=0;j<p;j++)
        {
         d[i][j]=0;
         for(k=0;k<n;k++)
         {
             d[i][j]+=pt[i][k]*pt1[k][j];
         }
        }
    }
}
int main()
{
    int **ptr,**ptr1,i,j,k;
    printf("Enter values of m,n,p:");
    scanf("%d %d %d",&m,&n,&p);
    ptr=(int **)calloc(m,sizeof(int*));
    for(i=0;i<m;i++)
    {
        ptr[i]=(int *)calloc(n,sizeof(int));
    }
    ptr1=(int **)calloc(n,sizeof(int*));
    for(i=0;i<n;i++)
    {
        ptr1[i]=(int *)calloc(p,sizeof(int));
    }
    printf("Enter first mxn matrix:");
    read(ptr,m,n);

    printf("Enter second nxp matrix:");
    read(ptr1,n,p);
    swap_arr(ptr,ptr1);
    printf("Matrix A:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",ptr[i][j]);
        }
        printf("\n");
    }
    printf("Matrix B:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<p;j++)
        {
            printf("%d ",ptr1[i][j]);
        }
        printf("\n");
    }
    int **c;
    c=(int **)calloc(m,sizeof(int*));
    for(i=0;i<m;i++)
    {
        c[i]=(int *)calloc(p,sizeof(int));
    }
    mult(ptr,ptr1,c);


    printf("Matrix C:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<p;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
