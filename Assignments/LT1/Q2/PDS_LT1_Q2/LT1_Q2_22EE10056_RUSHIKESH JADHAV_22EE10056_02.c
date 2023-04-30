#include<stdio.h>
int main()
{
    int n,n1,n2,i,rev=0,j,k,t=1;
    printf("Enter any integer number:");
    scanf("%d",&n);
    n1=n;
    n2=n;
    if(n%2==0)
    {
        printf("Most significant to least significant:");
        if(n<0)
            n=-n;
        while(t<=n)
            {
                t*=10;
            }
            t/=10;
        while(t>=1)
        {
            j=n/t;
            t/=10;
            printf("%d ",j);
        }
        printf("\n");
    }
    else
    {
            printf("Least significant digits to most significant digits:");
            if(n<0)
            n=-n;
            while(t<=n)
            {
                t*=10;
            }
            j=n;
            while(j!=0)
            {
                j=j%t;
                if(j!=0)
                printf("%d ",j);
                t/=10;
            }
            printf("\n");
    }
    while(n1!=0)
    {
        k=n1%10;
        rev=rev*10+k;
        n1=n1/10;
    }
    printf("Reverse number=%d\n",rev);
    if(rev>n)
    {
        printf("Difference between reverse and original number=%d",rev-n2);
    }
    else
    {
        printf("Difference between reverse and original number=%d",n2-rev);
    }

    return 0;
}
