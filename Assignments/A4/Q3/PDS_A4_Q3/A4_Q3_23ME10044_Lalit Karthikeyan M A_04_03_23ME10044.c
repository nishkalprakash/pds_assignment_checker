//Roll NO.: 23ME10044
//Name: Lalit Karthikeyan M A

#include<stdio.h>

int main(){

  int n,a,rev=0;

  printf("Enter a number: \n");
  scanf("%d",&n);
  
  a=n;

  while(n>0){             //Loop to reverse the given number.
    
    rev=rev*10+(n%10);
    n=n/10;

  }
  
  //To check if the given number is palindrome.
  
  if(rev==a) printf("The given number is a palindrome. \n"); 
  else printf("The given number is not a palindrome. \n");

  return 0;
}
  
    
