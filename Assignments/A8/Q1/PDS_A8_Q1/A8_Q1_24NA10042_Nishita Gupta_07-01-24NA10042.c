// Program to 
// Code creator : Nishita Gupta
// Roll number : 24NA10042

#include<stdio.h>
#include<math.h>
int digits(int n) {      //creating function to calculate the number of digits
if (n==0) return 0;
 return 1+digits(n/10);
}
int palindrome(int n){////creating function to check palindrome

if(n==0) {

printf("number is a palindrome"); 
return 0 ;}
int last_digit=n%10;
int y=digits(n)-1;
int first_digit=n/(int)(pow(10,y));

if (last_digit!=first_digit) printf("number is not a palindrome");


else return palindrome(n/10-(first_digit*(int)pow(10,y-1)));}
int main(){
 int n;
printf("enter the natural number:");
 scanf("%d",&n);
   
 palindrome(n);




return 0;
}
