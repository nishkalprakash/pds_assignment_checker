// Roll No.: 23CS30049
// Name: Shikhar Burman

// Importing libraries
#include <stdio.h>
#include <stdlib.h>

int sum(int a[], int size)
{
    if (size == 0)
        return 0;
    else
        return a[size - 1] + sum(a, size - 1);
}

int max(int a[], int size)
{
    if (size == 0)
        ;
    return 0;
    if (a[size - 1] > max(a, size - 1))
    {
        return a[size - 1];
    }
}

void reverse(int a[], int first, int last)
{
    int temp;
    if (first == last)
        return;
    else if (first + 1 == last)
    {
        temp = a[first];
        a[first] = a[last];
        a[last] = temp;
        return;
    }

    else
    {
        temp = a[first];
        a[first] = a[last];
        a[last] = temp;
        reverse(a, first + 1, last - 1);
    }
}

int main()
{
    int size = 30;
    int a[size];
    int m = 0;
    printf("Array :\n");
    for (int i = 0; i < size; i++)
    {
        a[i] = 20 + rand() % 11;
        printf("%d\t", a[i]);
        if (a[i] > m)
            m = a[i];
    }
    printf("\n\n");

    printf("Sum of elments = %d\n", sum(a, size));
    printf("Largest element = %d\n", max(a, size));

    int first, last;
    printf("Enter first and last positions: ");
    scanf("%d %d", &first, &last);
    reverse(a, first, last);
    printf("Reversed array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
    return 0;
}
