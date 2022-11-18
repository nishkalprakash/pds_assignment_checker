#include <stdio.h>
#include <stdlib.h>
void largestsumarr(int a[], int n)
{
    int maxsum = INT_MIN; // intialization of max sum
    int max_here = 0;
    int max_start = 0, cur_start = 0, max_end = 0, cur_end = 0;
    for (int i = 0; i < n; i++)
    {
        max_here = max_here + a[i]; // checking max sum for every addition of element
        cur_end = i;
        if (maxsum < max_here)
        {
            maxsum = max_here; // if maxsum is less than previous then equalising the sum to maxsum
            max_start = cur_start;
            max_end = cur_end;
        }
        if (max_here < 0)
        {
            max_here = 0;
            cur_start = cur_end + 1;
        }
    }
    printf("Largest sum :%d\n", maxsum);
    printf("Sub-arrays:");
    for (int i = 0; i < max_end - max_start + 1; i++)
        printf("%d ", a[i]);//printing subarray;
}
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n); // input of array size
    int arr[n];      // array intialization
    printf("Enter elements : ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    largestsumarr(arr, n);
    return 0;
}
