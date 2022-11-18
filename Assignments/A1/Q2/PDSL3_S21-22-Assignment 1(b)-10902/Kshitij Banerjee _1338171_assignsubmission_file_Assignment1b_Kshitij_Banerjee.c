#include <stdio.h>
int main()
{
    int n, a, b, c, reverse;

    printf("Enter a 3-digit number:");
    scanf("%d", &n);

    a = n / 100;
    b = (n % 100) / 10;
    c = n % 10;

    reverse = c * 100 + b * 10 + a;

    printf("Reverse Number = %d", reverse);
    return 0;
}
