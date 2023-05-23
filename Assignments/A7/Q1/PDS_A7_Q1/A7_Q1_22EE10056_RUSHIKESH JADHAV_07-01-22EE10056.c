#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int *a,n,i,j,sum,ctr=0;
    srand(time(0));
    printf("How many numbers:");
    scanf("%d",&n);
    a=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        a[i]=2+rand()%1000;
    }
    printf("%d-random numbers are:",n);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=1;j<a[i];j++)
        {
            if(a[i]%j==0)
                sum+=j;
        }
        if(sum==a[i])
        {
            printf("%d ");
            ctr++;
        }
    }
    if(ctr!=0)
        printf("are perfect numbers");
    else
        printf("No perfect numbers found");
    return 0;
}
