#include <stdio.h>
#include <math.h>
int digits(int n)   //recursive function to calculate the number of digit
{
 int count =0;
 if(n<10 && n>=0)
 return 1;
 if(n>=10){
 int d=n%10;
 count++;
 count+=digits(n/10);
 return count;
 }
 }
 int IsPalindrome(int n)
 {
 if(n<10 )
 return 1;
  int last_digit=n%10;//to calculate last digit
  int first_digit=n/(int)(pow(10,digits(n)-1));
  if(last_digit==first_digit){
  IsPalindrome((n-(first_digit*pow(10,digits(n)-1)))/10);
  } //when first and last digit of original number are checked then exclude and then check the middle part
  else 
  return -1;
  }
int main()
{
  int n;
  scanf("%d",&n);
  if(IsPalindrome(n)==1)
  printf("Palindrome");
  else
  printf("Not Palindrome");
 return 0;
  }
  
  
