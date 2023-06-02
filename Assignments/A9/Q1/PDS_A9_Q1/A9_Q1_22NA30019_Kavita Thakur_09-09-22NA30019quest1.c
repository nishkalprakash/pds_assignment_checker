/*
* Section 2
* Roll No.: 22NA30019
* Name : Kavita Thakur
* Assignment No.: 9
* Description : Check if given number is fibonacci
*/
#include<stdio.h>

//function declaration
int fibonacciCheck(int n);

int current=0,num1,num2;
int main(){
 int n;
 printf("value of n: ");
 scanf("%d",&n);

 if(n>=0){
  if(fibonacciCheck(n)==1){
    printf("%d is a fibonacci number",n);
  }
  else{
    if((current-n)>=(n-num1)){
    printf("nearest fibonacci number is %d",num1);
    }
    else{
    printf("nearest fibonacci number is %d",current);
    }
  }
 }

 else{
    printf("please enter positive number");
 }



return 0;
}

//function definition
int fibonacciCheck(int n){
 num1=0,num2=1;
 while(current<=n){
    if(n==0 || n==1){
        return 1;
    }
    current=num1+num2;
    if(n==current){
        return 1;
    }
    num1=num2;
    num2=current;

 }
    return 0;
}

