//Krishna chaudhari
// Rolll no. : 22MT10012

#include<stdio.h>
int fib(int n);



int main()
{
    int i,n,k;
//    long long int f[100];
    printf("Enter the number : ");
    scanf("%d",&n);
    if(n<=0) printf("Please give the positive number \n");
    else
    {
        printf("Value of n is : %d \n",n);
        for(i=1; i<100; i++)
        {
            if(fib(i)==n)
            {
                printf("number is fibonaccy \n");
                k=1;
                break;
            }
           else {
                   continue;
                   }
        }
    }
    if(k!=1)printf("number is not fibonaccy");
    return 0;
}


// function declaration

int fib(int n)
{
    if(n==1)
    {
        return 0;
    }
    else if(n==2)
    {
        return 1;
    }
    else
    {
        return fib(n-1)+fib(n-2);
    }
}
