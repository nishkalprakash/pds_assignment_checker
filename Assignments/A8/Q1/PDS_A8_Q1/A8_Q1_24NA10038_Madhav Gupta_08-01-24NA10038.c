//creator:Madhav Gupta
//roll no:24NA10038

#include<stdio.h>
#include<math.h>
int digits(int n){
int k;
  if(n==0){
    k=0;
    }
  else  {
    k=digits((n/10));
    k++;
  }
  return k;
  } 
int IsPalindrome(int n){
  int k;
  if(n==0){//for even digit no.
     k=1;
     return k;}
  else if(digits(n)==1){//for odd digit no.
     k=1;
     return k;}
  else{
  if((n/((int)pow(10,digits(n)-1)))==(n%10)){//to check if digits are same
   k=IsPalindrome((n-((n/((int)pow(10,digits(n)-1)))*((int)pow(10,digits(n)-1)))-n%10)/10);
   return k;}
  else{
  return 0;}//for eliminating non palindromes
 } 
 }
int main()
 {
 int n;
  scanf("%d",&n);
  if(IsPalindrome(n)==0){
  printf("Not palindrome");}
  else{
  printf("palindrome");}
  return 0;
  }
  
  
