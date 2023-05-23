#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#include<time.h>
int perfect(int);
int main()
{
    int n;
    scanf("%d",&n);
    int *p;
    p=(int *)malloc(n*sizeof (int));
    int r;
    time_t t;
    srand(time(t));
    int i;
    for(i=0;i<n;++i)
    {
    r= 2+ rand()%1000;
    *(p+i)=r;
    }
    printf("%d-random number array:",n);
    for(i=0;i<n;++i)
    {
        printf(" %d",p[i]);
    }
    printf("\n");
    int flag=0;
    int k=0;
    for(i=0;i<n;++i)
    {
        k=perfect(p[i]);
        if(k==p[i])
        {
            if(flag==0)
            {
                printf("%d",p[i]);
            }
            else
            {
                printf(", %d",p[i]);
            }

            ++flag;
        }
        else
        {
            continue;
        }
    }
    if(flag ==0)
    {
        printf("No perfect number found.");
    }
    else if(flag==1)
    {
        printf(" is a perfect number.");
    }
    else
    {
        printf(" are perfect numbers.");
    }
    free(p);
    return 0;
}
int perfect(int m)
{
    int i=1;
    int sum=0;
    for(i=1;i<m;++i)
    {
        if(m%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==m)
    {
        return m;
    }
    else
    {
        return 0;
    }
}
