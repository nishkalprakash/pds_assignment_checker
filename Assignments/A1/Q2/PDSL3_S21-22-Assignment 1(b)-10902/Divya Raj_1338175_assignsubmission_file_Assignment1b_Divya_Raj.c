/*
Name : Divya Raj
Roll : 21MT10017
Dept : Metallurgy
Package : Visual Studio
*/
#include<stdio.h>
int main()
{
    int num,h,t,o;
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);
    h = num/100;
    t = (num/10)%10;
    o = num%10;
    printf("Reverse number: %d", o*100 + t*10 + h);
    return 0;
}