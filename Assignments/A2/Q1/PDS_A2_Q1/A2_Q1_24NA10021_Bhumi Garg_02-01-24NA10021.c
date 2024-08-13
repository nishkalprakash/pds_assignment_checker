//Program to compute the sum of series for a 3 digit number n
//Code Creator: Bhumi Garg
//Roll No: 24NA10021

#include <stdio.h>
int main ()

{ 
    int n, S1, S3, a, b, c;
    long S2;
    
    printf (" Enter a 3 digit number n : ");
    scanf ("%d", &n);
    
    S1 = n*(n+1) /2;
    S2 = n*(n+1)*((2*n)+1)/6;
    /*For computing the sum of the first 2 series I made use of the generalised formula */
        
    a = n/100;
    b = (n - 100*a)/10 ;
    c = n- (100*a) - (10*b) ;
    
    /* Here to compute the hundredth place digit we divide by 100. Then we subtract the value of the hundredth place to obtain a 2 digit number and so on */
    
    S3 = a + b + c;
    
    printf ("\n The sum of all natural numbers uptil n is %d", S1);
    printf ("\n The sum of the squares of all natural numbers uptil n is %ld", S2);
    
    printf ("\n The sum of the digits of n is %d", S3);
    
 }
