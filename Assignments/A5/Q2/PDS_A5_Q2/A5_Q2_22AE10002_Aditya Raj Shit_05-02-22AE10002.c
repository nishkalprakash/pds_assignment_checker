/*
Name-Aditya Raj Shit
Roll no.-22AE10002
Assignment no.-2
Description- Check whether a number is prime or not and then check and verify Goldbach's conjecture.
*/


#include<stdio.h>

int primeCheck(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){

    int a;
    printf("Enter a number: ");
    scanf("%d",&a);             //taking user input

    int num1=2,num2=a-2;

    if(a<4 || a%2!=0){          //printing -1 if the input number if less than 4 or if it is odd
        printf("%d",-1);
    }

    else{
        while((primeCheck(num1)==0 || primeCheck(num2)==0) && num1<a){      //finding the two required prime numbers whose sum is equal to the input number.
            num1++;
            num2=a-num1;                                                    //using the fact that the sum of the two numbers is equal to the input number.
        }
        printf("%d, %d",num1,num2);                                         //printing the desired result
    }




}
