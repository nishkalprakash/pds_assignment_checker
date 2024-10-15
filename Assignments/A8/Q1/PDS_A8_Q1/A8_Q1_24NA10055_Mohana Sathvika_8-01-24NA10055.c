#include<stdio.h>
int digits(int n){ //counting no.of digits
  
  if(n==0) return 0;
  return 1 + digits(n/10); //recursive call
  }
int IsPalindrome(int count,int *a, int i, int j){ //function to check if the number is palindrome or not
    if(i >= j) return 1;
    if(a[i] != a[j]) return 0;
    return IsPalindrome(count, a, i+1, j-1);
    }
int main(){
 printf("enter a natural number:");
 int n;
 scanf("%d", &n);
 int x = digits(n);
 int count = digits(n);
 int a[count+1];
 for(int i =count-1;i>=0;--i){
       a[i]= n%10;
       n /= 10;
       } // assigning each digit of the number as the element of an array	
	int truth = IsPalindrome(count, a, 0, count-1);
	if(truth) printf("Palindrome\n");
	else printf("Not Palindrome\n"); //printing the results
}

















