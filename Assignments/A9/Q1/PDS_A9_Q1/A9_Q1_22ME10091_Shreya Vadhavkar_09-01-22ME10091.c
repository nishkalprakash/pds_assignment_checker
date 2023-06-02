/*Shreya Vadhavkar
22ME10091
Lab 9
Section 2
question 1 Fibonacci number*/
#include<stdio.h>
int fibo(int);
int main()
{
    int n;
    scanf("%d", &n);
    printf("Value of n: %d\n",n);
    if(n<0)
    {
        printf("Please give a positive number");
    }
    else
    {

    if(fibo(n)==n)
    {
        printf("%d is a Fibonacci number",n);
    }
    else
    {
        printf("Nearest Fibonacci number: %d",fibo(n));
    }
    }
    return 0;
}
int fibo(int n)
{
    int prev=1;
    int i=0;
    while(n>=i)
    {

        int temp=i;
        i=i+prev;
        prev=temp;

    }
    if(n==i)
    {
        return n;
    }
    else if((i-n)>(n-prev))
    {
        return prev;
    }
    else if((i-n)<(n-prev))
    {
        return i;
    }
    else
    {
        return prev;
    }
}
