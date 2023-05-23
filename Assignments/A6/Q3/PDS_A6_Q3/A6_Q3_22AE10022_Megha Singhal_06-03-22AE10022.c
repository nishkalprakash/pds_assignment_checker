#include<stdio.h>
#include<math.h>
int main()
{
    int a[20],t,i,n;
    printf("Enter size of Array: ");
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
        scanf("%d",&a[i]);
    for(i=0;i<=(n-1)/2;i++)
    {
        t=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=t;
    }
     for(i=0;i<=n-1;i++)
        printf("%d ",a[i]);
    return 0;
}
