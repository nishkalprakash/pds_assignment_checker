// Code creator: Nishkal Prakash (bishkal@iitkgp.ac.in)
/*
LT1_Q2B:
    Finding Max of Random numbers using Recursion
    In this regard, write a program to:
        Generate n random numbers and store them in an array, numbers.
    The random numbers should be in the range p and q (both inclusive)
    The values of n, p and q is taken from the user. The size of the array should be exactly n.
        Write a simple recursive function: int max(int *a, int n){…}
    to calculate the max value of the numbers stored in the array.
    [Hint: to calculate the max of L numbers,
    - Divide the list into 2 equal sub-lists, L_1 and L_2.
    - Max of L is the mean of L_1 and L_2. i.e. m=max⁡(m_1,m_2 )=max⁡(L)]
        Print the numbers stored in the list. Also, print the max value.
*/
#include <stdio.h>
#include <stdlib.h>
// Function to generate random numbers
int *generate_random_numbers(int n, int p, int q)
{
    // Allocate memory for the array
    int *numbers = (int *)calloc(n, sizeof(int));
    // Generate random numbers and store them in the array
    for (int i = 0; i < n; i++)
    {
        numbers[i] = rand() % (q - p + 1) + p;
    }
    // Return the array
    return numbers;
}

// Function to print the array
void print_array(int *a, int n)
{
    if (n == 1)
        printf("List: [%d]\n", a[0]);
    else
    {
        printf("List: [");
        for (int i = 0; i < n - 1; i++)
            printf("%d, ", a[i]);
        printf("%d]\n", a[n - 1]);
    }
}

// Function to calculate the max of the array
int max(int *a, int n)
{
    if (n == 1)
        return a[0];
    else
    {
        int m1 = max(a, n / 2);
        int m2 = max(a + n / 2, n - n / 2);
        return m1 > m2 ? m1 : m2;
    }
}

void main()
{
    int n, p, q;
    // Read n, p and q
    printf("Enter n, p and q: ");
    scanf("%d %d %d", &n, &p, &q);
    if (n <= 0)
    {
        printf("Invalid value of n\n");
        exit(0);
    }
    if (p > q)
    {
        printf("p should be less than or equal to q\n");
        exit(0);
    }
    // Generate random numbers and store them in the array
    int *numbers = generate_random_numbers(n, p, q);
    // Print the array
    print_array(numbers, n);
    // Print the max of the array
    printf("Max: %d\n", max(numbers, n));
}