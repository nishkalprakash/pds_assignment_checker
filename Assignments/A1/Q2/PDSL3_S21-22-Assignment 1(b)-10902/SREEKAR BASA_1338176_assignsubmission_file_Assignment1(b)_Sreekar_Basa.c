/*
Name        : Basa Sreekar
Roll no.    : 21EE10024
Department : Electrical Engineering
package     : code blocks
Assignment 1(b)
*/
#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,n ;
    printf("Enter the three digit number : "); //Enter the required 3-digit number //
    scanf("%d",&n);
    a = (n%10) ;
    b = (n/10)%10 ;
    c = (n/100) ;
    printf("The reverse number is : %d%d%d",a,b,c);
    return 0 ;
}
