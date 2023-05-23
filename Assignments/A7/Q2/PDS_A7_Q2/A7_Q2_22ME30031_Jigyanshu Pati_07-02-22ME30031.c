
//Section 2
//RollNo:22ME30031
//Name:Jigyanshu Pati
// LAB 7
//description:Q2
#include<stdio.h>
int min(int a,int b)
{
    if (a<b)
        return a;
    else
        return b;
}

int main()
{
    int **a,**b,m,n,p,i,temp **c,r;
    scanf("%d%d%d",&m,&n,&p);
    a=(int **) calloc(m, sizeof(int*));
    for (i = 0;i < m;i++)
    {
        a[i] = (int *) calloc(n, sizeof(int));
    }

    for (i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    b=(int **) calloc(n, sizeof(int*));
    for (i = 0;i < n;i++)
    {
        b[i] = (int *) calloc(p, sizeof(int));
    }
    for (i=0;i<n;i++)
    {
        for (int j=0;j<p;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for (i=0;i=min(m,n);i++)
    {
        for(j=0;j=min(n,p);j++)
        {
            temp=a[i][j];
            a[i][j]=b[i][j];
            b[i][j]=temp;
        }
    }
    c=(int **) calloc(m, sizeof(int*));
    for (i = 0;i < p;i++)
    {
        c[i] = (int *) calloc(p, sizeof(int));
    }
    for (i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            c[i][j]==0;
        }
    }
     for (i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            while(i+r)
        }
    }

}
