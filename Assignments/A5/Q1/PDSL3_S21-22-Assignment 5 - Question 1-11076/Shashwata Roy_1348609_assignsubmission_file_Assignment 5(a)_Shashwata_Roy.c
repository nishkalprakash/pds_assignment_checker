/*
Name: Shashwata Roy
Roll: 21MA10055
Dept: Maths and Computing
Package: Codeblocks
Assignment class: 4
*/
#include<stdio.h>

void swap(int *x,int *y)    //Swapping function
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

void sort(int *a,int *b,int *c)
{
    if(*a>*b)                       //Shifting a to the smallest position
    {
        if(*a>*c)                   //If a is largest, check which of b and c is smallest
        {
            if(*b>*c)
                swap(a,c);          //If c is smallest then shift to c
        }
        else
            swap(a,b);              //Otherwise shift to b (As b is smallest)
    }
    if(*b>*c)
        swap(b,c);                  //Swap b and c is b is still greater than c
}

int main()
{
    int a,b,c;
    printf("Enter three integers: ");
    scanf("%d%d%d",&a,&b,&c);
    printf("\n");
    printf("--Before function call--\n");
    printf("Address of a = %d\n",&a);
    printf("Address of b = %d\n",&b);
    printf("Address of c = %d\n",&c);
    printf("Values in a,b,c = %d,%d,%d\n\n",a,b,c);
    sort(&a,&b,&c);
    printf("--After function call--\n");
    printf("Address of a = %d\n",&a);
    printf("Address of b = %d\n",&b);
    printf("Address of c = %d\n",&c);
    printf("Values in a,b,c = %d,%d,%d\n\n",a,b,c);
    return 0;
}
