#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,m,t,i;
    printf("Enter no. of names:");
    scanf("%d",&n);
    char *x[n];
    for(i=0;i<=n;i++)
    {
        x[i]=malloc(70*sizeof(char));
    }
    printf("Enter %d names:",n);
    for(i=0;i<=n;i++)
    {
        gets(x[i]);
    }
    printf("Enter no. of names:");
    scanf("%d",&m);
    char *y[m];
    for(i=0;i<=m;i++)
    {
        y[i]=malloc(70*sizeof(char));
    }
    printf("Enter %d names:",m);
    for(i=0;i<=m;i++)
    {
        gets(y[i]);
    }
    t=m+n;
    char *z[t];
    for(i=0;i<=t;i++)
    {
        z[i]=malloc(70*sizeof(char));
    }
    for(i=0;i<=t;i++)
    {
        if(i<=n)
        {
            z[i]=x[i];
        }
        else
        {
            z[i]=y[t-1];
        }
    }
    for(i=0;i<=t;i++)
    {
        puts(y[i]);
    }
    return 0;
}
