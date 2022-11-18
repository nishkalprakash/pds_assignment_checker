// Name: Kshitij Banerjee
// Roll No: 21CH10035
// Section: 3
// Department: Chemical
// Package: Codeblocks

#include <stdio.h>
#include <stdlib.h>

int linser(int *a, int x, int n)
{
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            index = i;
            break;
        }
    }
    return index;
}
int binser(int *a, int x, int n)
{
    int index = -1;
    int l = 0;
    int r = n - 1;
    while (l <= r)
    {
        int h = l + (r - l) / 2;
        if (a[h] > x)
        {
            r = h - 1;
        }
        else if (a[h] < x)
        {
            l = h + 1;
        }
        else
        {
            index = h;
            break;
        }
    }
    return index;
}
int main()
{
    int n;
    printf("Enter number of elements n : ");
    scanf("%d", &n);

    printf("Enter elements in sorted order : ");
    int *a = (int *)malloc(n * sizeof(int));

    while (1)
    {
        for (int i = 0; i < n; i++)
        {
            int x;
            scanf("%d", &x);
            a[i] = x;
        }

        int c = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                printf("\nArray not sorted. Re-enter : ");
                c = 1;
                break;
            }
        }
        if (c == 0)
            break;
    }

    int x;
    printf("Enter the element to be searched : ");
    scanf("%d", &x);

    int c;
    printf("Enter 1 for linear search, 2 for binary search : ");
    scanf("%d", &c);

    if (c == 1)
    {
        printf("Linear search initiated.\n");
        int index = linser(a, x, n);
        if (index == -1)
        {
            printf("Not found");
        }
        else
        {
            printf("found at %d index", index);
        }
    }
    if (c == 2)
    {
        printf("Binary search initiated.\n");
        int index = binser(a, x, n);
        if (index == -1)
        {
            printf("Not found");
        }
        else
        {
            printf("found at %d index", index);
        }
    }

    return 0;
}
