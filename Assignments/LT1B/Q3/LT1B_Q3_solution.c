// Code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
// Program to print largest and 2nd largest at all times.
// Code update - removed recursion

#include <stdio.h>
int main()
{
    int N, l = l2 = -1; // N = temp storage for the number, l=largest, l2=2nd largest
    printf("Enter Number: ");
    while (1) // infinite Loop
    {
        scanf("%d", &N);
        if (N < 0)
            break; // if entered number is negative
        if (N > l)
        { // if entered number is largest
            l2 = l;
            l = N;
        }
        else if (N > l2 && N < l) // if entered number is 2nd largest
            l2 = N;
        printf("Largest: %d\nSecond largest: ", l);
        (l2 == -1) ? printf("Value Not yet entered\n") : printf("%d\n", l2);
    }
    return 0;
}
