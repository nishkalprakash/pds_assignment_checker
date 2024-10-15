//code to check if a number is a palindrome
// code creator: Bhumi Garg
// roll no: 24NA10021

#include <stdio.h>
#include <math.h>

int digits(int n){

      if (n/10 == 0) return 0;
    
        n = n/10;
        
        return  1 + digits(n);
    
    
 }

int IsPalindrome(int x, int y){
    
        int flag = 0;
        
        if (IsPalindrome (x,1) == 0) return 0;
       
        if (( x/(int)(pow(10,y-1))) !== (x%10))
           return 0;
           
      
        IsPalindrome ( (x%(int)(pow(10,y-1)))/10, y-2);
 }
 
 int main () {
  
       int n, no_digits, palindrome;
       
       scanf("%d", &n);
       
       no_digits = digits(n);
       
       palindrome = IsPalindrome (n, no_digits);
       
       if(palindrome!= 0)
        printf("n is a palindrome");
    
        printf("%d", no_digits);
 
 }
    
         
