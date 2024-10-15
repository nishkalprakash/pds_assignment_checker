//  Check if a number is a palindrome or not using recursion
//  Created by Anshita Gupta on 14/10/24. (anshitagupta.ag@kgpian.iitkgp.ac.in)
#include <stdio.h>
#include <math.h>

// Recursive function to find the number of digits in n
int digits(int n){
    if (n == 0)
        return 0;
    return 1 + digits(n / 10);
}

// Recursive function to check if n is a palindrome
int IsPalindrome(int n, int length){

    // Base case: When the number becomes 0
    if (n == 0)
        return 1;

    int firstDigit = n / (int)pow(10, length - 1);
    int lastDigit = n % 10;

    // Condition if not a palindrome
    if (firstDigit != lastDigit)
        return 0;

    // Checking the remaining number
    n = (n % (int)pow(10, length - 1)) / 10;
    return IsPalindrome(n, length - 2);
}

int main(){
    int n;
    scanf("%d", &n);
    // Calling recursive function to find the number of digits in n
    int length = digits(n);
    // Calling recursive function to check if the number is a palindrome
    if (IsPalindrome(n, length))
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
    return 0;
}
