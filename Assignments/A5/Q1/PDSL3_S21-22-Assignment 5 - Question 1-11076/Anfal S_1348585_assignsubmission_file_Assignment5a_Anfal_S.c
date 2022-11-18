/*
Name: Anfal S
Roll no: 21AE10003
Section: 3
Dept: AE
Package: Codeblocks
Assignment class: 5
Operating System: windows
*/
#include<stdio.h>
void rearrange(int* x,int* y,int* z)
{
    int temp;
    if(*x>=*y)
    {
        temp=*y;
        *y=*x;
        *x=temp;
    }
    if(*y>=*z)
    {
        temp=*z;
        *z=*y;
        *y=temp;
    }
    if(*x>=*y)
    {
        temp=*y;
        *y=*x;
        *x=temp;
    }
}
int main()
{
    int a,b,c;
    printf("enter 3 numbers:");
    scanf("%d%d%d",&a,&b,&c);
    printf("address of a=%d\naddress of b=%d\naddress of c=%d\nvalues in a,b,c= %d,%d,%d\n",&a,&b,&c,a,b,c);
    rearrange(&a,&b,&c);
    printf("address of a=%d\naddress of b=%d\naddress of c=%d\nvalues in a,b,c= %d,%d,%d\n",&a,&b,&c,a,b,c);
    return 0;
}
