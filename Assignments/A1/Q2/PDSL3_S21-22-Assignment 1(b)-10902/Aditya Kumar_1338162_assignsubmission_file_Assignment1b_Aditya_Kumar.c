/*
Name:- Aditya Kumar
Roll no.:- 21ME10005
Dept- Mechanical Engg
Sec-3
Group-4
Assignment- 1b
Package- stdio.h
*/
#include <stdio.h>

int main()

{


int n, n1,n2,n3, reverse;


    printf("Enter the number to reverse:\n");
    scanf("%d", &n);

    n1 = n / 100;
    n2 = (n % 100) / 10;
    n3 = n%10 ;
    reverse = 100*n3 + 10*n2 + n1;

        printf(" The reverse is %d", reverse);
    return 0;
}

