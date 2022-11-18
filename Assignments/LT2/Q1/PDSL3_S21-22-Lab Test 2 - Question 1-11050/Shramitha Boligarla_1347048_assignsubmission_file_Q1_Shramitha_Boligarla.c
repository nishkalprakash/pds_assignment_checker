#include<stdio.h>

int main()
{
   int i,j,n,a=0,l=0;

    printf("Enter length of array : ");
    scanf("%d",&n); // User enters value of length of array

    int A[n];
    printf("\nEnter elements of array : ");

    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]); // User enters the elements of the array

    }

    int MAX=A[0];
    for(i=0;i<n;i++)
    {
        int sum=0;
        for(j=i;j<n;j++)
        {
            sum=sum+A[j];
            if(sum>MAX)
            {
                a=i;
                l=j;
                MAX=sum;

            }
        }
    }

    printf("\nLargest sum:"); // Largest sum shown on the output screen
    printf("%d",MAX);

    printf("\nSubarrays:"); //Largest contagious sub array shown on the output screen
    for(int K=a;K<=l;K++)
    {
        printf("%d ",A[K]);
    }
    return(0);

}

