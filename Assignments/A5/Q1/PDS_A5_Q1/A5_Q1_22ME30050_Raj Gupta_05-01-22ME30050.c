#include <stdio.h>
#include <math.h>

#define N 100
int main()
{
    int n;
    for (;;)
    {
        printf("enter the value of n : ");
        scanf("%d",&n);
        if (n<N) break;
        else printf("Error N > 100\n\n");
    }
    int a[n];
    printf("enter the value of array : ");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nOriginal array : ");
    for (int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    int temp,k=0;
    for (int i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            temp=a[i];
            for (int j=i;j>k;j--)
            {
                a[j]=a[j-1];
            }
            a[k]=temp;
            k++;
        }
    }
    printf("\nRearranged array : ");
    for (int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n\n");


    return 0;
}
