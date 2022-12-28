#include <stdio.h>
int gcd(int x, int y) // returns gcd of x and y
{
    for (int i = x; i >= 1; i--)
        if (x % i == 0 && y % i == 0) 
            return i;
}
void coprime(int a, int b)
{
    if (gcd(a, b) == 1)
        printf("Co-prime pairs:(%d,%d)", a, b);
}
void pair(int a[])  // Generates pairing and calls coprime() for each pair
{
    for (int i = 0; i < 5; i++)
        for (int j = i + 1; j < 5; j++)
            coprime(a[i], a[j]);
}
int main()
{
    int A[5];   // A = array of 5 integers
    printf("Enter numbers : ");
    
    for (int n = 0; n < 5; n++) // loop for storing input
        scanf("%d", &A[n]);
     

  for (int i = 0; i < 5; i++) 
        for (int j = i + 1; j < 5; j++)
            if (gcd(A[i], A[j]) == 1)   // checking if at least one coprime pair exists
            {
                pair(A);
                return 0;   // stopping after calling pair()
            }
    printf("No Co-prime found");    // if program reached here, then no coprime pair exists
    return 0;
}
