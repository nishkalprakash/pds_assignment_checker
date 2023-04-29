#include<stdio.h>
int primeCheck (int i)
{
    int n=0,k=2;
    for(;k<i;k++)
    {
        if(i%k==0)
            n++;
    }
    if(n>0)
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    printf("Enter a number \n");
    scanf("%d",&n);
    if(n%2==1||n==2)
        printf("-1");
    else if(n==4)
        printf("2 2");
    else
    {
        int i,a,r1,r2;
        for(i=2;i<=n/2;i++)
        {
            a = n-i;
            r1 = primeCheck(i);
            r2 = primeCheck(a);
            if(r1==0&&r2==0)
            {
                printf("%d %d \n",i,a);
                break;
            }
        }
    }
}
