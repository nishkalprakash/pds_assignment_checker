/*
Section 2
Roll no. 22EE30015
Name : Keshav Prajapati
Assignment No. 9
Description : Finbonacci Series
*/

#include<stdio.h>

int main()
{
    int n;
    printf("Enter a positive number : ");
    scanf("%d", &n);

    if(n<0)
    {
        printf("\nPlease Enter a positive number\n");
    }

    else if(n==0 || n==1)
    {
        printf("\n%d is a Fibonacci Number\n", n);
    }

    else
    {
        int num1 = 0;
        int num2 = 1;
        int num3 = 1;
        //printf("%d %d %d ", num1,  num2, num3);
        //Checking if number is in finbonacci series
        for(int i = 0; i < n; i++)
        {
            num1 = num2;
            num2 = num3;
            num3 = num1 + num2;
            //printf("%d ", num3);
            if(num3 == n)
            {
                printf("\n%d is a Fibonacci Number\n", n);
                break;
            }

            if(num3 > n)
            {
                if(num3 - n < n - num2)
                {
                    printf("\nNearest Fibonacci Number is %d\n", num3);
                }

                else if(num3 - n == n - num2)
                {
                    printf("\nNearest Fibonacci Number is %d\n", num2);
                }

                else
                {
                    printf("\nNearest Fibonacci Number is %d\n", num2);
                }
                break;
            }
        }
    }

    return 0;
}
