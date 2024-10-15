#include<stdio.h>
#include<math.h>

int digits(int a){
  
  if(a==0) return 0;
  return 1+digits(a/10);
  
  
}


void ispalindrome(int a){
 int k;
 int first_digit;
 int last_digit;
 
 
 
  if(a>=0 && a<10)
   {
    printf("given number is a palindrome");
    return;
   }
  
  if(a>=10){
  k=digits(a);
  last_digit = a%10;
  first_digit = a/(int)(pow(10,(k-1)));
  if(first_digit!=last_digit)
   {
   printf("given number is not a pallindrome\n");
   return;
   }
  else{
   a=a/10;
   k--;
   a=a%((int)pow(10,(k-1)));
   return ispalindrome(a);
  }
  }
  
 }



int main(){
  int n,k;
  printf("enter a number between 0 and 100000\n");
  scanf("%d",&n);
  ispalindrome(n);
  return(0);
  
  }




