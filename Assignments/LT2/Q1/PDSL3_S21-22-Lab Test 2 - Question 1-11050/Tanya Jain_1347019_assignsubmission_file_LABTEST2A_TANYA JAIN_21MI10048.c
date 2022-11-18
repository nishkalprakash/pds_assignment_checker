#include <stdio.h>

int main() {
    int n,max=0;
    int array[100];
    printf("Enter N :");

    scanf("%d",&n);
    printf("Enter any %d elemnts now: ", n);
    for(int i=0;i<n;i++) scanf("%d",&array[i]);
    int i=0;
    for(; i <= n - 1; i++) {
        int currSum = 0;
        int j=i;

        for (; j <= n - 1; j++) {
            currSum += array[j];
            if (currSum >= max) {
                max = currSum;

            }
        }
    }

    printf("Max Sum is : %d",max);
    printf("\n");
    for(int k=0;k<n;k++)
    {
        int sum=0;
        for(int j=k;j<n;j++)
        {
            sum+=array[j];
            if(sum==max)
            {
                for(int l=k;l<=j;l++)
                {
                    printf("%d ",array[l]);
                }
                printf(" OR ");
            }
        }
    }
    return 0;
}