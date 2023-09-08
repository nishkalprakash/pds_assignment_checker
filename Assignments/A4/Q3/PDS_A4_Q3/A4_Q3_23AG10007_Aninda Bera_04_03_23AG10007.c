#include <stdio.h>
int main ()
{
  int n,rem,rev=0;
  printf("enter a number:\n");
  scanf("%d",&n);
  while(rem>0){
    rev=rev*10+rem;
    rem=n%10;}
     if(n==rev){
    printf("Palindrome number");}
     else{
       printf("Not a palindrome number");}
  return 0;
}

    
