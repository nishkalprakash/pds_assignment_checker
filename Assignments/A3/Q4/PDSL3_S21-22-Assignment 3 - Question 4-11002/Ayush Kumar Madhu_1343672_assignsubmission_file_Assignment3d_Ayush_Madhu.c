#include <stdio.h>

int linear_search(int x, int b[])
{
    int i;
    for (i = 0; i < 20; i++)
        if (b[i] == x)
            return i;
    return -1;
}

int binary_search(int x, int b[20], int n)
{
    int mid;
    int high = n - 1, low = 0;
    while (high >= low)
    {
        mid = (low + high) / 2;
        if (x == b[mid])
            break;
        else
        {
            if (x > b[mid])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }
    if (x == b[mid])
    {
        return mid + 1;
    }
    return -1;
}

int main()
{
    int n, count = 0;
    printf("Enter number of elements n : ");
    scanf("%d", &n);

    int a[n];

    while (count == 0)
    {
        printf("Enter the elements in sorted order : ");
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                printf("Not sorted. Enter again.\n");
                break;
            }
            else
                count += 1;
        }
        if (count == n - 1)
        {
            count = 1;
        }
        else
        {
            count = 0;
        }
    }

    int x;
    printf("Enter the key element x, which you want to search : ");
    scanf("%d", &x);

    int m, temp;
    printf("Choose the algorithm : Type 1 for linear search and 2 for binary search\n");
    scanf("%d", &m);

    if (m == 1)
    {
        printf("Executing the linear search algorithm.\n");
        temp = linear_search(x, a);
        if (temp != -1)
        {
            printf("Succesful search\n");
            printf("Element %d has been found at the index %d", x, temp);
        }
        else
        {
            printf("Unsuccesful search\n");
            printf("Element %d not found in the list.", x);
        }
    }
    else
    {
        printf("Executing the linear search algorithm.\n");
        temp = binary_search(x, a, n);
        if (temp != -1)
        {
            printf("Succesful search\n");
            printf("Element %d has been found at the index %d", x, temp);
        }
        else
        {
            printf("Unsuccesful search\n");
            printf("Element %d not found in the list.", x);
        }
    }

    return 0;
}