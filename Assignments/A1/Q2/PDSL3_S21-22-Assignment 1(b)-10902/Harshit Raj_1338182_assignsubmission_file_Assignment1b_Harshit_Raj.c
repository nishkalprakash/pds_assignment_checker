/*
Name- Harshit Raj
Dept- Chemical
Roll- 21CH30015
Package- Codeblocks
OS- Win 10
*/

#include <stdio.h>
int main() {

int number,a,b,c,x,rev_number;

printf("enter your number: ");
scanf("%d", &number);

a=number%10;                                   //suppose number entered=123
                                            // a=3, x=12.3=12(since its int),
                                           // b=2, c=1.23=1(since its int),


x=number/10;
b=x%10;
c=x/10;

rev_number=100*a+b*10+c;

printf("reversed number is %d", rev_number);







return 0;
}
