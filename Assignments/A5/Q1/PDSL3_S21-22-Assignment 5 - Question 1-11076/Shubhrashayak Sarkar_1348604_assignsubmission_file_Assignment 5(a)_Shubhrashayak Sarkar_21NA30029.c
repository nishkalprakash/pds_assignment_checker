/*Name:- Shubhrashayak Sarkar;
Roll No:- 21NA30029
Package:- Visual Studio Code
Assignment class:- 6
*/
#include <stdio.h>
#include <math.h>

void SortNonSecreasing(int *p, int *q, int *r) // This function takes the address as arguments and changes them according to non decreasing order
{
    int max, min, mid;
    if ((*p >= *r) && (*p >= *q))
    {
        max = *p;
        if (*q >= *r)
        {
            min = *r;
            mid = *q;
        }
        else
        {
            min = *q;
            mid = *r;
        }
    }
    else if ((*q >= *r) && (*q >= *p))
    {
        max = *q;
        if (*p >= *r)
        {
            min = *r;
            mid = *p;
        }
        else
        {
            min = *p;
            mid = *r;
        }
    }
    else
    {
        max = *r;
        if (*p >= *q)
        {
            min = *q;
            mid = *p;
        }
        else
        {
            min = *p;
            mid = *q;
        }
    }
    *p = min;
    *q = mid;
    *r = max;
}

int main()
{
    int a, b, c; // Variables to store the integer
    printf("Enter the integers\n");
    int *p, *q, *r; // Pointers for storing the address of the variables
    p = &a;
    q = &b;
    r = &c;
    scanf("%d%d%d", p, q, r);
    printf("The address and value of the given numbers are respectively :-\n");
    printf("Address :-\n%d, %d, %d\n", p, q, r);
    printf("Value :-\n%d, %d, %d\n", *p, *q, *r);
    SortNonSecreasing(p, q, r);
    printf("The address and value of the given numbers are respectively :-\n");
    printf("Address :-\n%d, %d, %d\n", p, q, r);
    printf("Value :-\n%d, %d, %d\n", *p, *q, *r);
    return 0;
}