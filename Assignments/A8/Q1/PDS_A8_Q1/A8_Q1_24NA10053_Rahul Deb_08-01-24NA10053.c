#include <stdio.h>
int c=0;
int digits(int n){
    if(n==0){
        return c;   //base case 
    }
    
    c++;    // increasing count of digits 
    n=n/10;
    return digits(n);  //recursive call 
}

int IsPalindrome(int n,int mult){
 //reversing number using recursion 
    if(n==0){return 0;}
    
    int a=n%10;
    a*=mult;
    return a+IsPalindrome(n/10,mult/10);
}


void main(){
    int n;
    
    scanf("%d",&n);
    
    int x = digits(n);
    int mul = 1;
    for(int i=0;i<x-1;++i){
        mul = mul*10;
    }
    
    if(n==IsPalindrome(n,mul)){   
    printf("Palindrome");}
    else{printf("Not palindrome");}

}
