// code to check if a number is palindrome or not
//Name : Dipon Sarkar
//Roll No.:- 24NA10025

#include<stdio.h>
#include<math.h>

int digits(int n)
{
int p,s; // initialising variables

if(p==0) return 1;
else
{
 digits(p);
 
 }
 r=1+digits(p);
 return s;
 }
 void palindrome(int n){ //declaring the recursive function
 int l, r,k,d ;
 k=n/10;
 if(k==0) 
 {
 printf("palindrome"); // To print palindrome number
 
 }
 else
 {
 k=n/10;
 r=n%10;
 d=digits(n);
 l=((int n)/(pow(10,d-1))); // n typecasted to int type
 if(r!=l){
 printf("Not a palindrome"); // To print a non  palindrome number
 }
 else 
 {
 palindrome(k);
 }
 return ;
 }
 }
int main()
{
int n,num;
scanf("%d",&n);
num=digits(n);
printf(number of digits:"%d",number);
palindrome(n); //calling the recursive function
return 0;
}
