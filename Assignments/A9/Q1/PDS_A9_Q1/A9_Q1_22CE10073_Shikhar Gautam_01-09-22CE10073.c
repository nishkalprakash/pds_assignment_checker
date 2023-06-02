#include <stdio.h>

int fibonacci(int n);

int main(){

    int fib[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34};
    int n; // declaring variable for fibonacci number

    printf("Enter any positive number : ");
    scanf("%d", &n); // taking input for fibonacci number

    fibonacci(n);

  //  if(n!=fibN){


   // }















    return 0;
}

    int fibonacci(int n){

    if(n==0){

        printf("It is a fibonacci number");
    }
    else if(n==1){

        printf("It is a fibonacci number");
    }

    int fibnm1 = fib(n-1);
    int fibnm2 = fib(n-2);
    int fibN = fibnm1 + fibnm2;

    printf("Entered fibinacci is %d", fibN);


    }
