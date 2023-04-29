#include <stdio.h>

// Function to check the number is prime
int primeCheck(int i)
{
    //Returning 1 means the number is prime, 0 means its not prime
    //Eliminating 2 as we are using 2 in the upcoming loop
    if(i==2)
    {
        return 1;
    }
    //Prime checking loop
    for(int j = 2; j < i; j++)
    {
        if(i%j==0)
        {
            return 0;
        }
    }
    //if the loop is exited without returning it means the number is composite
    return 1;
}
int main()
{
    //Taking input
    int n;
    scanf("%d", &n);


    //Loop to check and find  the prime numbers that make the sum
    int a;
    for(a = 2; a < n; a++)
    {
        if((primeCheck(a))&&(primeCheck(n-a)))
        {
            printf("%d, %d ", a, n-a);
            return 0;
        }
    }

    //If loop is exited then there exists no such numbers that fulfill the conjecture hence printing -1
    printf("-1");
    return 0;
}
