/*
Name: Shashwata Roy
Roll: 21MA10055
Dept: Maths and Computing
Package: Codeblocks
Assignment class: 4
*/
#include<stdio.h>

int main(){
    int a,b,c,d;
    printf("Enter a 3-digit number: ");
    scanf("%d",&a);
    b=a%10;
    a/=10;
    c=a%10;
    a/=10;
    d=100*b+10*c+a;;
    printf("Reverse number = %d",d);
return 0;
}
