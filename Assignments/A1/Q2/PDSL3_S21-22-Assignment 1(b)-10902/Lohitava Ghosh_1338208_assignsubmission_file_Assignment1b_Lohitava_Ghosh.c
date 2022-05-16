/*
Name:Lohitava Ghosh
Roll no.:21AE10023
Department:Aerospace Engg Btech.
Package:code blocks
Operating system: Windows
*/

#include <stdio.h>

int main()
{
    int n,sum,r,q;
    sum=0;
    printf("Enter a 3-digit number: ");
    scanf("%d",&n);
    r=n%10;
    sum=sum+r*100;
    q=n/10;
    r=q%10;
    sum=sum+r*10;
    q=q/10;
    r=q%10;
    sum=sum+r;
    q=q/10;
    printf("Reverse number = %d",sum);

    return 0;
}

