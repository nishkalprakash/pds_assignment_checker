#include<stdio.h>

int fab(int n)
{
    int a[200],i,flag=0;
    a[0]=0;
    a[1]=1;
    for(i=2;i<200;++i) a[i]=a[i-1]+a[i-2];

    for(i=0;i<200;++i)
    {
        if(n==a[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1) return n;
    else return 0;
}

int main()
{
    int n,nbefore,nafter;
    scanf("%d",&n);
    printf("Value of n: %d",n);
    if (n<0)
    {
        printf("\nPlease give positive number",n);
    }
    else
    {
    if (fab(n)==n) printf("\n%d is a Fabonacci number",n);
    else
    {
        for (nbefore=n-1;;--nbefore)
        {
            if(fab(nbefore)==nbefore) break;
        }
        for (nafter=n+1;;++nafter)
        {
            if(fab(nafter)==nafter) break;
        }
        if ((n-nbefore)>(nafter-n)) printf("\nNearest Fabonacci number: %d",nafter);
        else printf("\nNearest Fabonacci number: %d",nbefore);
    }
    }
    return 0;
}
