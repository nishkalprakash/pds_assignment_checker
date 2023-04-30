#include <stdio.h>
int main
{
    int a, b, c, d, e, f, x, y, z, u, v, w
    printf("Type a integer = \n");
    scanf("%d", n);
    if(n%2 == 1){
            a = n/10;
            x = n%10;
            b = n/100;
            y = a%10;
            c = n/1000;
            z = b%10;
            d = n/10000;
            u = c%10;
            e = n/10000;
            v = d%10;     
            f = n/100000;
            w = e%10;
            s = f%10
            printf("Most significant digits to least significant digits : %d, %d, %d, %d, %d, %d\n", f, e, d, c, b, a, n);

            printf("Reverse of the number = %d%d%d%d%d%d", x, y, z, u, v, w)

    }
    
    return 0;
}