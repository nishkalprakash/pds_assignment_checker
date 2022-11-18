# include<stdio.h>
//fuction to find maximum sum of subarrays of an array
int maxSum(int a[], int n)
{
    int i, j, k;
    int sum, maxSum=0;
    for(i=0; i<=n; i++)
    {

        for(j=i; j<=n; j++)
        {
            sum = 0;
            for(k=i ; k<j; k++)
            {
                sum = sum + a[k];
            }
            if(sum>maxSum)
                maxSum = sum;
        }

    }

        return maxSum;

}
    int main()
    {
        int i, arr[20], n, Sum;
        //taking inputs from the user
        printf("Enter n (in [1,20]): ");
        scanf("%d", &n);
        // if input enters value outside the interval [1,20]
        if(n>20 || n<1)
        {
            printf("Enter correct value of n.\n");
        }
        else
        {
            printf("Enter elements: ");
            for(i=0; i<n; i++)
            {
                scanf("%d", &arr[i]);
            }
            Sum=maxSum(arr, n);
            printf("Largest sum = %d\n", Sum);


        }

        return 0;
    }
