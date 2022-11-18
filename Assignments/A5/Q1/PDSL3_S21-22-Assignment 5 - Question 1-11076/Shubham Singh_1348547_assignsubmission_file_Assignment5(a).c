/*
Name: Shubham Singh
Roll No: 21EX10032
Department: Geology and Geophysics
Package: Codeblocks
Assignment Class: 5(a)
*/

#include <stdio.h>

void rearrange(int *a, int *b, int *c)
{
    // Sorting in non-decreasing order
    int temp;
    if (*a > *b)
        temp = *a, *a = *b, *b = temp;
    if (*a > *c)
        temp = *a, *a = *c, *c = temp;
    if (*b > *c)
        temp = *c, *c = *b, *b = temp;
    return;
}
int main()
{
    int a, b, c;
    printf("Enter three integers a,b,c repsectively : \n ");
    scanf("%d%d%d", &a, &b, &c);    //scanning numbers

    printf("\n\n---Before function call---\n\n");

    printf("Address of a = %u\n", &a);  //printing addresses of integers

    printf("Address of b = %u\n", &b);
    printf("Address of c = %u\n\n", &c);
    printf("Values in a,b,c = %d,%d,%d\n", a, b, c);  //printing values of integers

    printf("\n\n---After function call---\n\n");

    rearrange(&a,&b,&c);   //function call to sort values

    printf("Address of a = %u\n", &a);   //printing addresses of integers
    printf("Address of b = %u\n", &b);
    printf("Address of c = %u\n\n", &c);
    printf("Values in a,b,c = %d,%d,%d\n", a, b, c);  //printing values of integers after sorting

    return 0;
}
