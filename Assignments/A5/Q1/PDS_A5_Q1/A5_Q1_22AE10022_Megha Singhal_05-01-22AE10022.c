
#include<stdio.h>
#include<math.h>
#define N 100
int main()
{
    int a[100],i,n;
    printf("Enter limit:\n");
    scanf("%d",&n);
    if(n>100)
        printf("Error: n>100");
    else
    {
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Original array: ");
    for(i=1;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("Rearranged array: ");
    for(i=1;i<=n;i++)
    {
        if(a[i]<0)
            printf("%d ",a[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(a[i]==0)
            printf("%d ",a[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(a[i]>0)
            printf("%d ",a[i]);
    }
    }
    return 0;
}
