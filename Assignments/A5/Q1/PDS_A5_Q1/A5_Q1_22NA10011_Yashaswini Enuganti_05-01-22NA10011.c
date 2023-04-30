
#include<stdio.h>
#define N 100
int main()
{
    int n,i,a[i];
     printf("Enter no of elememts:(n<100)");
     scanf("%d",&n);
     if(n<=100&&n>0)
        {

        printf("\nno of elements is %d",n);
        printf("\nEnter array elements:");
        for(i=0;i<n;i++)
            {
                scanf("%d",&a[i]);
            }
        printf("\nOriginal Array:");
        for(i=0;i<n;i++)
            {
                printf("%d",a[i]);
            }
        printf("\nRearranged array");
        for(i=0;i<n;i++)
        {
            if(a[i]<0)
                {
                    printf("%d",a[i]);
                }


        }
        for(i=0;i<n;i++)
        {
        if(a[i]>=0)
                {
                    printf("%d",a[i]);
                }


        }
        }
        else
            {
                printf("Error n>100");
            }

}
