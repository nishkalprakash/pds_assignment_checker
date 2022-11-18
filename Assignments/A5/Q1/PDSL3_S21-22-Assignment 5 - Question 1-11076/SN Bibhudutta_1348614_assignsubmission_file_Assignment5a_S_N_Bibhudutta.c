// S N Bibhudutta
// 21EC30043
// E&ECE Department 
// Package: Codeblocks
// Assignment 5

#include<stdio.h>
#include<stdlib.h>

// ARRANGING IN NON DECREASING ORDER
int ascend(int *a, int *b, int *c)
{
    int temp1,temp2,temp3;

    if (*a>*b)
    {
        temp1 = *a;
        *a = *b;
        *b = temp1;
    }

    if (*b>*c)
    {
        temp2 = *b;
        *b = *c;
        *c = temp2;
    }

    if (*a>*b)
    {
        temp3 = *a;
        *a = *b;
        *b = temp3;
    }

    return 0;
}

int main()
{
    int a,b,c; 
    int *p;
    int *q;
    int *r;

    printf("Ender three integers: ");
    scanf("%d %d %d", &a,&b,&c);

    p = &a;
    q = &b;
    r = &c;

    // BEFORE CALL
    printf("\n---Before Function Call---");
    printf("\nAddress of a = %d", p);
    printf("\nAddress of b = %d", q);
    printf("\nAddress of c = %d", r);
    printf("\nValues in a,b,c = %d,%d,%d", a,b,c);

    ascend(&a,&b,&c);

    // AFTER CALL
    printf("\n---After Function Call---");
    printf("\nAddress of a = %d", p);
    printf("\nAddress of b = %d", q);
    printf("\nAddress of c = %d", r);
    printf("\nValues in a,b,c = %d,%d,%d", a,b,c);

    return 0;
}