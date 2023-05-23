#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    time_t t;
    int n,*a,i,k=0,sum=0,j;
    srand(time(0));
    printf("Enter the size of array\n");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));

    for(i=0;i<n;i++)
    {
        a[i]=2+rand()%1000;
    }
    printf("The %d generated random numbers are\n",n);
    for(i=0;i<n;i++)
    {
        printf("%d\ ",a[i]);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=1;j<*(a+i);j++)
        {
            if(*(a+i)%j==0)
                sum+=j;
        }
        if(sum==a[i])
        {
            printf("%d, ",*(a+i));
            k++;
        }
    }

    if(k==0)
        printf("No perfect number found\n");
    else
    {
        printf("perfect numbers");
    }
    return 0;
}
