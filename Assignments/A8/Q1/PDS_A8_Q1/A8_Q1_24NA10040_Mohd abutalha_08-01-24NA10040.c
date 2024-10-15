/* lab8
name :- Mohd Abutalha
roll no. :- 24NA10040*/
#include<stdio.h>
#include<math.h>
//making function to calculate number of digits of integer n
int digits(int n){
    int d=0; //denoting no. of digits as "d"
    if(n!=0){
    digits(n/10);
    d++;
    }
    return d;
}
//making function to check if the number is palindrome or not
void IsPalindrome(int n){
    
      if(digits(n)==1) printf("palindrome");
      else if(digits(n)==0) printf("palindrome");
      else{
      int last_digit = (n%10);
      int first_digit = (n/(pow(10,digits(n)-1)));
      int x=(n/10);
      int y=n/(pow(10,digits(n)-1));
       if(last_digit==first_digit){
       IsPalindrome(x-(y*pow(10,digits(n)-2)));   
      }
        if (last_digit != first_digit) printf("not palindrome");  
    }  
}
int main()
{
    int n;
    printf("enter the number: ");
    scanf("%d",&n); //taking the input of the natural number
    if(n>0){
     IsPalindrome(n);
    }
  return 0;
}
