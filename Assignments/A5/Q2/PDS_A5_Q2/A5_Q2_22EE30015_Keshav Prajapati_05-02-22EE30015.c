/*
Section 2
Roll no. 22EE30015
Name : Keshav Prajapati
Assignment No. 5
Description : Goldbach's conjecture
*/

#include<stdio.h>

int primeCheck(int n);

int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    //To check if entered output is even and is greater than or equal to 4
    if(num < 4 || num%2 != 0)
    {
        printf("-1");
        return 0;
    }

    //Main logic to find the pair of numbers according to Goldbach's Conjecture
    int num1, num2;
    for(int i = 2; i <= num; i++)
    {
        if(primeCheck(i)==1)
        {
            num1 = i;
            num2 = num - num1;
            if(primeCheck(num2)==1)
            {
                printf("\n%d, %d\n", num1, num2);
                break;
            }
        }
    }

    return 0;
}

int primeCheck(int n)
{
    int count = 0;

    for(int i = 1; i <= n; i++)
    {
        if(n%i == 0)
        {
            count += 1;
        }
    }

    if(count == 2)
    {
        return 1;
    }

    else
        return 0;
}
