// Largest Number Formed by Concatenating Numbers
// Code Creator: Saurav (sauravgahlawat@kgpian.iitkgp.ac.in)
#include <stdio.h>

// Swap function to swap two integers
void swap(int *a, int *b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}

// Compare two numbers based on which concatenation is larger
int check_swap_needed_by_comparing_digits(int a, int b)
{
    long ab = 0, ba = 0, multiplier_a = 1, multiplier_b = 1;

    // Calculate the ab = a concatenated with b
    int temp_a = a, temp_b = b;
    while (temp_b > 0)
    {
        multiplier_a *= 10;
        temp_b /= 10;
    }
    ab = a * multiplier_a + b;

    // Calculate the ba = b concatenated with a
    temp_a = a;
    while (temp_a > 0)
    {
        multiplier_b *= 10;
        temp_a /= 10;
    }
    ba = b * multiplier_b + a;

    // Return which concatenation is larger
    if (ab > ba)
        return 1;
    return 0;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    // Input the array of numbers
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Sort the array manually using the compare_digits function
    for (int i = 0; i < n; i++)
        for (int j = 1; j < n - i; j++)
            if (check_swap_needed_by_comparing_digits(arr[j], arr[j - 1]))
                swap(&arr[j], &arr[j - 1]);

    // Print the array
    printf("A[%d] = [", n);
    for (int i = 0; i < n - 1; i++)
        printf("%d, ", arr[i]);
    if (n > 0)
        printf("%d]\n", arr[n - 1]);

    // Print the largest number formed
    printf("Largest = ");
    for (int i = 0; i < n; i++)
        printf("%d", arr[i]);
    printf("\n");

    return 0;
}
