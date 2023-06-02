/*
*Name - Aditya Raj Shit
*Roll no. - 22AE10002
*Section - 2
*Question number - 1
*/

#include<stdio.h>

void isFib(int n)
{
    int a,b,c;      //a,b,last and c are four consecutive terms of Fibonacci series
    a=0;            //a is initialised to first term of the Fibonacci series
    b=1;            //b is initialised to second term of the Fibonacci series
    c=1;    //default value
    int last;
    while(c<n){     //running the loop till the last term of the Fibonacci series is less than the given number.
        last=a+b;
        c=last+b;
        a=b;
        b=last;
        last=c;
    }
    if(c==n){
        printf("%d is a Fibonacci number\n",n);
    }
    else{
        printf("Nearest Fibonacci number is: %d\n",b);
    }
    return ;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(n<0){
        printf("Please give a positive number.");
    }

    else{
        isFib(n);       //calling the function
    }
}
