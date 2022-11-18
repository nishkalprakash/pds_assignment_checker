// NAME - AYUSH KUMAR MADHU
// ROLL NO. - 21AG30007
// SECTION - 03
// DEPT. - AGRICULTURAL AND FOOD ENGINEERING

#include <stdio.h>

// Defining global variable
int n;

// Defining function for calculating maximum alpha value
int maxAlphaValue(int S[])
{
    int temp = 0, p = 0, max = 0;

    while (p < n)
    {
        // Logic is that it checks that if pth element of the array is divisible by its previous elements or not
        
        for (int i = 0; i < p; i++)
        {
            if (S[i] % S[p] == 0)
                temp++;
        }

        if (max < temp)
            max = temp;

        temp = 0;
        p++;
    }

    return max;
}

// Main function - The program starts from here
int main()
{
    int i = 0;

    // Taking inputs
    printf("Enter total number of elements : ");
    scanf("%d", &n);

    int S[n];
    printf("Enter the elements of the array:\n");

    for (i = 0; i < n; i++)
        scanf("%d", &S[i]);

    // Calling function and printing the returned value
    printf("%d", maxAlphaValue(S));

    return 0;
}