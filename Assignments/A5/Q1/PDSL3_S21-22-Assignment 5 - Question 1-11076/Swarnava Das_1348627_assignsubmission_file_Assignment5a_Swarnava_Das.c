// NAME: SWARNAVA DAS
// ROLL: 21NA10037
// DEPARTMENT: OCEAN ENGINEERING AND NAVAL ARCHITECTURE
// PACKAGE: VISUAL STUDIO CODE
// ASSIGNMENT CLASS:5

#include <stdio.h>
void value(int *a, int *b, int *c)// my function defination
{
    int temp;
    if (*a > *b)
    {
        temp = *a;
        *a = *b;
        *b = temp;
    }
    if (*b > *c)
    {
        temp = *b;
        *b = *c;
        *c = temp;
    }
        if (*a > *b)
    {
        temp = *a;
        *a = *b;
        *b = temp;
    }
}
int main()
{
    int a, b, c;
    printf("enter 3 integers\n");
    scanf("%d%d%d", &a, &b, &c);//scaning integers
    printf("--before the function call--\n");
    printf("address of a = %u\n", &a);
    printf("address of b = %u\n", &b);
    printf("address of c = %u\n", &c);
    printf("values in a,b,c = %d,%d,%d\n", a, b, c);

    value(&a,&b,&c);//function call
    printf("--after the function call--\n");
    printf("address of a = %u\n", &a);
    printf("address of b = %u\n", &b);
    printf("address of c = %u\n", &c);
    printf("values in a,b,c = %d,%d,%d\n", a, b, c);//printing after function call

    return 0;
}
