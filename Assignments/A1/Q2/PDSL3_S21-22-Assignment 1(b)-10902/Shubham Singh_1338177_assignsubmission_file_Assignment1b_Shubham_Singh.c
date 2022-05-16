/*
Name: Shubham Singh
Roll No: 21EX10032
Department: Geology and Geophysics
Package: Codeblocks
Assignment Class: 1
*/

#include<stdio.h>

int main() {

    int num;

    printf ("Enter a 3-digit number:\n");
    scanf ("%d", &num);

    int a = num/100;
    int b = num%100;
    int c = b/10;
    int d = b%10;

    printf ("\n20Reverse number = %d%d%d", d, c, a);

    return 0;
}
