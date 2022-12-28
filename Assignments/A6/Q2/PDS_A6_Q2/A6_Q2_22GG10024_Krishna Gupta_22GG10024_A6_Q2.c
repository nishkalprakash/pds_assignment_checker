/*Name- KRISHNA GUPTA
  Roll n0. - 22GG10024
  Section - 14
  Assignment - 6
  Question - PRINTING THE  CO-PRIME  PAIRS
*/
#include <stdio.h>
int gcd(int x, int y) // returns gcd of x and y
{
    for (int i = x; i >= 1; i--)
        if (x % i == 0 && y % i == 0) 
            return i;




}
void coprime(int a, int b) // prints all co-prime numbers in range a, b
{
    if (gcd(a, b) == 1)
        printf("(%d , %d) are Co-Prime\n", a, b);



}
void pair(int a[])  // Generates pairing and calls coprime() for each pair
{
    for (int i = 0; i < 5; i++)
        for (int j = i + 1; j < 5; j++)
            coprime(a[i], a[j]);


}
int main()
{
    int A[5],i;   // A = array of 5 integers
    printf("Enter numbers : ");
    for (int n = 0; n < 5; n++) // loop for storing input
        scanf("%d", &A[n]);


    for (i=0;i<5;i++)                // CHECKING WHETHER ALL THE NUMBERS ARE POSITIVE
     {
        if (A[i]<0)
        printf("Invalide entries : All should be positive numbers.");
        return 0;
      }
    for (i=0;i<5;i++)
     {
        if (A[i]-(int)A[i]!=0)         // CHECKING WHETHER ALL THE NUMBERS ARE INTERGERS
        printf("Invalide entries : All should be integer numbers.");
        return 0;
      }
    for (i = 0; i < 5; i++) 
        for (int j = i + 1; j < 5; j++)
            if (gcd(A[i], A[j]) == 1)   // checking if at least one coprime pair exists
            {
                pair(A);
                return 0;   // stopping after calling pair()
            }
    printf("No Co-prime found");    // if program reached here, then no coprime pair exists
    return 0;
}
