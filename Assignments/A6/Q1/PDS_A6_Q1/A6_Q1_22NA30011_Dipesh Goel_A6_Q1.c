#include <stdio.h>
#include <stdlib.h>

/*
Section 14
Roll No : 22NA30011
Name : Dipesh Goel
Assignment No : 6
Description: Printing n terms of a series
*/

int print_term(int n)
    {
        if (n>2) return (3*print_term(n-1)*print_term(n-2) - 2*print_term(n-2)*print_term(n-3) + 1);
        else return n;
    }


int main()
{
    int k;
    printf("Enter the number of the terms : ");
    scanf("%d",&k);

    if (k<0) printf("Invalid input");

    for (int i=1;i<=k;i++)
    {
        printf("%d",print_term(i));
        if (i!=k) printf(", ");
    }
    return 0;
}

