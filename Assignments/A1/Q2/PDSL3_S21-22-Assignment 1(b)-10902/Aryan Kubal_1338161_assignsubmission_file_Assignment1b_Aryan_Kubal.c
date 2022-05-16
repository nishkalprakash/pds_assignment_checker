//Aryan Kubal
//21MT30012
//ASSIGNMENT1b
#include <stdio.h>

int main() {
    // insert code here...
    int a,b,c,n;
    printf("give a three digit number: ");
    scanf("%d",&n); // input a 3 digit number
    // method to reverse the digits of the number
    a=n/100;
    c=n%10;
    b=(n%100)/10;
    printf("reversed number is %d%d%d \n",c,b,a); //printing reversed number
    
    
    return 0;
}