#include<stdio.h>
//Name AYUSH KUMAR
//ROll 23IM10008
int main(){
  int n,a,b,c,d,e,f;
  scanf ("%d",&n);
  //finding the reverse of a 3 digit  number
  printf("Enter the whole number in place of  :");
  scanf("%d", &a );
  d=(a%10);
  printf("Enter the first two digits of your desired number:");
  scanf("%d", &b);
  e=(b%10);
  printf("Enter the last digit of your desired number :");
  scanf("%d",&c);
  f=(c%10);
  if ((d==a)&& (e==b)&& (f==c)){
    printf("The required 3 digit number is not  palindrome");
  }
  else {
    printf("The Number is  palimdrome");
  }
  return 0;
}
  
