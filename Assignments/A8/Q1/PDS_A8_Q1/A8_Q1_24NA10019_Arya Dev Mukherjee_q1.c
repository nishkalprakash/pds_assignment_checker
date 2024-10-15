#include<stdio.h>
#include<math.h>
//T.A clarified that usig math.h is permissible and shall not result in marks deuction.
//recursive program to check number of digits.
int digits(int a, int b){
    if(a==0){
        return b;
        }
    
    else{
        a = a/10;
        b++;
        return digits(a,b);
        }
    }
    
//recursive code to check if given number is a palindrome.

int IsPalindrome(int a, int b, int j){
    int A = digits(a,0);
    if(A == 1){
        return (b);
        }
        
    else{
        int q = a/pow(10,A-1);
        b+=q*pow(10,j);
        j++;
        return IsPalindrome(a%(int)pow(10,A-1),b,j);
        }
    }
    
int main(){
    int a = 0;
    printf("Enter digit: ");
    scanf("%d",&a);
    if((IsPalindrome(a*10+1,0,0) == a)){
     printf("Palindrome");}
     
    else{
        printf("Not Palindrome");
        }
    return 0;
    }
