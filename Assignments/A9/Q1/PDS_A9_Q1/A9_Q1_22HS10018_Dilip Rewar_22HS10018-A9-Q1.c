#include<stdio.h>
/*
Section 2
Roll No: 22HS10018
Name: Dilip Kumar Rewar
Assignment No: 6
Description: Checking for Fibonacchi number
*/

int main(){
    int number, i=0,a=1,b=0,diff;
    printf("Enter the number: ");
    scanf("%d",&number);
    for(i=1;i<=number;i++){
       i=a+b;
        a=b;
        b=i;
    }
    if(number==b){
        printf("\n%d is a Fibonacci Number",number);
    }
    else if(number<=0){
        printf("\nPlease give positive number");
    }
    else if(number!=b && number>=a){
        printf("\n%d is not a Fibonacci Number",number);
        printf("\n%d is nearest Fibonacci number",a);
    }
    return 0;
}
