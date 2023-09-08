//Roll no.: 23IM30025
//NAME : Shreyash Girdhari Dhakate
#include<stdio.h>
int main(){
  int n,a;
  printf("Enter the nuber to be checked as a palindrome:");
  scanf("%d", &n);
  while(1==1){
    a=n;
    if (a%10>=0 && a%10<=9){
      printf("%d",a);
      break;
    }
    n%=10;
    
    
  }
  return 0;
}
  
