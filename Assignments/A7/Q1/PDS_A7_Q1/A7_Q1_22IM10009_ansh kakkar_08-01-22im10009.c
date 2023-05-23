#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int n,*a,k=0;
    printf("enter the size\n");
    scanf("%d",&n);
    a=(int *)(malloc)(n*sizeof(int));
    time_t t;
    srand(time(t));
    for(int i=0;i<n;i++)
    {
        a[i]=2+rand()%1000;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    for(int i=0;i<n;i++)
    {     int sum=0;
       for(int r=1;r<a[i];r++)
       {
           if(a[i]%r==0)sum=sum+r;

       }
       if(sum==a[i])
       {
           k=k+1;
           printf("%d ",a[i]);
       }

    }
     if(k>0)printf("is perfect number");
    if(k==0)printf("no perfect number\n");



    return 0;
}
