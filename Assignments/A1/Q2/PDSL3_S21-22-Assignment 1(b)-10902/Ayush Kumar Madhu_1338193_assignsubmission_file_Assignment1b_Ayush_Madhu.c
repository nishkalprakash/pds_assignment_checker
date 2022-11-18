#include <stdio.h>

int main() {
    int a,b;
    printf("Enter a 3-digit number: ");
    scanf("%d",&a);
    printf("Reverse number = ");
    printf("%d",a%10);
    a=a/10;
    printf("%d",a%10);
    a=a/10;
    printf("%d",a%10);
    return 0;
}