
/*
yash agarwal
22na10049
sec 2
*/
#include <stdio.h>
int main()
{
    int m,n,p,t=0;
    scanf("%d %d %d",&m,&n,&p);
    int **a,**b,**c;

    a=(int **) calloc(m,sizeof(int *));
    for(int i=0;i<m;i++)
        a[i]=(int *)calloc(n,sizeof(int));

    b=(int **) calloc(n,sizeof(int *));
    for(int i=0;i<n;i++)
        b[i]=(int *)calloc(p,sizeof(int));


    c=(int **) calloc(m,sizeof(int *));
    for(int i=0;i<m;i++)
        c[i]=(int *)calloc(p,sizeof(int));


    for(int i=0;i<m;i++)
    {

        for(int j=0;j<n;j++)
        {
            scanf(" %d",&a[i][j]);

        }

    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<p;j++)
        {
            scanf(" %d",&b[i][j]);
        }

    }


    for(int i=0;i<m;i++)
    {
        t=0;
        for(int j=0;j<n;j++)
        {
           if(i<n && j<p)
           {
               t=a[i][j];
               a[i][j]=b[i][j];
               b[i][j]=t;
           }
        }

    }


    printf("\n Matrix a is \n ");

      for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
         printf("\n");

    }

     printf("\n Matrix b is \n ");

     for(int i=0;i<n;i++)
    {
        for(int j=0;j<p;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");

    }

int s=0;
    for(int i=0;i<m;i++)
    {

        for(int j=0;j<p;j++)
        {
            s=0;
            for(int k=0; k<n;k++)
            {
                s=(a[i][k]*b[k][j]);
               c[i][j]+=s;
            }

        }

    }

     printf("\n Matrix c is \n ");

     for(int i=0;i<m;i++)
    {
        for(int j=0;j<p;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");

    }


}
