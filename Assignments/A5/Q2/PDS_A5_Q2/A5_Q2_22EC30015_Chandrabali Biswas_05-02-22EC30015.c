/*
Section :2
Roll No:22EC30015
Name: Chandrabali Biswas
Assignment No:5
Description: Sum of prime numbers
*/
#include <stdio.h>
int main()    //main function
{
    int n;
    printf("Enter an even number >=4:");
    scanf("%d",&n);   //taking input from user
    if(n<4 || n%2!=0)    //displaying -1 if number is less than 4 or odd
        printf("%d",-1);
    else
    {
        for(int i=2;i<n;i++)
        {
            if(primeCheck(i)==1 && primeCheck(n-i)==1)  //checks for the 2 prime numbers that sum up to n
            {
                 printf("%d , %d",i,n-i);
                 break;  //prints only the 1st pair
            }
        }
    }
    return 0;  //end
}
int primeCheck(int i)
{
    int c=0;  //counter assigned to 0 initially
    for(int j=2;j<i;j++)
    {
        if(i%j==0) //checks if the number is divisible by any number apart from 1 and itself
            c++;
    }
    if(c==0)  //prime
        return 1;
    else     //not prime
        return 0;
}
