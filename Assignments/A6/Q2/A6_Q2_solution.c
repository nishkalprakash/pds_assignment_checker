// Code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
// Program to find coprime

#include <stdio.h>
int gcd(int x, int y) // returns gcd of x and y
{
    if(x==0)
        return y
    return gcd(x-y,y)
}
void coprime(int a, int b) // prints all co-prime numbers in range a, b
{
    if (gcd(a, b) == 1)
        printf("%d and %d are Co-Prime\n", a, b);
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