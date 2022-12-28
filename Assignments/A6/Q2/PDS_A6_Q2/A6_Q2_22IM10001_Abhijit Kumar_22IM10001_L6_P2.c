/* Name: Abhijit Kumar
Section 14
Roll no. 22IM10001
Question 1
Topic- Printing all the possible coprime pairs from the entered set */
#include<stdio.h>
int gcd(int a,int b)
{
int temp,t;
temp=b%a;
if (temp==0)
return (a);
else
{
t=gcd(temp,a);
return (t);
}
}
void coprime(int a, int b) // prints all co-prime numbers in range a, b
{
    if (gcd(a, b) == 1)
        printf("(%d %d) ", a, b);
}
void pair(int A[])  // Generates pairing and calls coprime() for each pair
{
    for (int i = 0; i < 5; i++)
        for (int j = i + 1; j < 5; j++)
            coprime(A[i], A[j]);
}
int main()
{
    int A[5];   // A = array of 5 integers
    for (int n = 0; n < 5; n++)  // loop for storing input
	{printf("Enter number : "); 
        scanf("%d", &A[n]);
	printf("\n");}
	for(int k=0;k<5;k++)
	{if (A[k]<0)
	{printf("All inputs should be positive");
	return 0;}}
for (int i = 0; i < 5; i++) 
        for (int j = i + 1; j < 5; j++)
            if (gcd(A[i], A[j]) == 1)   // checking if at least one coprime pair exists
            {
		printf("Co-prime pairs are : ");
                pair(A);
                return 0;   // stopping after calling pair()
            }
    printf("No Co-prime found");    // if program reached here, then no coprime pair exists
    return 0;
}


