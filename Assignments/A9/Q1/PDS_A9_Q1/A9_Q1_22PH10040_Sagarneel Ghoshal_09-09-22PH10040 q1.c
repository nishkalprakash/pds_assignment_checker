/*
*Section 2
*Name: Sagarneel Ghoshal
*Roll No.:22PH10040
*Assignment-9
*Description- Fibonacci Number
*/


#include<stdio.h>
#include<math.h>

void fibonaccicheck(int n){
    int i=0;
    int j=1;
    int temp;
    while(j<=n){
        if(j==n){
            printf("\n%d is a Fibonacci number",n);
            break;
        }
        temp=i;
        i=j;
        j+=temp;
    }
    if(j>n){
        if((j-n)>(n-i)) printf("\nNearest Fibonacci number: %d",i);
        else if((j-n)==(n-i)) printf("\nNearest Fibonacci number: %d",i);
        else printf("\nNearest Fibonacci number: %d",j);
    }

}


int main(){
    int n;
    printf("Enter the no.: ");
    scanf("%d",&n);
    printf("Value of n: %d",n);

    if(n>0) fibonaccicheck(n);
    else printf("\nPlease give positive number");



    return 0;

}
