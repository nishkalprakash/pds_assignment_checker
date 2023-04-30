#include<stdio.h>
#define N 100
int main()
{
    int n,i,a[N],b[N],c[N],d[N],j=0,k=0,p,t;
    printf("enter limit");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>N){printf("error number>100");i=n;}
    }
    printf("original array:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>=0){b[j]=a[i];j++;}
        if(a[i]<0){c[k]=a[i];k++;}
    }
    printf("reaaranged array");
    for(p=0;p<k;p++)
    {
        printf("%d ",c[p]);
    }
    for(t=0;t<j;t++)
    {
        printf("%d ",b[t]);

    }
}