#include <stdio.h>

/*
Section 14
Roll No : 22NA30011
Name : Dipesh Goel
Lab Test Q3
Description : Checking for Perfect Numbers
*/

_Bool perfect_num(int num)             // Defining Fuction for checking perfect number
{
    int sum=0;
    for (int t=1;t<num;t++)
    {
        if (num%t==0)                   // Finding positive divisors of num
        {
            sum+=t;                     // Suming up positive divisors of num
        }
    }
    if (sum==num) return 1;            // Return true if sum of digits = num
    else return 0;
}


int main()                              // Calling the main function
{
    int n;                              // Declaring variable

    printf("Enter number : ");          // taking input from user
    scanf("%d",&n);

    if (n>1)                            // Checking for valid input
    {

        for (int i=2;i<=n;i++)          // Iterating over numbers upto n
        {
            if (perfect_num(i)) printf("%d ",i);    // If Perfect, print it
        }
    }

    else printf("Invalid Input");

    return 0;
}

