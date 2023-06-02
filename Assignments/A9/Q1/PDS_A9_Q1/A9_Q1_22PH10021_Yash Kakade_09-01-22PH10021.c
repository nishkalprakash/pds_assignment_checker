
/*
* Section 2
* Roll No.: 22PH10021
* Name : Kakade Yash Ashok
* Assignment No : 9
* Description : Fibonacci number
*/




#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void fibonacci(int n){
    int i=0;
    int j;
    int t=0;
    int q=0;

    for(j=1;j<=n;j=j+t){
        if(j==n){
                printf("\n%d is a fibonacci number",n);
                break;
            }
        t=i;
        i=j;

    }

    if(j>=n+1){
            if((j-n)>(n-i)){
            printf("\nNearest fibonacci number is: %d",i);
            }
            else if((j-n)==(n-i)){
                printf("\nNearest fibonacci number is: %d",i);
            }
            else{
                printf("\nNearest fibonacci number is: %d",j);
            }


    }


}



int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("\nThe value of n: %d",n);

    if(n>=1){
        fibonacci(n);
    }
    else{
        printf("\nPlease give positive number");
    }



return 0;


}
