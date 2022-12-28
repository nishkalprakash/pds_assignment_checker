#include <stdio.h>
int gcd(int x, int y)
{
    for (int i = x; i >= 1; i--)
        if (x % i == 0 && y % i == 0) // largest number that completely divides both number
            return i;
}
void coprime(int a, int b) // prints all co-prime numbers in range a, b
{
    if (gcd(a, b) == 1)
        printf("%d and %d are Co-Prime\n", a, b);
}
void pair(int a[],int mx)  // Generates pairing and calls coprime() for each pair
{
    for (int i = 0; i < mx; i++)
        for (int j = i + 1; j < 5; j++)
            coprime(a[i], a[j]);
}
int main()
{
    int max;
    int chk=0;
    printf("how many numbers do you want to enter\n");
    scanf("%d",&max);
    int A[100];   // A = array of 5 integers
    printf("Enter numbers : ");
    for (int n = 0; n < max; n++) // loop for storing input
        {
            scanf("%d", &A[n]);
            if(A[n]<=0)
                chk==1;
        }
        if(chk==1)
            printf("invalid input");
        else
        {
    for (int i = 0; i < max; i++) 
        for (int j = i + 1; j < max; j++)
            if (gcd(A[i], A[j]) == 1)   // checking if at least one coprime pair exists
            {
                pair(A,max);
                return 0;   // stopping after calling pair()
            }
        
    printf("No Co-prime found");    // if program reached here, then no coprime pair exis
}
    return 0;
}
