/*Name- Vedant Katole
roll no - 22EC10087
section - 2
lab - 9
problem no - 9*/

#include<stdio.h>

long int fibonacci(long int n)
{
    long int diff;
    long int curr_no = 1, prev_no = 0, temp;
    while(curr_no < n){
        temp = curr_no;
        curr_no = curr_no + prev_no;
        prev_no = temp;
    }
    diff = curr_no - n;
    if(n - prev_no <= diff){
        curr_no = prev_no;
    }
    return curr_no;
}

int main()
{
    long int n;
    printf("Enter the number : ");
    scanf("%ld", &n);
    printf("Value of n : %d\n", n);
    if(n < 0){
        printf("Please enter a positive number");
        return 0;
    }
    if(n == fibonacci(n)){
        printf("%ld is a fibonacci number", n);
        return 0;
    }
    printf("Nearest Fibonacci number : %ld", fibonacci(n));
    return 0;
}
