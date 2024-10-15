#include<stdio.h>
// recursive function digits()
int digits(int n){
if(n==0)
return 0;
return 1 + digits(n/10);
}
// recursive function IsPalindrome()
int IsPalindrome(int n){
if((1 + digits(n/10))%3 == 0){
if(n<10){
printf("%d\n",n);
return;
}
else{
printf("%d",n%10);
return IsPalindrome(n/10);
}
}
else if((1 + digits(n/10))%2 == 0)
 return n; 
}
int main(){

int n;
scanf("%d",&n);
printf("%d\n",digits(n));
 int a = IsPalindrome(n);
 printf("%d\n",a);
if(n == a){
printf("Palindrome\n");
}
else{
printf("Not palindrome\n");
}
}
