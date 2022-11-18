#include <stdio.h>
#include <stdlib.h>
int maxAlphaValue(int s[], int n)
{
    int alpha[n];
    for (int i = 0; i < n; i++)//iterating through array elements
    {
        int cnt = 0;
        for (int j = i; j >= 0; j--)
        {
            if (s[j] % s[i] == 0)//checking divisibility
            {
                cnt++;//counting the number of divisibility elements
                alpha[i] = cnt;//storing the divisibility count
            }
        }
    }
    int maxalpha = 0;
    for (int i = 0; i < n; i++)
    {
        if (maxalpha < alpha[i])//finding maximum of the divisibility count
            maxalpha = alpha[i];
    }
    return maxalpha-1;//return the maximum alpha value
}
int main()
{
    int n;
    printf("Enter the array size: ");
    scanf("%d", &n);//inputing array size
    int arr[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);//inputing array elements
    printf("%d", maxAlphaValue(arr, n));//printing max alpha value
    return 0;
}
