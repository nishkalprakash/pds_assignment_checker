// NAME - AYUSH KUMAR MADHU
// ROLL NO. - 21AG30007
// SECTION - 03
// DEPT. - AGRICULTURAL AND FOOD ENGINEERING

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int n;
    int final_a = 0, final_b = 0, a_badge = 0, b_badge = 0;

    printf("Number of rounds : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int a, b, a_digits = 0, b_digits = 0, a_digitsum = 0, b_digitsum = 0;

        a = (rand() % (1000 - 5 + 1)) + 5;
        b = (rand() % (1000 - 5 + 1)) + 5;

        printf("ROUND %d :\n", i);
        printf("A's number : %d\t", a);
        printf("B's number : %d\n", b);

        while (a != 0)
        {
            a_digitsum += a % 10;
            a /= 10;
            a_digits += 1;
        }
        while (b != 0)
        {
            b_digitsum += b % 10;
            b /= 10;
            b_digits += 1;
        }

        if (a_digits > b_digits)
        {
            a_badge += 1;
            final_a += a_digits;
            final_b += b_digits;
            printf("A's point : %d\t\t", a_digits);
            printf("B's point : %d\n", b_digits);
            printf("A's badge : 1\t\t");
            printf("B's badge : 0\n");
            printf("\t-- A wins Round %d --\n\n", i);
        }
        else if (a_digits < b_digits)
        {
            b_badge += 1;
            final_a += a_digits;
            final_b += b_digits;
            printf("A's point : %d\t\t", a_digits);
            printf("B's point : %d\n", b_digits);
            printf("A's badge : 0\t\t");
            printf("B's badge : 1\n");
            printf("\t-- A wins Round %d --\n\n", i);
        }
        else
        {
            final_a += a_digitsum;
            final_b += b_digitsum;
            if (a_digitsum > b_digitsum)
            {
                a_badge += 1;
                printf("A's point : %d\t\t", a_digitsum);
                printf("B's point : %d\n", b_digitsum);
                printf("A's badge : 1\t\t");
                printf("B's badge : 0\n");
                printf("\t-- A wins Round %d --\n\n", i);
            }
            else
            {
                b_badge += 1;
                printf("A's point : %d\t\t", a_digitsum);
                printf("B's point : %d\n", b_digitsum);
                printf("A's badge : 0\t\t");
                printf("B's badge : 1\n");
                printf("\t-- B wins Round %d --\n\n", i);
            }
        }
    }

    int Afinal, Bfinal;
    Afinal = final_a * a_badge;
    Bfinal = final_b * b_badge;
    printf("Final Result : \n");
    printf("A's total score : %d, ", Afinal);
    printf("B's total score : %d\n", Bfinal);

    if (Afinal > Bfinal)
    {
        printf("\t--- A wins the game ---");
    }
    else
    {
        printf("\t--- B wins the game ---");
    }
    return 0;
}
