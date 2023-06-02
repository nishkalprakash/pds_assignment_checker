/* Name : Ratan Kumar
Roll No.: 22EC10067
sec: 2
problem no. :18*/
#include<stdio.h>
int fibo(int a,int b)
{

    if(b==0)
    {
        return 0;
    }
    else if(b==1)
    {
        return 1;
    }


        return fibo(a,b-1) + fibo(a,b-2);

}

int main()
{
    int n,b;
    scanf("%d",&n);
    printf("Value of n: %d",n);
    if(n<0)
    {
        printf("Please give positive number");
    }
    int val;
    val = fibo(n,6);
    if(val==n){
        printf("%d is a Fibonacci number",n);
    }

    return 0;
}











