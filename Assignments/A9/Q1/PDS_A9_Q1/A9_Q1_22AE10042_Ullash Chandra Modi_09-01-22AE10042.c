/*
*Section 2
*Roll no- 22AE10042
*Name- Ullash Chandra Modi
*Assignment no- 1
*/
#include <stdio.h>
int fibo(int n);

int main()
{
    int n,i=1;
    do
    {
        printf("enter the value of n : ");
        scanf("%d",&n);
        if (n<0)
            printf("Please give positive number.\n\n");
    }
    while(n<0);

    while (fibo(i)<n)
    {
        i++;
    }
    if (fibo(i)==n)
    {
        printf("%d is a Fibbonaci number.",n);
    }
    else if((fibo(i)-n)<(n-fibo(i-1)))
    {
        printf("Nearest Fibbonaci number : %d",fibo(i));
    }
    else
    {
        printf("Nearest Fibbonaci number : %d",fibo(i-1));
    }
    printf("\n");

    return 0;
}

/*function that gives nth Fibonacci number.*/
int fibo(int n)
{
    int a=0,b=1,c,i;
    if (n<1)
        return 0;
    else if (n==1)
        return 0;
    else if (n==2)
        return 1;
    else
    {
        for (i=3;i<=n;i++)
        {
            c=a+b;
            a=b;
            b=c;
        }
        return b;
    }

}
