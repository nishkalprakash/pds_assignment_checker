#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n,*a,r,count=0;
    int c[1000];
    srand(time(0));
    scanf("%d",&n);

    a = (int *)malloc(n * sizeof(int));

    for(int i=0;i<n;i++)
    {
        r=2+rand()%1000;
        a[i]=r;
    }
    printf("%d-random number array: ",n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);

        if(isperfect(a[i]))
        {
            count+=1;
            c[count-1]=a[i];
        }
    }
    if(count==0)
    {
        printf("\nNo perfect number found");
    }
    else
    {
        for(int j=0; j<n ; j++)
        {
            if (c[j]!=0)
            {
                printf("%d ",c[j]);
            }
        }
        printf(" are perfect numbers");
    }



}

int isperfect(int x)
{
    int sum=0;
    for(int i=1;i<x;i++)
    {
        if(x%i==0)
        {
            sum+=i;
        }
    }
    if(x==sum) return 1;
    else return 0;
}
