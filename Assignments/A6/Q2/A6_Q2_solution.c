// Code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
// Program to find coprime

#include <stdio.h>


/*****************************************************************************
 * Find greatest common divisor of 2 numbers.
 * 
 * @param  x integer
 * @param  y integer
 * 
 * @return greatest common divisor
******************************************************************************/
int gcd(int x, int y) 
{   
    if(x>y){
        return gcd(y,x);
    }
    if(y==0){
        return x;
    }
    return gcd(y,x%y);
}


/*****************************************************************************
 * Prints all co-prime numbers in a range.
 * 
 * @param  a start of the range
 * @param  b end of the range
 * ******************************************************************************/
void coprime(int a, int b) // prints all co-prime numbers in range a, b
{
    if (gcd(a, b) == 1)
        printf("%d and %d are Co-Prime\n", a, b);
}


/*****************************************************************************
 * Generates pairs and call function coprime for each pair
 * 
 * @param  a array of integers
 * ******************************************************************************/
void pair(int a[])  // Generates pairing and calls coprime() for each pair
{
    for (int i = 0; i < 5; i++)
        for (int j = i + 1; j < 5; j++)
            coprime(a[i], a[j]);
}



/******************************************************************************
 * Main function.
 *****************************************************************************/
int main()
{
    int A[5];   // A = array of 5 integers
    printf("Enter numbers : ");
    for (int n = 0; n < 5; n++) // loop for storing input
        scanf("%d", &A[n]);

    // first check for integer only entry
    for (int i = 0; i < 5; i++){
        printf("%d ",A[i]);
        if(A[i]<=0){
            printf("Invalid Entries: All should be positive numbers\n");
            return 0;
        }
    }

    for (int i = 0; i < 5; i++){
        for (int j = i + 1; j < 5; j++)
            if (gcd(A[i], A[j]) == 1)   // checking if at least one coprime pair exists
            {
                pair(A);
                return 0;   // stopping after calling pair()
            }
    }
    printf("No Co-prime found");    // if program reached here, then no coprime pair exists
    return 0;
}