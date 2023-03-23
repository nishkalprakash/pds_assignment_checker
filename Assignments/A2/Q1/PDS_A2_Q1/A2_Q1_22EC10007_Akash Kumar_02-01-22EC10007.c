#include <stdio.h>

int main()
{
    int n, S1, S2;

    printf("Enter the number n\n");
    scanf("%d", &n);

    S1 = n*(n+1)/2;
    S2 = n*(n+1)*(2*n+1)/6;

    printf("Number entered is %d\n", n);
    printf("S1 = %d\n", S1);
    printf("S2 = %d\n", S2);
    return 0;

}


// I can't think of a formula to calculate to calculate S3 at this moment.
