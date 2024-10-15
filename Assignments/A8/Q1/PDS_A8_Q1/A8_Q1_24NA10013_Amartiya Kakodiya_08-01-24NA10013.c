//NAME:Amartiya Kakodiya
//ROLL NO.:24NA10013
//to check whether the given number is palindrome or not
#include<stdio.h>
#include<math.h>
//to check the number of digits in n
int digits(int n){
      if (n==0){
      return 0;
   }
   else{
      return 1+digits(n/10);
   }
}
// to check if n is a palindrome or not
int IsPalindrome(int n,int d){
     if(n%10==0){
     return 0;
     }
     if(n%10!=(n/(int(pow(10,d-1))))){
     return -1;
     }
     if(n%10==(n/(int(pow(10,d-1))))){
     return Ispalindrome(n,d);     
     
     }

int main(){

int n,x,y;
   printf("enter a number n:");
   scanf("%d",&n);
   x=digits(n);
   printf("the number of digits in %d is %d",n,x);
   y=IsPalindrome(n,d);
  if(int IsPalindrome((n,digits)==0)){
  printf("Palindrome");
  }
  if(int IsPalindrome((n,digits)==-1)){
  printf("Not Palindrome");
  }
  return 0;
   
}





