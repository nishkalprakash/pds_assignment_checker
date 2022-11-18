/*
NAME;KETHAVATH SHIVA
DEPARTMENT;MINING ENGENEERING
ROLL NO;21MI10029
operating system;windows
*/
#include <stdio.h>

void rearrange(int *a, int *b, int *c);

int main()
{
    int a, b, c;
    int *p1 = &a, *p2=&b, *p3=&c; // pointers for a b c
    printf("Enter 3 integers: ");
    scanf("%d%d%d", &a, &b, &c);

    printf("**Before function call**\n\n");

    printf("The address of a is %p and value is %d\n", &a, a);
    printf("The address of b is %p and value is %d\n", &b, b);
    printf("The address of c is %p and value is %d\n", &c, c);

    // fucntion call
    rearrange(p1, p2, p3);
    printf("\n**After function call**\n\n");

    printf("The address of a is %p and value is %d\n", &a, a);
    printf("The address of b is %p and value is %d\n", &b, b);
    printf("The address of c is %p and value is %d\n", &c, c);

    return 0;
}

void rearrange(int *a, int *b, int *c)
{
    int tem;
    int k[3];
    k[0] = *a;
    k[1] = *b;
    k[2] = *c;
    for (int p = 0; p < 3; p++)
    {

        for (int m = p + 1; m < 3; ++m)
        {

            if (k[p] > k[m])
            {

                tem = k[p];
                k[p] = k[m];
                k[m] = tem;
            }
        }
    }

    // giving back values to a  b and c
    *a = k[0];
    *b = k[1];
    *c = k[2];
}

