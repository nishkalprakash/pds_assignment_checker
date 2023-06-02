#include<stdio.h>

int main(){

// taking input from the user

int n,a,b,c;
printf("Enter the integer");
scanf("%d",&n);
if(n>=0){

    printf("%d",n);

}
else{
    printf("Please give positive number ");

}

//To check for Fibonacci number

 a=0;
 b=1;

 while(c<=n){

    c=a+b;
    printf("%d",c);
    a=b;
    b=c;

 }
 if(c==n){

    printf("The given number is a fibonacci number");

 }
 else{

    printf("The given number is not a fibonacci number");
 }

//To print the nearest fibonacci number

