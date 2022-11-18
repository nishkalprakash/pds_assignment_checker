#include <stdio.h>
int isSorted(int arr[], int n)
{
    int i;
    for (i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
            return 0;
    }
    return 1;
}
void elements(int arr[], int n)
{
    printf("Enter the elements in sorted order:");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
}
int linear_Search(int a[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
            return i + 1;
    }
    return -1;
}
int bin_Search(int a[], int low, int high, int key)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (a[mid] == key)
            return mid;

        if (a[mid] < key)
            low = mid + 1;

        else
            high = mid - 1;
    }

    return -1;
}
int main()
{
    int n, flag = 0, key, option;
    printf("Enter the number of elements n:");
    scanf("%d", &n);
    int arr[n];
    elements(arr, n);
    flag = isSorted(arr, n);
    if (flag == 0)
    {
        printf("Not sorted.Enter again\n");
        elements(arr, n);
    }
    flag = isSorted(arr,n);
    if (flag == 1)
    {
        printf("Enter the key element x, which you want to search:");
        scanf("%d", &key);
        printf("Choose the algorithm: Type 1 for linear search and 2 for binary search ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            printf("Executing the linear search algorithm\n");
            int ind_l = linear_Search(arr, n, key);
            if (ind_l != -1)
            {
                printf("Successful search\n");
                printf("Element %d has been found at the index %d", key, ind_l);
            }
            break;
        case 2:
            printf("Executing the binary search algorithm\n");
            int ind_b = bin_Search(arr, 0, n - 1, key);
            if (ind_b != -1)
            {
                printf("Successful search\n");
                printf("Element %d has been found at the index %d", key, ind_b);
            }
            break;
        }
    }
    return 0;
}
