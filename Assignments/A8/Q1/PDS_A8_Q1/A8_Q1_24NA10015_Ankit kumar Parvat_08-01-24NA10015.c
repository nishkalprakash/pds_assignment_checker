#include<stdio.h>
int digits(int n){ // calculating the digits of n
   if ((n/10)==0) return 1;
   else return (1+digits(n/10));
}
int powr(int x){ // calculating 10^x
  int a=1;
  for(int i=1;i<=x;i++) a=a*10;
  return a;
     
  }
int IsPalindrome(int n,int x){
  int a=0;
  if ((n%10)==0) return n;
  else {
     return (IsPalindrome(n/10,x-1)+((n%10)*powr(x-1)));
     
  }
}
int main(){
    int n;
    scanf("%d",&n);// input the number
    int a=digits(n);// digits of n
    int b=IsPalindrome(n,a);
    if (b==n) printf("\n Palindrome");
    else printf("\n Not Palindrome");
    return 0;
}
