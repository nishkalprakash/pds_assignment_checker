/*
Name:Chandrabali Biswas
Roll No:22EC30015
Section:2
Problem 1
Description:Fibonacci Number
*/
#include <stdio.h> //Header file
int fibonacci(int n) //returns -1 if fibonacci else returns nearest fibonacci number
{
    int a = 0,b = 1,c;
    if(n==0 || n==1) //0 and 1 are fibonacci numbers
        return -1;
    do
    {
       c = a+b;
       if(c==n)
        return -1;
       a = b;
       b = c;
    }while(c<=n);

    if((n-a)<=(b-n)) //checks for smaller difference
        return a;
    else
        return b;
}
int main()  //main method
{
    int n;
    printf("Enter a positive number:");
    scanf("%d",&n);
    if(n<0)
    {
        printf("Please give positive number"); //for negative input
    }
    else
    {
        printf("Value of n:%d\n",n);
        if(fibonacci(n)==-1)
            printf("%d is a Fibonacci number",n);
        else
            printf("Nearest Fibonacci number:%d",fibonacci(n));
    }
    return 0;  //end
}


