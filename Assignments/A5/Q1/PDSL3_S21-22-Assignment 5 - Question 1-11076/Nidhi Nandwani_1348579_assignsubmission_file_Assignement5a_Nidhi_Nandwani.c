/*
Name: Nidhi Nandwani
Roll no. : 21MA10036
Section: 3
Package: Visual Studio Code
*/
#include <stdio.h>

void swap(int *x, int *y)
{
    //swapping two values using temporary variable
    int t;
        t= *x;
        *x=*y;
        *y = t;
}

void sort(int *x, int *y, int *z)
{
    //using pointers to sort the values
    
    if((*x)>(*y))
    {
        swap(x,y);
    }
    if((*y)>(*z))
    {
        swap(y,z);
        if((*x)>(*y))
            swap(x,y);
    }
}

int main()
{
    int a,b,c;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a,&b,&c);
    int ap,bp,cp;
    ap=&a; bp=&b; cp = &c;
    printf("--Before function call--\n");
    printf("Address of a = %u\n", ap);
    printf("Address of b = %u\n", bp);
    printf("Address of c = %u\n", cp);
    printf("Values in a,b,c: %d,%d,%d\n", a,b,c);

    printf("--After the function call--\n");
    sort(ap,bp,cp);
    printf("Address of a = %u\n", ap);
    printf("Address of b = %u\n", bp);
    printf("Address of c = %u\n", cp);
    printf("Values in a,b,c: %d,%d,%d\n", a,b,c);
    //printing the sorted order

}