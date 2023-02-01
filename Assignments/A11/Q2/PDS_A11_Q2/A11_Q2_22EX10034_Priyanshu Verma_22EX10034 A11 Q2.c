/*
* SEC: 14
* Roll no: 22EX10034
* Name: Priyanshu Verma 
* Assignment No 11
* Description : recursice function to check if  given number n, belongs to the fibonacci Sequence
*/ 

#include <stdio.h>
#include<stdlib.h>
int main(){
int fibo(int n, int *t){
   if(n < 0) {
   return 0;
 } else if(n <= 1) {
   return 1;

 }   else if(t[n] > 0) {
    return t[n];
 }  else {
    int a = fibo(n-1, t);
    int b = fibo(n-2, t);
    int result = (a + b);
    t[n] = result;
    return result;
  } 
 }
}



