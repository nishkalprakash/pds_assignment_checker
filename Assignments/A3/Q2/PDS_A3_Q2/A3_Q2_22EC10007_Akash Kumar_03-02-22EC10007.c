#include <stdio.h>

int main()
{
    int x, y;

    printf("Enter the number x\n");
    scanf("%d", &x);

    printf("Enter the number y\n");
    scanf("%d", &y);

    printf("P(%d, %d)\n", x, y);

    if ( -999 <= x <= 999 && -999 <= y <= 999)
        printf("Valid\n");
    else
        printf("Wrong Input/n");



    return 0;

}
