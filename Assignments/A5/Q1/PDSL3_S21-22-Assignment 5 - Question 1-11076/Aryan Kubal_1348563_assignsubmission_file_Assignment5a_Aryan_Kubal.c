/***************************
 * Name : Aryan Kubal
 * Roll number : 21MT30012
 * Section : 3
***************************/

#include<stdio.h>
#include<stdlib.h>

void rearrange(int *a1,int *b1,int *c1)
{
    int t;
    if(*a1>*b1&&*a1>*c1&&*b1<*c1)
    {
        t=*a1;
        *a1=*b1;
        *b1=*c1;
        *c1=t;
    }
    else if(*a1>*b1&&*a1>*c1&&*b1>*c1)
    {
        t=*a1;
        *a1=*c1;
        *c1=t;
    }
    else if(*b1>*a1&&*b1>*c1&&*a1>*c1)
    {
        t=*b1;
        *b1=*a1;
        *a1=*c1;
        *c1=t;
    }
    else if(*b1>*a1&&*b1>*c1&&*a1<*c1)
    {
        t=*b1;
        *b1=*c1;
        *c1=t;
    }
    else if(*c1>*a1&&*c1>*b1&&*b1<*a1)
    {
        t=*a1;
        *a1=*b1;
        *b1=t;
    }
    else if(*c1>*a1&&*c1>*b1&&*a1<*b1)
    {
        printf("\nPeace\n");
    }
    

}

int main() 
{
    int a,b,c;
    printf("\nEnter the 3 numbers : "); // taking input for the 3 numbers
    scanf("%d%d%d",&a,&b,&c);

    printf("\nAddress of a %p\tValue of a %d",&a,a); // printing the address of a
    printf("\nAddress of b %p\tValue of b %d",&b,b); // printing the address of b
    printf("\nAddress of c %p\tValue of c %d",&c,c); // printing the address of c

    rearrange(&a,&b,&c);
    
    printf("\n\nAddress of a %p\tValue of a %d",&a,a); // printing the address of a (rearranged)
    printf("\nAddress of b %p\tValue of b %d",&b,b); // printing the address of b (rearranged)
    printf("\nAddress of c %p\tValue of c %d\n",&c,c); // printing the address of c (rearranged)

    return 0;
}