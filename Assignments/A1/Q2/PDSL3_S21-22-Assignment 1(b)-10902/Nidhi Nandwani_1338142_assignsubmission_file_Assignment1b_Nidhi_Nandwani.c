#include <stdio.h>
int main()
{
    int num;
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);
    int reverse, d1, d2, d3;
    d3 = num%10;
    num = num/10;
    d2 = num%10;
    d1 = num/10;
    reverse = d3*100 +d2*10 + d1;
    printf("Reverse number: %d", reverse);
}