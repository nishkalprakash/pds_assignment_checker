// Code creator: Abhishek Towal & Nishkal Prakash (nishkal@iitkgp.ac.in)
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
    if(y==0)
        return x;
    if(x<y)
        return gcd(y,x);
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
void pair(int a[],int n)  // Generates pairing and calls coprime() for each pair
{
    if (n==1)
        return;
    pair(a,n-1);
    for(int i=1;i<n;i++){
        coprime(a[n-1], a[n-1-i]);
        // printf("\n\t(%d,%d)\n",n-1,n-i-1);
    }
    // return
}



/******************************************************************************
 * Main function.
 *****************************************************************************/
int main()
{
    int A[1000];   // A = array of 5 integers
    int N;  // N = number of elements
    int i; // Loop variables
    float x; // temp variable to check for float
    printf("Enter N: ");
    scanf("%d", &N);

    printf("Enter %d numbers : ",N);
    for (int i = 0; i < N; i++) // loop for storing input
    {   
        scanf("%f", &x);
        if(x<=0)
            return printf("Invalid Entries: All should be positive numbers\n");
        if (x-(int)x > 0)
            return printf("Invalid Entries: All should be integer numbers\n");
        A[i]=(int)x;
    }
    // first check for integer only entry
    for (int i = N-1; i >= 0; i--){
        for (int j = i - 1; j >= 0; j--)
            if (gcd(A[i], A[j]) == 1)   // checking if at least one coprime pair exists
            {
                pair(A,N);
                return 0;   // stopping after calling pair()
            }
    }
    printf("No Co-prime found");    // if program reached here, then no coprime pair exists
    return 0;
}