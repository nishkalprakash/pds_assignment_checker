/*
Name: Adipta Halder
Roll Number: 21EC30003
Department: EC
OS: Windows 10
Package: CODEBLOCKS
Assignment Class: 3
Assignment: 1b
*/
#include<stdio.h>

int main(){
    int num,q,r;
    printf("Enter a 3-digit number: ");
    scanf("%d",&num);
    printf("\nReverse number =");
    q=num/10;
    r=num%10;
    printf("%d",r);
    r=q%10;
    q=q/10;
    printf("%d",r);
    printf("%d",q);

 return 0;
}

