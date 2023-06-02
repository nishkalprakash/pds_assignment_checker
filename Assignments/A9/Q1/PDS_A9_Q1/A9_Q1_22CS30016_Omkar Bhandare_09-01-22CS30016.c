/*
Section 2
Roll No. - 22CS30016
Name - Omkar Vijay Bhandare
Assignment No. - 09
Description - Fibonacci
*/
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    printf("Value of n: %d\n", n);
    if(n<0)
    {
        printf("Please give positive number\n");
    }
    else
    {
        int a = 0, b = 1;
        while(1)
        {
            if(n==a)
            {
                printf("%d is a Fibonacci number", n);
                exit(1);
            }
            if(n!=a && (n>a && n<b))
            {
                if((n-a)>(b-n)) printf("Nearest Fibonacci number: %d", b);
                if((n-a)<(b-n)) printf("Nearest Fibonacci number: %d", a);
                if((n-a)==(b-n)) printf("Nearest Fibonacci number: %d", a);
                exit(1);
            }
            int c = b;
            b = a + b;
            a = c;
        }
    }
    return 0;
}
