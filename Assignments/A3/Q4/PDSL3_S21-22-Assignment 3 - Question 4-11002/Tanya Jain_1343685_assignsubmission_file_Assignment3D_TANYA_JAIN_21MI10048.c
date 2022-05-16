#include <stdio.h>
int linear_search();
int bin_search();
int main()
{
    int n, x, k;
    int arr[20];
    printf("Enter the number of elements n: ");
    scanf("%d", &n);
label:
    printf("Enter the elements in sorted order: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            continue;
        }
        else
        {
            printf("Not sorted enter again\n");
            goto label;
        }
    }
    printf("Enter the key element x, which you want to search: ");
    scanf("%d", &x);
    printf("Choose the algorithm: Type 1 for linear search and 2 for binary search: ");
    scanf("%d", &k);
    if (k == 1)
    {
        printf("Executing the Linear search algorithm\n");
        int result = linear_search(arr, n, x);
        if (result == -1)
        {
            printf("Unsucessful search\n");
        }
        else
        {
            printf("Element %d is found at index %d\n", x, result);
            printf("sucessful search");
        }
    }
    else if (k == 2)
    {
        printf("Executing the binary search algorithm\n");
        int result = bin_search(arr, n, x);
        if (result == -1)
        {
            printf("Unsucessful search");
        }
        if (result != -1)
        {
            printf("Element %d is found at index %d\n", x, result);
            printf("sucessful search");
        }
    }
    else
    {
        printf("Choose the correct algorithm");
    }

    return 0;
}
int bin_search(int arr[], int n, int x)
{
    int y = 0;
    while (0 <= n)
    {
        int m = y + (n - y) / 2;
        if (arr[m] == x)
            return m;
        if (arr[m] < x)
            y = m + 1;
        else
            n = m - 1;
    }
    return -1;
}
int linear_search(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}