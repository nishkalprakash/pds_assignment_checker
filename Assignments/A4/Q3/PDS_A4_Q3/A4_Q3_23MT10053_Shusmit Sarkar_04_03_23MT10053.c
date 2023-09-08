#include<stdio.h>
int main(){
  int n;
  printf("Enter a number ");
  scanf("%d",&n);
  int d=0;
  int D=0;
  int Rev=n;
  int rev =0;
  while(n!=0 ){
  d = n%10;
  rev = rev*10 + d;
  n/=10;
  }
 
  if(rev==Rev) printf ("Number is palindrome");
  return 0;
}
