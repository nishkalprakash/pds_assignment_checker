//code creator:M.Yasaswitha
//roll no:24NA10037
//to check a number is palindrome or not
#include<stdio.h>
int digits(int n) {
if(n==0) return 0;
else  return 1+digits(n/10);
}
int ispalindrome(int n,int count) {
int i=n%10;
int j=n/(int)(10^(count-1));
if(i!=j) return 0;
else return ispalindrome(n-2,count-2);
}
int main()
{
int n,count;
scanf("%d",&n);
count=digits(n);
if(ispalindrome(n,count)==0) {
printf(" palindrome");
}
else {
printf(" not palindrome");
return 0;
}
}
