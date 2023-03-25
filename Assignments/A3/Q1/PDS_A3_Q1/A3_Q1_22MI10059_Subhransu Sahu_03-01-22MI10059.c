#include <stdio.h>
int main() {
    int a, b, c, d, e, f;

printf("Enter five numbers:");

scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

f = a%2 + b%2 + c%2 + d%2 + e%2;

if ( f = 2 && a>b && a>c && a>d && a>e)
    printf("Largest number is :%d",a);

else if ( f = 2 && a<b && b>c && b>d && b>e)
    printf("Largest number is :%d",b);

else if ( f = 2 && c>b && a<c && c>d && c>e)
    printf("Largest number is :%d",c);

else if ( f = 2 && d>b && d>c && d>a && d>e)
    printf("Largest number is :%d",d);

else if ( f = 2 && e>b && e>c && e>d && a<e)
    printf("Largest number is :%d",e);



return 0;
}

