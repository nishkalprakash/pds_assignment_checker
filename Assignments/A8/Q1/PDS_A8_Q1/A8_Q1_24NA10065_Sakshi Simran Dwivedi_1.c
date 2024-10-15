#include <stdio.h>
#include <math.h>

int digits(int i)  //function to read number of digits//
{

 if (i/10==0){ //base case//
 return 1;
 }
 
  return 1+(digits(i/10));
  }
 

	
int IsPalindrome(int num) //function to find if no. is palindrome or not//
{
 int a= digits(num); //calling out digits function//

 if (a<2) { //single digit no. are palindrome//
 return 1;
 }
 else {
 int c= pow(10,a-1); //for simplicity//

 	int i= num/c; //first digit//
 	int j= num%10;//last digit//
 	if ( i==j) {
 	
 	a=a-2; //two digits are removed- first and last one//
 	return IsPalindrome((num % c)/10);
 	}
 	else { 
 	return 0;
 	}
}
}
 	
 int main() //main function//
 {
 int n;
 scanf("%d", &n);
 int a=digits(n);
 
 if (IsPalindrome(n)==1) { 
 printf("Palindrome\n");
 }
 else {
 printf("Not Palindrome\n");
 }

 
 return 0;
 }
 
