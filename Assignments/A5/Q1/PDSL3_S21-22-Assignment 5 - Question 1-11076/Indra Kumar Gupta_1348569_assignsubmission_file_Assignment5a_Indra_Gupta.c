/*
Name: Indra Kumar Gupta
Roll: 21AE10043
Department: Aerospace Engineering
Package: CodeBlocks
Operating system: Windows
*/

//Assignment 5(a)

#include <stdio.h>
#include <stdlib.h>
void rearrange(int *a, int *b, int *c)
{
    int temp1, temp2;
    //all values are equal
    if(*a==*b&&*a==*c&&*b==*c)
    {
        return;
    }
    else if(*a==*b||*a==*c||*b==*c) //only two values are equal
    {
        if(*c<*a)
        {
            temp1=*a;
            *a=*c;
            *c=temp1;
        }
    }
    else                           //all values are different
    {
        if(*a<*b&&*a<*c&&*c<*b)
        {
            temp1=*b;
            *b=*c;
            *c=temp1;
        }
        else if(*b<*a&&*b<*c&&*a<*c)
        {
            temp1=*a;
            *a=*b;
            *b=temp1;

        }
        else if(*b<*a&&*b<*c&&*c<*a)
        {
            temp1=*a;
            temp2=*b;
            *a=*b;
            *b=*c;
            *c=temp2;
        }
        else if(*c<*a&&*c<*b&&*a<*b)
        {
            temp1=*a;
            temp2=*b;
            *a=*c;
            *b=temp1;
            *c=temp2;
        }
        else if(*c<*a&&*c<*b&&*b<*a)
        {
            temp1=*a;
            temp2=*b;
            *a=*c;

            *c=temp1;
        }



    }


}

int main()
{
    int a,b,c;
    //taking input
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter c: ");
    scanf("%d", &c);
//printing before function call
    printf("--before function  call--\n");
    printf("Address of a = %u\n", &a);
    printf("Address of b = %u\n", &b);
    printf("Address of c = %u\n", &c);
    printf("Value in a, b, c = %d, %d, %d\n\n", a, b, c);
    //calling function
    rearrange(&a, &b, &c);
//printing values
    printf("--after function  call--\n");
    printf("Address of a = %u\n", &a);
    printf("Address of b = %u\n", &b);
    printf("Address of c = %u\n", &c);
    printf("Value in a, b, c = %d, %d, %d", a, b, c);

    return 0;
}
