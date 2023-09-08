#include<stdio.h>
int main(){
  int num,rev=0;
  int digit=0;
  printf("enter a number : ");
  scanf("%d",&num);
  int  num1 = num;
  while(num!=0){
    digit = num%10;
    rev =rev*10 +digit;
    num = num/10;
  }
 
  if(num1==rev){
    printf("it is a palindrome number");
  }
  else {
    printf("it is not a palindrome number");
  }
}
