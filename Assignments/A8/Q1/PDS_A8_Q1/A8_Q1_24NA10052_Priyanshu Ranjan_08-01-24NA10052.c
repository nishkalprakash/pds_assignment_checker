#include <stdio.h>
int digit =0;
int palindrome=0;
int digits(int a){
	
	int t=a;
	if (t==0){
	return digit;}
	t=t/10;
	if (t>0){
	digit+=1;}
	digits(t);
}
int IsPalindrome(int b){
	int y=b;
	if(y>0){
	palindrome +=y%10;
	palindrome =palindrome*10;
	}
	y=b/10;
	if (y==0){
	return palindrome;}
	IsPalindrome(y);
}

int main(){
	int n;
	scanf("%d",&n);
	int x=digits(n);
	digit+=1;
	int z=IsPalindrome(n)/10;
	if(z==n){
	printf("Palindrome");}
	else{printf("Not Palindrome");}
}
