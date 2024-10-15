#include<stdio.h>
int n;
int digits(int n)
{
int i=0;
if(n>10)
{
i++;
return digits(n/10);
}
else{return 1;
}
return i;
}
void IsPalindrome(int n){
if(n<10){
printf("%d",n);
return n;}
else{ return IsPalindrome(n/10);
return n;
}
else if (i+ digits(n/10)%2 ==0){

int main(){
int n;
scanf("%d",&n);
printf("%d",digits(n));
int a = IsPalindrome(n);
printf("%d",a);
if(n==a){
printf("Pallindrome\n");
}
else{printf("Not Pallindrome\n");
}
}


