/*
Section 2
Roll No : 22CS30036
Name : Lakshya Agrawal
Assignment No : 5
Description : Any positive even integer greater than or equals to 4 can be expressed as a sum of two prime numbers.
*/

#include<stdio.h>

int primeCheck(int i)
{
    for(int j=2;j<i;j++)
    {
        if(i%j==0)
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    printf("Enter the value of n (a positive even integer greater than or equals to 4) : ");
    scanf("%d",&n);

    if(n<4 || n%2!=0)
    {
        printf("\n%d\n",-1);
    }
    else
    {
        for(int i=2;i<n-1;i++)
        {
            if(primeCheck(i) && primeCheck(n-i))
            {
                printf("\n%d, %d\n",i,n-i);
                break;
            }
        }
    }
    return 0;
}

