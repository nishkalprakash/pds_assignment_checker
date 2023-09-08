#include<stdio.h>
#include<math.h>
int main(){
  int n,a,c;
  int sum=0;
  printf("Enter the number to be checked:\n");
  scanf("%d",&n);
  a=n;
  while(a!=0){
    c=a%10;
    a=a/10;
    sum=(sum*10)+c;
  }
  if(sum==n){
    printf("The number entered is a palindrome");
  }
  else{
    printf("The number entered is not a palindrome");
  } 
  return 0;
}
