/*
NAME : Kasireddi Subha Moneesh
ROLL NO. : 22CH10032
*/
#include<stdio.h>

float mean(int *a, int n)
{
    int *p,*q,i;

    if (n==2) return ((a[0]+a[1])/2);
    if (n==1) return a[0];

    if ((n%2)==0)
    {
        p=(int *)malloc(n*sizeof(int)/2);
        for(i=0;i<(n/2);++i) p[i]=a[i];

        q=(int *)malloc(n*sizeof(int)/2);
        for(i=0;i<(n/2);++i) q[i]=a[i+n/2];

        return (mean(p,n/2)+mean(q,n/2))/2;
    }
    else
    {
        p=(int *)malloc((n-1)*sizeof(int)/2);
        for(i=0;i<((n-1)/2);++i) p[i]=a[i];

        q=(int *)malloc((n+1)*sizeof(int)/2);
        for(i=0;i<((n+1)/2);++i) q[i]=a[i+(n-1)/2];

        return (mean(p,((n-1)/2))+mean(q,((n+1)/2)))/2;
    }
}

int main()
{
    int n,*p,i;
    scanf("%d",&n);
    p=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;++i)
    {
        scanf("%d",&p[i]);
    }
    printf("List = [");
    for(i=0;i<n;++i)
    {
        if (i==0) printf("%d",p[i]);
        else printf(", %d",p[i]);
    }
    printf("]");
    printf("\nMean = %.2f",mean(p,n));
    return 0;
}
