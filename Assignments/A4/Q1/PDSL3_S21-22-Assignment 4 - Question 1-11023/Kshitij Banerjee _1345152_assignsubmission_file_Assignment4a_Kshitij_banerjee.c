// Name: Kshitij Banerjee
// Roll No: 21CH10035
// Section: 3
// Department: Chemical
// Package: Codeblocks

#include <stdio.h>
void combinations(int a[], int temp[], int start, int end, int index, int m);

void output(int a[], int n, int m) // function to print all combinations
{
    int temp[m]; // temporary array required to store combinations
    combinations(a, temp, 0, n - 1, 0, m);
}

void combinations(int a[], int temp[], int start, int end, int index, int m)
{
    if (index == m)
    {
        for (int j = 0; j < m; j++)
            printf("%d ", temp[j]);
        printf("\n");
        return;
    }

    for (int i = start; i <= end && end - i + 1 >= m - index; i++)
    {
        temp[index] = a[i];
        combinations(a, temp, i + 1, end, index + 1, m);
    }
}

int main()
{
    int b;
    printf("Enter size of array\n"); // size of array
    scanf("%d", &b);
    int a[b]; // array defined given by user

    for (int i = 0; i < b; i++)
        scanf("%d", &a[i]); // taking inputs

    int k; // length of combination
    printf("Enter length of combintion ");
    scanf("%d", &k);
    int n = sizeof(a) / sizeof(a[0]);
    output(a, n, k); // calling of function

    return 0;
}
