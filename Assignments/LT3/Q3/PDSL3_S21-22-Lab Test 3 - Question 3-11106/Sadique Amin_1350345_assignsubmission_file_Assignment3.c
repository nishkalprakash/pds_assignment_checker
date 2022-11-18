/*
Name: Sadique Amin
Roll Number: 21CE30027
Department: Civil Engineering
Package used: <stdio.h>
Assignment Class: 6
*/

// COULDN'T PRINT THE PERMUTATION OF THE OUTPUT NUMBERS

#include <stdio.h>
int div;

void CombinationRepetitionUtil(int chosen[], int arr[], int index, int r, int start, int end)
{
    int n = 0;
    if (index == r)
    {
        for (int i = 0; i < r; i++)
        {
            n = arr[chosen[i]] + n * 10;
        }
        if (n % div != 0) // DIVISIBILTY CHECK
        {
            printf("%d\n", n);
        }
        return;
    }
    for (int i = start; i <= end; i++)
    {
        chosen[index] = i;
        CombinationRepetitionUtil(chosen, arr, index + 1, r, i, end);
    }
    return;
}
void CombinationRepetition(int arr[], int n, int r)
{
    // Allocate memory
    int chosen[r + 1];

    // Call the recursive function
    CombinationRepetitionUtil(chosen, arr, 0, r, 0, n - 1);
}

int main()
{
    int a, b;
    int arr[2];
    // int *ptr;
    printf("Enter two digits: ");
    scanf("%d %d", &arr[0], &arr[1]);
    div = arr[0] + arr[1];
    int n = sizeof(arr) / sizeof(arr[0]);
    int r = 5;
    CombinationRepetition(arr, n, r);
    return 0;
}