#include <stdio.h>
#include <Math.h>
int digits(int n){

if(n<10){
return 1;
}
else { 
return 1+digits(n/10);

}
}
int IsPalindrome(int n){
int i= digits(n);
int first_digit;
int last_digit;
if(n<10){
printf("number is a palindrome\n");
return;}
 else{
 
last_digit=n%10;
first_digit=n/((int)pow(10,(i-1)));

if(last_digit!=first_digit){
   printf("Not Palindrome\n");
   }
   else {
   n=n/10;
   n=n/((int)pow(10,(i-1)));
   printf("Palindrome\n");
   return Ispalindrome(n);
   }
   }
   }
   
void main(){
int n;
printf("Enter value of n\n");
scanf("%d",&n);
IsPalindrome(n);
}
