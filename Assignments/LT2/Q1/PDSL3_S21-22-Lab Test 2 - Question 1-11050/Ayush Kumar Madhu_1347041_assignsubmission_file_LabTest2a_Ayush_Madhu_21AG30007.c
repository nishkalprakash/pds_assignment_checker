// NAME - AYUSH KUMAR MADHU
// ROLL NO. - 21AG30007
// SECTION - 03
// DEPT. - AGRICULTURAL AND FOOD ENGINEERING

#include <stdio.h>
#include <limits.h>

// Function for finding the largest sum as per question
void max_sum(int n, int arr[])
{
    int max = INT_MIN;
    int sum = 0, temp;

    // Using nested loops for finding the sum of contiguous elements
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; i + j < n; j++)
            sum += arr[i + j];

        if (sum > max)
        {
            temp = i;
            max = sum;
        }

        sum = 0;
    }

    // Printing Results
    printf("Largest sum : %d\n", max);

    printf("Sub-arrays : ");

    for (int i = temp; i < n; i++)
        printf("%d ", arr[i]);    

    for (int i = 0; i < n; i++)
    {
        if (max==arr[i])
        {
            printf("OR %d",max);
        }
    }
}

// Main function - The program starts from here
int main()
{
    int n, a[100];

    // Taking inputs from the user

    printf("Enter n : ");
    scanf("%d", &n);

    printf("Enter elements : ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // Calling function
    max_sum(n, a);

    return 0;
}