#include<stdio.h>
#include<stdlib.h>
int main()
{
    int **a,**b,**c,i,j,k,m,n,p,h,l,t;
    scanf("%d %d %d",&m,&n,&p);
    if(n>m){h=m;}
    else h=n;
    if(p>n){l=n;}
    else l=p;
    a=(int **)malloc(m*sizeof(int *));
    for(i=0;i<m;i++)
    {
        a[i]=(int *)malloc(n*sizeof(int));
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }

    }
     b=(int **)malloc(n*sizeof(int *));
    for(i=0;i<m;i++)
    {
        b[i]=(int *)malloc(p*4);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<p;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<h;i++)
    {
        for(j=0;j<l;j++)
        {
            t=a[i][j];
            a[i][j]=b[i][j];
            b[i][j]=t;
        }
    }
    c=(int**)calloc(m,sizeof(int*));
    for(i=0;i<m;i++)
    {
        c[i]=(int *)calloc(p,sizeof(int));
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<p;j++)
        {
            for(k=0;k<n;k++)
            {
                c[i][j]=(a[i][k])*(b[k][j]);
            }
        }
    }printf("matrix A:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    printf("matrix B:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<p;j++)
        {
            printf("%d",b[i][j]);
        }
        printf("\n");
    }
    printf("matrix C\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<p;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

}