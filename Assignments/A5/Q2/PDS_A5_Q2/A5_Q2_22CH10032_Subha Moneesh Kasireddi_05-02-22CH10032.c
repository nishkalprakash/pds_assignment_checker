#include<stdio.h>
#include<math.h>
int primeCheck (int i);

int main()
{
    int n,a[1000],i,j,k,x,y=0;
    scanf("%d",&n);

    if ((n<4)||(n%2!=0)) printf("-1");

    else
    {
        i=2,k=0;
        while(i<n)
        {
            j=i;
            if (primeCheck(j)==0);
            else
            {
                a[k]=j;
                ++k;
            }
            ++i;
        }
        for(x=0;x<n;++x)
        {
            for(i=0;i<k;++i)
            {
                if(a[i]==x)
                {
                    for(i=0;i<k;++i)
                    {
                        if(a[i]==(n-x))
                        {
                            y=(n-x);
                            break;
                        }
                    }
                }
                if(y==(n-x)) break;
            }
            if(y==(n-x)) break;
        }
        printf("%d, %d",x,y);
    }
    return 0;
}

int primeCheck (int i)
{
    while(1)
    {
    if(i>=2)
    {
    int n,flag=0;
    double d;
    d=sqrt(i);
    for(n=2;n<=d;n++)
    {
        if(i%n==0) {flag=1; i=0;}
    }
    if(flag==0) return (i);
    break;
    }
    else printf("enter number greater than 1");
    }
}
