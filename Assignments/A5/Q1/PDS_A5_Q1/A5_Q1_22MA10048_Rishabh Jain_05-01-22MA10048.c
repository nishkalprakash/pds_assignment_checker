#include <stdio.h>
# define N 100

int main()
{
    int n,temp;
    int arr[N];
    scanf("%d",&n);
    if(n>N)
    {
        printf("Error: n > 100");
    }
    else
    {
        /*inputting the array*/
        printf("Original Array: ");
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }

        /*Bubble sorting the elements*/
        for(int iterations=0;iterations<n;iterations++)
        {
            for(int j=0;j<n-1;j++)
            {
                if((arr[j]<0) && (arr[j+1]>0))
                {
                    continue;
                }
                else if((arr[j]>=0) && (arr[j+1]<0))
                {
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }

        /*Printing the output*/
        printf("Rearranged Array: ");
        for(int k=0;k<n;k++)
        {
            printf("%d ",arr[k]);
        }
    }

}
