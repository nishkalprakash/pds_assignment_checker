#include<stdio.h>
#include<math.h>
int d;//number of digits

int digits(int n){
if (n==0) return 0;
return 1+digits(n/10);

}



void IsPalindrome(int n){
int frist_digits = n/(int)(pow(10,digits(n))-1);
int last_digits = n%10;
   if(n==0){
   printf("Palindrome");
      }
   else if (frist_digits==last_digits){
     printf("Palindrome");
       }

    else{ printf("Not Palindrome");
    }
    
    
 return;   
 }
 
 
    
 int main(){
int n;
printf("Enter the number");
scanf("%d",n);
 Ispalindrome(n);

  return 0;}

