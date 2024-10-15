#include<stdio.h> 
//recursive function for calculating number of digits 
int digits(int n) { 
if (n==0) return 0 ;
else return 1+digits(n/10) ; 
} 
//recursive function to check number is pallindrom or not 
int ispallindrome(int n,int first_digit,int second_digit ) { 
last_digit=n%10 ;
 first_digit=n/(int) (10^(d-1)) ;
 if first_digit!=last_digit ;
 return -1      //number is not pallindrome     
 else 
 return ispallindrome(int n,int first_digit++,int --last_digit) 
 
 
 int main() 
 int n ;
 printf("enter the value of n") ;
 scanf("%d\n",&n) ;
 //printing the number of digits 
 printf("the number of digits in n is {digits(int n)} ") 
 
 //printing the number : is number pallindrome or not 
 if return!=-1 ;
 printf("given number is pallindrome ")     
 return 0 
 }               
