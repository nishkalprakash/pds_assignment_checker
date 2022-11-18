/*
Name : Ankit Yadav
Roll No : 21EE30005
Department : Electrical Engineering
Package : codeblocks
Assignment class : 1
*/


#include<stdio.h>

int main(){

    int n,a,b,c,k,t;

    printf("Enter the 3 digit number");
    scanf("%d",&n);

    a=n/100;
    b=((n/10)%10);
    c=n%10;

    k=a;
    a=c;
    c=k;

    t=((100*a)+(10*b)+c);

    printf("\nReversed Number is= %d",t);

    return 0;
}
