/*
Name: R S Thiruvignesh
Roll no.:21BT10022
Department: Biotechnology 4yr
Package: Code blocks
Operating system: Windows 10 */


#include <stdio.h>

void main(){

    int n;
    int a,b,c,n1;

    printf("enter a three digit number:");
    scanf("%d",&n);

    a=n/100;
    c=n%10;
    b=(n%100-c)/10;

    n1=100*c+10*b+a;

    printf("the reverse of %d is %d",n,n1);
}
