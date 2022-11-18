/*Soumojit Bhattacharya 
21EC10071 
macos visual studio code*/
#include <stdio.h>

void print(int* a,int* b,int* c)     //prints values and address
{
    printf("address of a=%p\naddress ofb=%p\naddress of c=%p\n", a, b, c);
    printf("values in a,b,c: %d,%d,%d\n", *a, *b,*c);
}

void sort(int* a, int* b, int* c)   //sorts values stored in a bc
{
    if(*a>*b)
    {
        *a=*a+*b;
        *b=*a-*b;
        *a=*a-*b;
    }
    if(*a>*c)
    {
        *a=*a+*c;
        *c=*a-*c;
        *a=*a-*c;
    }
    if(*b>*c)
    {
        *b=*b+*c;
        *c=*b-*c;
        *b=*b-*c;
    }
}

int main()
{
    int a,b,c;
    printf("Enter three integers:");
    scanf("%d %d %d",&a,&b,&c);
    printf("---Before function call----\n");
    print(&a,&b,&c);                         //function arguments are addresses of a,b,c
    sort(&a,&b,&c);
    printf("---After function call----\n");
    print(&a,&b,&c);
    printf("\n");
    
    return 0;
}