/*
Name : Vankudoth Pavan
Department : Chemical Engineering
Roll No ;21CH10075
Package : Code Block
Operating System : Windows
*/
#include<stdio.h>
int main()
{
    int a, b, c, d, reverse;

    printf("Enter a three digit number:");
    scanf("%d" , &d);

    a=d/100;
    b=(d%100)/10;
    c=(d%10) ;

    reverse = c*100 + b*10 + a;

    printf("reverse number =%d" , reverse);

    return 0;
}
