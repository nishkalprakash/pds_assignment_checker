#include <stdio.h>

int linear_search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int binary_search(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
            mid = start + (end - start) / 2;
        }
        else
        {
            start = mid + 1;
            mid = start + (end - start) / 2;
        }
    }
    return -1;
}

int Is_sorted(int arr[], int size)
{
    int initial = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < initial)
        {
            return 0;
        }
        initial = arr[i];
    }
    return 1;
}

int main()
{
    int n;
    printf("Enter the number of elements n: ");
    scanf("%d", &n);
    printf("Enter the list in sorted order: ");
    int list[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &list[i]);
    }

    while (1)
    {
        // Check if the list is sorted or not
        int flag = Is_sorted(list, n);
        if (flag == 1)
        {
            printf("Enter the key element x, which you want to search: ");
            int key;
            scanf("%d", &key);
            printf("Choose the algorithm: Type 1 for linear search and 2 for binary search: ");
            int m;
            scanf("%d", &m);
            int ans;
            switch (m)
            {
            case 1:
                printf("Executing linear search.....\n");
                ans = linear_search(list, n, key);
                if (ans == -1)
                {
                    printf("Unsuccessful search!\n");
                    printf("%d", ans);
                }
                else
                {
                    printf("Element %d has been found at index: %d", key, ans);
                }
                break;
            case 2:
                printf("Executing binary search.....\n");
                ans = binary_search(list, n, key);
                if (ans == -1)
                {
                    printf("Unsuccessful search!\n");
                    printf("%d", ans);
                }
                else
                {
                    printf("Element %d has been found at index: %d", key, ans);
                }
                break;

            default:
                printf("Kindly type 1 or 2 only!");
                break;
            }
            break;
        }
        else
        {
            fflush(stdin);
            printf("List is not in sorted order!\nPlease enter the list again: ");
            for (int i = 0; i < n; i++)
            {
                scanf("%d", &list[i]);
            }
        }
    }

    return 0;
}
