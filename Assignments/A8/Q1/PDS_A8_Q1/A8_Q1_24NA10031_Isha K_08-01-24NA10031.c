#include<stdio.h>
#include<math.h>
 int digits(int n)
 {	int c=0;
 	if (n/10==0){
 	c=1;
 	return n;}
 	else{
 	c++;
 	return digits(n%10);}
 	
 }
 
 int IsPalindrome(int n)
 {	digits(n);
 	for (d=0;d<c;d++){
 	if (n%d==n/pow(10,d-1))
 	return 1;
 	else break;
 	
 	
 	
 	
 int main()
 {
 	int n;
 	scanf("%d",&n);
 	IsPalindrom(n);
 	if (IsPalidrom(n)==1)
 	printf( "Palindrome");
 	else printf("Not Palindrome");
 	return 0;
 	}
 	
 	
