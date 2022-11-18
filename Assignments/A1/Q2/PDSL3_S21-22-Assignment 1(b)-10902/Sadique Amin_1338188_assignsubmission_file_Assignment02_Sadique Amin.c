/*
Name: Sadique Amin
Roll Number: 21CE30027
Department: Civil Engineering
Package used: <stdio.h>
Assignment Class: 6
*/

#include <stdio.h>
int main()
{
    int n,a,b,c;                                //Initializing variables
    printf("Enter a 3-digit number: ");
    scanf("%d",&n);                             //Taking input from user
    a=n%10;
    n=n/10;
    b=n%10;
    n=n/10;
    c=n%10;
    int rv=a*100+b*10+c;                        //Reversing the number
    printf("Reverse number = %d",rv);
    return 0;
}