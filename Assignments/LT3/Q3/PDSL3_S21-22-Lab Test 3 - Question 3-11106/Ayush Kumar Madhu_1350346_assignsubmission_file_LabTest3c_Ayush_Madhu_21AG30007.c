// NAME- AYUSH KUMAR MADHU
// ROLL NO. - 21AG30007
// DEPT. - AGRICULTURE AND FOOD ENGINEERING
// SECTION - 03

#include <stdio.h>

// It will print all the required numbers recursively
void numbers(int n, int a, int b)
{
    if (n > 9999 && n < 100000)
    {                              
        if (n % (a + b) != 0)
            printf("%d ", n);
        return;
    }
    // Resursive calling of the function
    numbers(n * 10 + a, a, b);
    numbers(n * 10 + b, a, b);
}

// Main function - The program starts from here
int main()
{
    // Defining variables and taking inputs from the user
    int a, b;
    printf("Enter two digits : ");
    scanf("%d %d", &a, &b);
    printf("Numbers :\n");

    // Calling function (Recursive)
    numbers(0, a, b); 
}